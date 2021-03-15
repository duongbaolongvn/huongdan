//
//  Common_Function.hpp
//  huongdan
//
//  Created by Duong Bao Long on 3/15/21.
//

#ifndef Common_Function_hpp
#define Common_Function_hpp

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>
#include <stdio.h>



//Screen dimension constants
static const int SCREEN_WIDTH = 640;
static const int SCREEN_HEIGHT = 480;

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;


namespace SDLcommonfunction {
//Starts up SDL and creates window
    bool init();

//Loads media
    bool loadMedia();

//Frees media and shuts down SDL
    void close();
    
}

#endif /* Common_Function_hpp */
