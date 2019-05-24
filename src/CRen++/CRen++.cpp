#include <iostream>
#include "CRen.hpp"
#include <string>
#include <SDL2/SDL.h>
#include "CRen++.h"
using namespace std;
#define main SDL_main
string character[2] = { };
int main(int argc, char **argv)
{
	CRenEngine::say("persoana1", "..care");
	CRenEngine::say("persoana2", "...PE CARE!");
	return 0;
}

