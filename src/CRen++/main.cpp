#include "CRen.hpp"
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
	CRenEngine::StartGame("Test Game", 0, 0, 1920, 1080, true);
}