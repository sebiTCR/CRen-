//       _____ _____                          _____ __  __ _____                                                  _       
//      / ____|  __ \            _     _     / ____|  \/  |  __ \      /\                                        | |      
//     | |    | |__) |___ _ __ _| |_ _| |_  | |    | \  / | |  | |    /  \   _ __ __ _ _   _ _ __ ___   ___ _ __ | |_ ___ 
//     | |    |  _  // _ \ '_ \_   _|_   _| | |    | |\/| | |  | |   / /\ \ | '__/ _` | | | | '_ ` _ \ / _ \ '_ \| __/ __|
//     | |____| | \ \  __/ | | ||_|   |_|   | |____| |  | | |__| |  / ____ \| | | (_| | |_| | | | | | |  __/ | | | |_\__ \
//      \_____|_|  \_\___|_| |_|             \_____|_|  |_|_____/  /_/    \_\_|  \__, |\__,_|_| |_| |_|\___|_| |_|\__|___/
//                                                                                __/ |                                   
//                                                                               |___/                                     

#include <iostream>

using namespace std;

class Args
{
    public:


        void help()
        {
            cout << "----------HELP-----------" << endl;    
            cout << "|how to run it:         |" << endl;
            cout << "|./engine [argument]    |" << endl;
            cout << "|             ^         |" << endl;
            cout << "|             |         |" << endl;//             _____    _______ 
            cout << "|             |         |" << endl;//     /\     |  __ \  |__   __|
            cout << "|Replace '[argument]'   |" << endl;//    /  \    | |__) |    | |
            cout << "|with any arguments     |" << endl;//   / /\ \   |  _  /     | |   
            cout << "|Listed below           |" << endl;//  / ____ \  | | \ \     | | 
            cout << "|                       |" << endl;// /_/    \_\ |_|  \_\    |_|   
            cout << "|--------arguments------|" << endl;//
            cout << "|                       |" << endl;// I want to be as user friendly as possible
            cout << "|open - Open a project  |" << endl;
            cout << "|                       |" << endl;
            cout << "|SetDefaultDir - open a |" << endl;
            cout << "|project by default when|" << endl;
            cout << "|you start the engine   |" << endl;
            cout << "|                       |" << endl;
            cout << "-------------------------" << endl;
        }
        


};