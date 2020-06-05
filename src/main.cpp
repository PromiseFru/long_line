#include <iostream>
#include "../include/myfunctions.h"

using namespace std;

int main(){

	int player = 1;
	int choice,from,to;
	char mark;

	// game start
	while (checkwin() == -1){
		// player selector
		player = (player%2) ? 1:2;
		// player mark selector
		mark = (player == 1) ? 'X':'O';

		// Draw board
		board();
		cout << endl;
		cout << searcharr('X') << endl;
		if(searcharr(mark) == 1){
			cout << "Player " << player << " move mark" << endl;
			cout << "From index ";
			cin >> from;
			cout << "To index ";
			cin >> to;
		}
		else{
			cout << "Player " << player << " enter number" << endl;
			cin >> choice;
		}

		writeboard(choice, mark, from, to, player);
		
		player++;

	}
	if(checkwin() == 1){
		player --;
		cout << "Player " << player << " Wins!" << endl;
	}
	// if(checkwin() == 0){
	// 	cout << "Match drawn" << endl;
	// }

	return 0;
}