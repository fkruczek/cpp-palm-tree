#include <iostream>
#include <ncurses/ncurses.h>
using namespace std;
int c;
int x;
int y;

int main()

{
initscr();
clear();
move(y , x);
printw("%d" , x);
refresh();
c = getch();
while((c = getch()) != KEY_F(1))
	{	switch(c)
		{	case KEY_LEFT:
				x++;

				break;
			case KEY_RIGHT:
				x--;

				break;
			case KEY_UP:
				y++;

				break;
			case KEY_DOWN:
				y--;

				break;
		}
	}

}
