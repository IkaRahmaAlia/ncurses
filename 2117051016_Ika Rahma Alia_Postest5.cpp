#include <ncurses\ncurses.h>
#include <iostream>
using namespace std;

int main(){
	initscr();
	char npm[256];
	char nama[256];
	
//input	
	getstr(nama);
	scanw("%s", &npm);
	
//output
	printw ("NAMA: %s \n",nama);
	printw ("NPM: %s",npm);
	
	
	refresh();
	getch();
	endwin();
}
