/* Author: Sn0k3 */
/* It is simple SDL window :P */
#include <SDL/SDL.h>

int main(int argc, char*argv[])
{
SDL_Init(SDL_INIT_EVERYTHING);

SDL_Surface * imageOne = NULL;
SDL_Surface * screen = NULL;

SDL_Event event;
bool izhod = false;

// Init Screen
screen = SDL_SetVideoMode(640,480,24, SDL_SWSURFACE);

// Loading the img
imageOne = SDL_LoadBMP("untitled.bmp");

// Apply image to the screen
SDL_BlitSurface(imageOne,NULL,screen,NULL);

// Updating the screen.
SDL_Flip(screen);

while(!izhod)
{
    if(SDL_PollEvent(&event))
    {

    if(event.type == SDL_QUIT)
    {
        izhod = true;
    }

    }
}

SDL_Quit();

    return 0;
}
