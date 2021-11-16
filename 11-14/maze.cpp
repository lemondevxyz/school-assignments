#include <iostream.h>
#include <conio.h>
#include <vector.h>
#include <stdlib.h>
using namespace std;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int main() {
	vector<string> maze;
	maze.push_back("= ******");	
	maze.push_back("*  *** *");
	maze.push_back("*    * *");
	maze.push_back("** * * *");
	maze.push_back("**     *");
	maze.push_back("   *** /");
	
	int width = 8;
	int x = 0;
	int y = 0;
	for(;;) {
		system("cls");
		for(int i =0; i < maze.size(); i++) {
			cout << maze[i] << endl;
		}
		
		int oldx = x;
		int oldy = y;
		switch(getch()) {
			case UP:
				y--;
				break;
			case DOWN:
				y++;
				break;
			case LEFT:
				x--;
				break;
			case RIGHT:
				x++;
				break;
			case 'q':
			case 'Q':
				cout << "Exit" << endl;
				return 0;
		}
		
		// check the validity
		if(x >=0 && y >= 0 && x < width && y < maze.size()) {
			char c = maze[y].at(x);
			if(c == '*') {
				x = oldx;
				y = oldy;
			} else {
				maze[oldy] = maze[oldy].replace(oldx, 1, " ");
				maze[y] = maze[y].replace(x, 1, "=");
			}
			
			if(c == '/') {
				system("cls");
				for(int i=0; i < maze.size(); i++) {
					cout << maze[i] << endl;
				}
				cout << "You win !!!" << endl;
				return 0;
			}
		} else {
			x = oldx;
			y = oldy;
		}
	}
}