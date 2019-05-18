#pragma once
#include <iostream>
#include <string>
#include <SDL2/SDL.h>
using namespace std;
class CRenEngine 
{
	public:
		SDL_Window* GameWindow = NULL;

		SDL_Surface* GameScreenSurface = NULL;

		CRenEngine();
		~CRenEngine();
		void StartGame(string GameName, int posX,int posY,int width,int height, bool fullscreen)
		{
			GameWindow = SDL_CreateWindow("CRen++", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
			if (GameWindow == NULL)
			{
				printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
				Running = false;
			}
			else
			{
				//Get window surface
				GameScreenSurface = SDL_GetWindowSurface(GameWindow);

			}
		}
		void say(string name, string text)
		{
			string dialogue = name + ": " + text;
			cout << dialogue;
		}
	private:
		bool Running;
};
