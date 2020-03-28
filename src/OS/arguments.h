//       _____ _____                          _____ __  __ _____                                                  _       
//      / ____|  __ \            _     _     / ____|  \/  |  __ \      /\                                        | |      
//     | |    | |__) |___ _ __ _| |_ _| |_  | |    | \  / | |  | |    /  \   _ __ __ _ _   _ _ __ ___   ___ _ __ | |_ ___ 
//     | |    |  _  // _ \ '_ \_   _|_   _| | |    | |\/| | |  | |   / /\ \ | '__/ _` | | | | '_ ` _ \ / _ \ '_ \| __/ __|
//     | |____| | \ \  __/ | | ||_|   |_|   | |____| |  | | |__| |  / ____ \| | | (_| | |_| | | | | | |  __/ | | | |_\__ \
//      \_____|_|  \_\___|_| |_|             \_____|_|  |_|_____/  /_/    \_\_|  \__, |\__,_|_| |_| |_|\___|_| |_|\__|___/
//                                                                                __/ |                                   
//                                                                               |___/                                     

#include <iostream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

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
            cout << "|init - if this is the  |" << endl;
            cout << "|first time when you use|" << endl;
            cout << "|this engine, use this  |" << endl;
            cout << "|argument to setup the  |" << endl;
            cout << "|engine.                |" << endl;
            cout << "|                       |" << endl;
            cout << "|open - Open a project  |" << endl;
            cout << "|                       |" << endl;
            cout << "|SetDefaultDir - open a |" << endl;
            cout << "|project by default when|" << endl;
            cout << "|you start the engine   |" << endl;
            cout << "|                       |" << endl;
            cout << "|Credits - Show credits |" << endl;
            cout << "|                       |" << endl;            
            cout << "------Important----------" << endl;
            cout << "|Some features may not  |" << endl;
            cout << "|work because this game |" << endl;
            cout << "|engine is still in     |" << endl;
            cout << "|development            |" << endl;
            cout << "-------------------------" << endl;
        }

        void credits()
        {
            cout << "-------------------------" << endl;
            cout << "|Developers:            |" << endl;
            cout << "|-SebiTCR               |" << endl;
            cout << "|-----------------------|" << endl;
            cout << "|Open source libraries  |" << endl;
            cout << "|(used in this project) |" << endl;
            cout << "|     |   |   |         |" << endl;
            cout << "|     V   V   V         |" << endl;
            cout << "|                       |" << endl;
            cout << "|JSON - nlohmann        |" << endl;
            cout << "-------------------------" << endl;
        }

        
        


};