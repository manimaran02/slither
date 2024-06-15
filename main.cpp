#include <iostream>
#include <curses.h>

using namespace std;



int main(){

initscr();
move(10,10);
// cout <<  " # " << endl;
addch('$');

getch();
endwin();

  return 0;
}