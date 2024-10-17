#ifndef COBRA_H
#define COBRA_H

void abrir_janela();

#endif
//////////////////////
#include "cobra.h"  // Certifique-se de que "cobra.h" existe e está no diretório correto
#include <SDL2/SDL.h>
#include <stdio.h>

#define WINDOW_X 0
#define WINDOW_Y 0
#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 1000

int main(int argc, char **argv)
{
    SDL_Window *window;
    SDL_Renderer *renderer;

    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {  // Corrigido: chamada correta de SDL_Init
        fprintf(stderr, "ERROR: SDL_Init failed: %s\n", SDL_GetError());
        return -1;
    }

    // Criar a janela
    window = SDL_CreateWindow(
        "Cobra",
        WINDOW_X,
        WINDOW_Y,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_BORDERLESS // Flag correta para janela sem bordas
    );

    if (!window) {
        fprintf(stderr, "ERROR: Failed to create window: %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }

    // Criar o renderizador
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (!renderer) {
        fprintf(stderr, "ERROR: Failed to create renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    // Definir a cor de renderização (verde)
    SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 255); // Verde com transparência máxima
    SDL_RenderClear(renderer); // Limpa a tela
    SDL_RenderPresent(renderer); // Apresenta o conteúdo da tela

    SDL_Delay(2000); // Esperar 2 segundos

    // Destruir o renderizador e a janela
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
