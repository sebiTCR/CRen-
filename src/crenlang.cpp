//      /  __ \| ___ \           _     _         |  ___(_) |                                      
//      | /  \/| |_/ /___ _ __ _| |_ _| |_       | |_   _| | ___   _ __   __ _ _ __ ___  ___ _ __ 
//      | |    |    // _ \ '_ \_   _|_   _|      |  _| | | |/ _ \ | '_ \ / _` | '__/ __|/ _ \ '__|
//      | \__/\| |\ \  __/ | | ||_|   |_|        | |   | | |  __/ | |_) | (_| | |  \__ \  __/ |   
//       \____/\_| \_\___|_| |_|                 \_|   |_|_|\___| | .__/ \__,_|_|  |___/\___|_|   
//                                                                | |                             
//                                                                |_|                             
//                      It's used to parse CRSF (CRen++ File Types) file types



#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include "CRTags.h"

using namespace std;

bool debug = true;
vector < string > scriptFileData;
vector < string > Dialogs;
string TempDial;
int linesOfCodeSCRIPT;
int tag;
string line;
ifstream scriptFile;// ("Data/script.crsf");
CRTags Ctag;
//string tag;



string GetTag(int col)
{
    for(int x = 0; x <= 5; x++)
    {   
        
        //if(firstCharTAG == scriptFileData[col].at(0) && scriptFileData[col].at(6) == lastCharTag)
        //{
        //    if(debug){cout << "TAG DETECTED" << endl;}
        //}
        //else
        //{
        //    cout << "Tag not detected" << endl;
        //}
        
    }
}

void parseScript()
{   // ----VARIABLES----


    scriptFile.open("/mnt/h/codes/github/CRenPlusPlus/bin/script.crsf");    
    if(scriptFile.is_open())
    {

        while(getline(scriptFile,line)) 
        {
            if(debug){cout << line << endl;}
            scriptFileData.push_back(line);
        } // Count how many lines of code we have in our script file
        if(debug)
        {
            cout << "Lines of code in: " + linesOfCodeSCRIPT << endl;
            cout << scriptFileData.size() << endl;
        }
        for (int i = 0; i <= scriptFileData.size(); i++)
        {
            
            // if(scriptFileData[i].find("<dialog>"))
            // {
            //     
            //     cout << "found!" << endl;
            //     cout << scriptFileData[i] <<endl;
            //     TempDial = scriptFileData[i];
            //     TempDial.erase(0,8);
            //     Dialogs.push_back(TempDial);
            //     cout << Dialogs[0];
            // }
            
            //switch(tag)
            //{

            //}
            
        }
            
        
    }
    else
    {
        cout << "No script file found!";
    }
    
}
