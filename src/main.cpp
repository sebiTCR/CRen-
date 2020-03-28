#include "CRen.h"
#include "OS/errorColorCodes.h"
#include "OS/arguments.h"
#include "ENGINE/settings.h"
#include "ENGINE/maintenance.h"
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

      else if (arg == "init")
      {
        Settings s(true);
      }

      else if (arg == "credits")
      {
        args.credits();
      }

      else if (argv[1] == NULL)
      {
        notice::logWarning("Sorry, the 'load default project at startup' is no longer available. It will be implemented in the near future!");
      }

    }

}