//     ______   ______     ______     __    __     __     __   __     ______     __            ______     ______     __         ______     ______     ______    
//    /\__  _\ /\  ___\   /\  == \   /\ "-./  \   /\ \   /\ "-.\ \   /\  __ \   /\ \          /\  ___\   /\  __ \   /\ \       /\  __ \   /\  == \   /\  ___\   
//    \/_/\ \/ \ \  __\   \ \  __<   \ \ \-./\ \  \ \ \  \ \ \-.  \  \ \  __ \  \ \ \____     \ \ \____  \ \ \/\ \  \ \ \____  \ \ \/\ \  \ \  __<   \ \___  \  
//       \ \_\  \ \_____\  \ \_\ \_\  \ \_\ \ \_\  \ \_\  \ \_\\"\_\  \ \_\ \_\  \ \_____\     \ \_____\  \ \_____\  \ \_____\  \ \_____\  \ \_\ \_\  \/\_____\ 
//        \/_/   \/_____/   \/_/ /_/   \/_/  \/_/   \/_/   \/_/ \/_/   \/_/\/_/   \/_____/      \/_____/   \/_____/   \/_____/   \/_____/   \/_/ /_/   \/_____/ 
//
//               "Every error should have its own color" -SebiTCR             
//              [WARNING] TO BE ONLY USED ON LINUX/MacOS! NOT COMPATIBLE WITH WINDOWS!                                                                                                   

#include <iostream>
#include <string>


using namespace std;

namespace notice
{

    void    logError(string input)
    {
                // RED                                //Reset Color
                //  |                                 // |
                //  V                                 // V
        cout << "\033[31m" << "[Error]: " << input << "\033[0m" << endl;    
    }
    
    void    logWarning(string input)
    {
                // Yellow                                //Reset color
                //  |                                    //  |
                //  V                                    //  V
        cout << "\033[33m"  << "[Warning]: " << input << "\033[0m"  << endl;
    }

    void    logGood(string input)
    {
                // Green                                //Reset color
                //  |                                   //  |
                //  V                                   //  V
        cout << "\033[32m" << "[Notice]: " << input << "\033[33m" << endl;
        
    }


}