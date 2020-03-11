#ifndef SETTINGS_H
#define SETTINGS_H

#include <fstream>
#include <iostream>
#include <json/reader.h>
#include <json/value.h>
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
       
       
        void parseSettings()
        {
            ifstream ifs(ProjectPath + "/cfg/settings.json");
            if (ifs.is_open())
            {
                cout << ifs.rdbuf();
                ifs.close();
            }
            
            if (ifs.bad())
            {
                cout << "ERROR: settings.json is missing or it's corrupted!" << endl;
            }

        }
        
        private:
        ifstream ifs;
};


#endif