#include <iostream>
#include <curses.h>
#include "ui.h"
#include "game.h"

using namespace std;

void event_loop(){
  
  while (true){
    erase();
    game_logic();
    // getch();
    refresh();
    //sleep(100);

  }
}


int main(){

cout << (char) 210;

  init_ui();
  event_loop();
 
  tear_down_ui();
   
  return 0;
}