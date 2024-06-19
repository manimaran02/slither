#include "ui.h"

char bord = (char)210;

void init_ui(){

 initscr();

}


void tear_down_ui(){

    endwin();

}

void paint_border(){

    for(int i=0; i < COLS ; i++){
        move(0,i);
        addch(bord);
        move(LINES-1,i);
        addch(bord);

    }


    for(int i =1;i< LINES-1;i++){
        move(i,0);
        addch(bord);
        move(i,COLS-1);
        addch(bord);
    }



// getch();



}