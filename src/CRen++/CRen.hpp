#pragma once
#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#define main SDL_main
using namespace std;
class CRenEngine 
{
	public:
		SDL_Window* GameWindow = NULL;

		SDL_Surface* GameScreenSurface = NULL;

		CRenEngine();
		~CRenEngine();
		void StartGame(char *GameName, int posX,int posY,int width,int height, bool fullscreen)
		{
			GameWindow = SDL_CreateWindow(GameName,posX,posY, width, height, SDL_WINDOW_SHOWN);
			if (GameWindow == NULL)
			{
				printf("The game can't be loaded, SDL_Error: %s\n", SDL_GetError());
				Running = false;
			}
			else
			{
				//Get window surface
				GameScreenSurface = SDL_GetWindowSurface(GameWindow);

			}
		}
		static void say(string name, string text)
		{
			string dialogue = name + ": " + text;
			cout << dialogue << endl;
		}
		bool Running;
};
