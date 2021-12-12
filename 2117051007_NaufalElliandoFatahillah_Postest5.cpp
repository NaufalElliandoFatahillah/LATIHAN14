#include<ncurses.h>
using namespace std;

int main(){
	initscr();
	char nama_anda[200];
	char alamat_anda[200];
	char hobi_anda[200];
	
    printw("");getstr(nama_anda);
    printw("");getstr(alamat_anda);
    printw("");getstr(hobi_anda);
	
	mvprintw(5,0,"Nama   : ");printw(nama_anda);
	mvprintw(6,0,"Alamat : ");printw(alamat_anda);
	mvprintw(7,0,"Hobi   : ");printw(hobi_anda);
	
	refresh();
	
	getch();
	
	endwin();
}
