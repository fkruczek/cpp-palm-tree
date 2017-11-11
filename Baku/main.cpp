#include <iostream>
#include <ncurses/ncurses.h>
using namespace std;
int c;
int x=10;
int y=10;

int main()
{
    initscr();
    while(c != 27)
        {
            c=getch();
            switch(c)
            {
                case 119://w
                    y--;
                break;
                case 97://a
                    x--;
                break;
                case 115://s
                    y++;
                break;
                case 100://d
                    x++;
                break;
                default: break;
            }
              clear();
              move(y,x);
              refresh();
              printw("BAKU");
       }


       getch();
       endwin();
       return 0;
}
