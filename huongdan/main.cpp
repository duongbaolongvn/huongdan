
/*This source code copyrighted by Lazy Foo' Productions (2004-2020)
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, and strings

// first commit

#include "Character.hpp"
#include "Common_Function.hpp"

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !SDLcommonfunction::init() )
    {
        printf( "Failed to initialize!\n" );
    }
    else
    {
        //Load media
        if( !SDLcommonfunction::loadMedia() )
        {
            printf( "Failed to load media!\n" );
        }
        else
        {
            //Main loop flag
            bool quit = false;

            //Event handler
            SDL_Event e;

            //The dot that will be moving around on the screen
            Dot dot;

            //While application is running
            while( !quit )
            {
                //Handle events on queue
                while( SDL_PollEvent( &e ) != 0 )
                {
                    //User requests quit
                    if( e.type == SDL_QUIT )
                    {
                        quit = true;
                    }

                    //Handle input for the dot
                    dot.handleEvent( e );
                }

                //Move the dot
                dot.move();

                //Clear screen
                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
                SDL_RenderClear( gRenderer );

                //Render objects
                dot.render();

                //Update screen
                SDL_RenderPresent( gRenderer );
            }
        }
    }

    //Free resources and close SDL
    SDLcommonfunction::close();

    return 0;
}
