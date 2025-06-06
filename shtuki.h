#pragma once
#include "funkcii.h"
enum GameObject : short {
    HALL,
    WALL,
    COIN,
    ENEMY,
    HEALTH,
    ENERGY
};

// Цвета
enum Color : short {
    BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
    PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
    CYAN, RED, PINK, YELLOW, WHITE, LIGHTRED
};
// Кнопки
enum Key : short {
    LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80,
    ENTER = 13, SPACE = 32, ESCAPE = 27, BACKSPACE = 8
};