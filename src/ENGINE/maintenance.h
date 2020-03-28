//                 _       _                                  
//                (_)     | |                                 
// _ __ ___   __ _ _ _ __ | |_ ___ _ __   __ _ _ __   ___ ___ 
//| '_ ` _ \ / _` | | '_ \| __/ _ \ '_ \ / _` | '_ \ / __/ _ \
//| | | | | | (_| | | | | | ||  __/ | | | (_| | | | | (_|  __/
//|_| |_| |_|\__,_|_|_| |_|\__\___|_| |_|\__,_|_| |_|\___\___|
//
//  If something goes bad (The engine won't run, Engine is corrupt.. ..etc..) you can use this class to fix some problems
//


#include <iostream>
#include <fstream>
#include "settings.h"

using namespace std;

class maintenance
{
    public:

        void ftSetup()  //first time setup
        {
            ofstream ofs;
            ofs.open("settings.json");
            ofs << "{\"EngineVersion\":\"INDEV-0.0.5","LoadDefaultProjectAtStartup\":false,\"defaultProjectLocation\":\"\",\"firstTime\":false}"; // This is just a dummy JSON script (the engine won't work if the file is empty)
            ofs.close();
            //Settings s;
            //s.init();
        }

};

