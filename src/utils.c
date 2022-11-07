#include <stdlib.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include "headers/entity.h"
#include "headers/constants.h"
#include "headers/utils.h"

/**
 * ==============================
 * ====== WRAPPER FUNCTION ======
 */

void scc(int code){
    if(code < 0){
        printf("SDL Error: %s", SDL_GetError());
        exit(1);
    }
    return;
}

void *scp(void *ptr){
    if(ptr == NULL){
        printf("SDL Error: %s", SDL_GetError());
        exit(1);
    }
    return ptr;
}

/**
 * ==============================
 * ====== RANDOM FUNCTION =======
 */

Position getRandomPosition(){
    int x = getRandomInt(0, SCREEN_WIDTH);
    int y = getRandomInt(0, SCREEN_HEIGTH);

    Position newPosition = {x, y};
    return newPosition;
}

int getRandomInt(int min, int max) { return rand() % (max + 1 - min) + min; }
