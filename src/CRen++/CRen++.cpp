
#include <SDL2/SDL.h>
#include <stdio.h>
#include "game.hpp"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

bool init();


bool loadMedia();

void close();


bool init()
{
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		//Create window

	}

	return success;
}



void close()
{
	//Deallocate surface
	SDL_FreeSurface(TXT_Dialog);
	TXT_Dialog = NULL;

	//Destroy window
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;

	//Quit SDL subsystems
	SDL_Quit();
}

int main(int argc, char* args[])
{
	//Start up SDL and create window
	if (!init())
	{
		printf("Failed to initialize!\n");
	}
	else
	{
		//Load media
		if (!loadMedia())
		{
			printf("Failed to load media!\n");
		}
		else
		{
			//Apply the image
			SDL_BlitSurface(TXT_Dialog, NULL, gScreenSurface, NULL);

			//Update the surface
			SDL_UpdateWindowSurface(gWindow);

			//Wait two seconds
			SDL_Event e;
			while (SDL_PollEvent(&e) != 0)
			{
				
			}
			
		}
	}

	//Free resources and close SDL
	close();

	return 0;
}