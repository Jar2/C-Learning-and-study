#include "SDL/SDL.h"
#include "SDL/SDL_image"
#include <string>

using namespace std;

int const Width = 640;
int const Height = 480;
int const screen_bpp = 32;

SDL_Surface *message = NULL;
SDL_Surface *background = NULL;
SDL_Surface *screen = NULL;

SDL_Surface*load_image (string filename)
{
	SDL_Surface *loadedIMG = NULL;

	SDL_Surface* optimizeIMG = NULL;

	loadedIMG = SDL_Load
}


int main(int argc, char* args[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Quit();
}
