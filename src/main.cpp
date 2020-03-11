#include "CRen.h"

//#include <gtkmm/application.h>
//#include "OS/IOFileDialog.h"



int main(int argc, char *argv[])
{
    
    CRen engine;
    for (int i = 0; i < argc; ++i) 
    {
      string arg = argv[i]; 
      int dirTrigger = 0;
      
      if(arg == "open") 
      {
        cout << "insert path to project: ";
        cin >> engine.projectLocation;
        engine.start();
        dirTrigger++;
      }
      else if (arg == "SetDefaultDir")
      {
        string defaultdir;
        cout << "Insert default project dir (experimental): ";
        cin >> defaultdir;
        engine.DefaultDir(1,defaultdir);
        dirTrigger++;
      }

    }

}