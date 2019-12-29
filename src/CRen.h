#ifndef CREN_H
#define CREN_H

#include <iostream>
#include <string>
#include "Game/game.cpp"
using namespace std;
class CRenEngine 
{
	public:


		CRenEngine();
		~CRenEngine();
		void game()
		{
			
		}
		void say(string name, string text) //It will be replaced in the future.
		{
			string dialogue = name + ": " + text;
			cout << dialogue << endl;
			system("pause");
			
		}
		
};

#endif