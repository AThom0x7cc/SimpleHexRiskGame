#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "defs.h"
#include "utility.h"

SDL_Window *create_window(int width, int height);

SDL_Renderer *crete_renderer(SDL_Window *window);

void draw_filled_hex(SDL_Renderer *renderer, int x, int y, int size, Color color);

void draw_hex(SDL_Renderer *renderer, int x, int y, int size, Color color);

#endif