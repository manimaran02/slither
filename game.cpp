#include "game.h"
#include "ui.h"


int i =10;


void game_logic(){
      paint_border();
      move(10,i);
      addch('#');
      i++;

}
 