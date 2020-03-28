#ifndef SETTINGS_H
#define SETTINGS_H

#include <fstream>
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <experimental/filesystem>
#include <unistd.h>



using namespace nlohmann;
using namespace std;

class Settings
{
    public:

    
        //Get current dir
        char *buf;
        size_t size;
        string currentFolder = getcwd(buf,size); //Get path to the current folder
        
        string ProjectPath;
        json settingsFileJSON;  

        // ENGINE DATA
        string engineVersion = "";
        bool firstTime = true;

        //SETTINGS
        string DefaultProjectLocation; 
        bool LoadDefaultProject;
       
        
       
     
        Settings(bool isMaintenance)
        {
            if (!isMaintenance)
            {
                ofstream JFile;
                JFile.open("settings.json", ios_base::out | ios_base::in);
                if(JFile.fail())
                {

                    JFile.open(currentFolder + "/settings.json");
                    if(JFile.is_open())
                    {
                        JFile << "{}";
                        settingsFileJSON["firstTime"] = true;
                        JFile << settingsFileJSON;
                        //Settings();
                    }
                    else
                    {
                        cout << "failed to open Settings.JSON" << endl;
                    }

                }
                else
                {
                    cout << "everthing good" << endl;
                    parseSettings();
                }
            }
            else
            {
                init();
            }
        
        }


        void init()
        {
            

            string USEsetDefaultDir;
        
            ofstream JFile;
            JFile.open("settings.json");
            if(JFile.is_open() && !JFile.bad())
            {
                cout << "Do you want to open a project by default when you start the engine?[Y/n]" << endl;
                cin >> USEsetDefaultDir;
                
                if(USEsetDefaultDir == "Y" || USEsetDefaultDir == "y")
                {
                    string location;
                    cout << "Insert project location" << endl;
                    cin >> location;
                    settingsFileJSON["defaultProjectLocation"] = location;
                    settingsFileJSON["LoadDefaultProjectAtStartup"] = true;
                    settingsFileJSON["firstTime"] = false;
                    

                }
                else
                {
                    settingsFileJSON["defaultProjectLocation"] = "";
                    settingsFileJSON["LoadDefaultProjectAtStartup"] = false; 
                    settingsFileJSON["firstTime"] = false;
                }
                
                settingsFileJSON["EngineVersion"] = engineVersion;
                cout << "Creating settings file... (settings.json)" << endl;
                JFile << settingsFileJSON;
                JFile.close();
                firstTime = false;
                
            }


        
        }

       
        void parseProjectSettings()
        {
            ifstream ifs(ProjectPath + "/cfg/settings.json");
            string line;
            
            while(getline(ifs,line)) 
            {
                JSONSettingsData += line; 
            }
        }


        void parseSettings()
        {
           
            ifstream ifs(currentFolder + "/settings.json");
            while (getline(ifs,line))
            {
                JSONSettingsData = JSONSettingsData + line;
            }
            //TODO: FIX JSON PARSING ASAP
            auto SettingsData = json::parse(JSONSettingsData);
            DefaultProjectLocation = SettingsData["defaultProjectLocation"].get<string>();
            LoadDefaultProject = SettingsData["LoadDefaultProjectAtStartup"].get<bool>();
            
        }
        
        private:
        
        char readBuffer[1024];
        string JSONSettingsData = "";
        
        
        //char * pathChar[ProjectPath.size() + 20] = ProjectPath;
     
};


#endif