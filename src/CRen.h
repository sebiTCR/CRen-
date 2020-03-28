// 			 _____  _____
//          /  __ \| ___ \           _     _   
//          | /  \/| |_/ /___ _ __ _| |_ _| |_ 
//          | |    |    // _ \ '_ \_   _|_   _|
//          | \__/\| |\ \  __/ | | ||_|   |_|  
//           \____/\_| \_\___|_| |_|           
//          
//              CRen++? More like Siren ++
                                   


#ifndef CREN_H
#define CREN_H

#include <iostream>
#include <string>
#include <fstream>
#include "ENGINE/crenlang.h"
#include "ENGINE/settings.h"



using namespace std;

class CRen
{
	public:
		CRen();
		~CRen();
	
		
		string projectLocation;
		//Settings s;

	
		void start() //It starts the engine, and it loads the project
		{

			//parseScript(projectLocation);

		}
	
		void DefaultDir(int type, string dir) //use 1 as parameter to set a default project dir, or use 2 to get the default project dir (path)
		{									 // TODO: Implement this feature btw.
			switch (type)
			{
			case 1:
	
	
				break;
			case 2:
				break;
			
			default:
				break;
			}
		}
		private:
		

};


CRen::CRen()
{
   
}

CRen::~CRen()
{
    
}                  

#endif