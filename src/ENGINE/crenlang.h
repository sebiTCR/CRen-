//      /  __ \| ___ \           _     _         |  ___(_) |                                      
//      | /  \/| |_/ /___ _ __ _| |_ _| |_       | |_   _| | ___   _ __   __ _ _ __ ___  ___ _ __ 
//      | |    |    // _ \ '_ \_   _|_   _|      |  _| | | |/ _ \ | '_ \ / _` | '__/ __|/ _ \ '__|
//      | \__/\| |\ \  __/ | | ||_|   |_|        | |   | | |  __/ | |_) | (_| | |  \__ \  __/ |   
//       \____/\_| \_\___|_| |_|                 \_|   |_|_|\___| | .__/ \__,_|_|  |___/\___|_|   
//                                                                | |                             
//                                                                |_|                             
//                      It's used for parse CRSF (CRen++ Script File)  files
//                      0/10 Instructions unclear.Hacked NASA instead

//                         [IMPORTANT]
//                          NO "SELECT FOLDER" MENU FOR PROJECTS. TO BE IMPLEMENTED ASAP.

# define _POSIX_C_SOURCE 200809L

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>


using namespace std;




bool debug = true;
vector < string > scriptFileData;
vector < string > Dialogs;
string TempDial;
int linesOfCodeSCRIPT;
int tag;
string line;
ifstream scriptFile;// ("Data/script.crsf");

//char TagDetected(int col1, int TT1)
//{
//    return scriptFileData[col1].at(TT1);
//};
char lastCharTag = 62;
char firstCharTag = 60;
//string tag;



int GetTag(int col)
{ 

    
    if(firstCharTag == scriptFileData[col].at(0) && scriptFileData[col].at(6) == lastCharTag)
    {
        if(debug){cout << "TAG DETECTED" << endl;}
        //for(int TT = 1;TT <= 5; TT++)
        //{
        //    //TODO:
        //    //Search every char in a tag and then return an INT
        //    //TagDetected(col,TT);
        //    if(TagDetected(col,TT) == dialg)
        //    {
        //        return 2;
        //    }
        //    else
        //    {
        //        cout << "Not Detected";
        //    }
//
        //}

    }
    else
    {
        cout << "Tag not detected" << endl;
    }
        
    return 0;
}

void parseScript(string dataPath)
{   // ----VARIABLES----


    scriptFile.open(dataPath + "/main.crsf");    
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
            
            switch(GetTag(i))
            {
                
            }
           
        }
            
        
    }
    else
    {
        cout << "ERROR: project not detected" << endl;
    }
    
}

