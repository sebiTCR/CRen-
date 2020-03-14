#include "CRen.h"
#include "OS/errorColorCodes.h"
#include "OS/arguments.h"
//#include <gtkmm/application.h>
//#include "OS/IOFileDialog.h"



int main(int argc, char *argv[])
{
    Args args;
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

      else if (arg == "help")
      {
          args.help();
      }

      else if (arg == "")
      {

        notice::logError("No valid arguments detected! Type 'help' for more infos");
        
      }

    }

}