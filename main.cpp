#include <iostream>
#include <curses.h>
#include "ui.h"
#include "game.h"
#include <chrono>

using namespace std;
// using namespace chrono;


int time_delay  = 500000;


void event_loop(){
  int dt;
  while (true){

    auto last_time = chrono::system_clock::now();
    
    erase();
    game_logic();
    // getch();
    refresh();
    do{
      auto current_time = chrono::system_clock::now();
      dt = chrono::duration_cast<std::chrono::microseconds>(current_time - last_time).count();

    }while(dt < time_delay);
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