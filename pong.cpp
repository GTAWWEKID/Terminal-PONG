#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>
#include <cstdlib>
//My UNIVERSAL library to check OS system commands
#include "GTAWWEKID.h"

using namespace std;

//text cout << "\033[1;31m text \033[0m\n";

/*
	TEST: GAMEBOARD

codes:
━ = U2501
┃ = U2503
◉ = U25C9
‖ = ?????

		0	1	2	3	4
	0123456789012345678901234567890123456790123456789
0	━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
1        	              ¦
2	  ┃                   ¦
3	  ┃    ◉              ¦
4	  ┃                   ¦
5	                      ¦
6	                      ¦
7	           ∘          ¦                   ‖
8	                      ¦                   ‖
9	                      ¦                   ‖
0	                      ¦
1	                      ¦
2	                      ¦
3	━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
4 -----------------------------------------------------------

*/

int main()
{
	int  board_x = 40;
	int  board_y = 14;
	int  board_split = 24;

	char _border[] = "\u2501";
	char _playerBit[] = "\u2503";
	char _puck[] = "\u25C9";
	char _null[] = " ";

	system(CLEAR);
	//printf("TEST: %s  \n\n\n", _puck);

	int scr_x, scr_y;

	scr_y = 0;
	do{
		scr_x = 0;
		do{
			if(scr_y = 0 || 13) cout << _border;
			else cout << _null;

			scr_x = scr_x + 1;
       		}while(scr_x < board_x);

		cout << endl;
		scr_y = scr_y + 1;
	}while(scr_y < board_y);

	return 0;

}
