#ifndef SETTINGS_H
#define SETTINGS_H

#include <fstream>
#include <iostream>
#include <string>




using namespace std;

class Settings
{
    public:
    
        string ProjectPath;
       
     
      

        Settings()
        {
            parseSettings();
        }
       
        void storeSettingDetails()
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
            ifstream ifs(ProjectPath + "/cfg/settings.json");
            
            if (ifs.is_open())
            {
                //TODO: PARSE FILE AND ADD THE CONTENTS IN A VARIABLE
                storeSettingDetails();
            
                
            }
            
            if (ifs.bad())
            {
                cout << "ERROR: settings.json is missing or it's corrupted!" << endl;
            }

        }
        
        private:
   
        char readBuffer[1024];
        string JSONSettingsData = "";
        
        
        //char * pathChar[ProjectPath.size() + 20] = ProjectPath;
     
};


#endif