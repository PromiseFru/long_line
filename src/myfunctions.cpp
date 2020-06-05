#include <iostream>
#include "../include/myfunctions.h"

using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board(){
	system("clear");
	cout << "_____ _____ _____" << endl;
	for(int i=1; i<=9; i+=3){
		cout << "     |     |     |" << endl;
		cout << "  " << square[i] << "  " << "|";
		for (int j = 1; j <=2; j++){
				cout << "  " << square[j+i] << "  " << "|";
			}
		cout << endl;
		cout << "_____|_____|_____|" << endl;
	}
}

int checkwin(){
	// return 1 if any win case
	// return 0 if match draw
	// return -1 if game is still going on

	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	if (square[4] == square[5] && square[5] == square[6])
		return 1;
	if (square[7] == square[8] && square[8] == square[9])
		return 1;
	if (square[1] == square[4] && square[4] == square[7])
		return 1;
	if (square[2] == square[5] && square[5] == square[8])
		return 1;
	if (square[3] == square[6] && square[6] == square[9])
		return 1;
	if (square[1] == square[5] && square[5] == square[9])
		return 1;
	if (square[3] == square[5] && square[5] == square[7])
		return 1;
	if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}

int searcharr(char find){
	//TODO search Square[] for 'X' AND 'O' values
	int i;
	int n = sizeof(square)/sizeof(square[0]);
	int count = 0;
	for(i=0; i<n; i++){
		if(square[i] == find){ 
			count++;
		} 
	}	
	
	//TODO get return values
	if(count >= 3){
		return 1;
	}else{
		return 0;
	}
	
}

void writeboard(int choice, char mark, int from, int to, int player){
	// write board
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		
		//mark movement logic 1 
		else if (from == 1 && to == 2 && square[1] == mark && square[2] == '2'){
			square[1] = '1';
			square[2] = mark;
		}
		else if (from == 1 && to == 3 && square[1] == mark && square[3] == '3'){
			square[1] = '1';
			square[3] = mark;
		}
		else if (from == 1 && to == 4 && square[1] == mark && square[4] == '4'){
			square[1] = '1';
			square[4] = mark;
		}
		else if (from == 1 && to == 5 && square[1] == mark && square[5] == '5'){
			square[1] = '1';
			square[5] = mark;
		}
		else if (from == 1 && to == 6 && square[1] == mark && square[6] == '6'){
			square[1] = '1';
			square[6] = mark;
		}
		else if (from == 1 && to == 7 && square[1] == mark && square[7] == '7'){
			square[1] = '1';
			square[7] = mark;
		}
		else if (from == 1 && to == 8 && square[1] == mark && square[8] == '8'){
			square[1] = '1';
			square[8] = mark;
		}
		else if (from == 1 && to == 9 && square[1] == mark && square[9] == '9'){
			square[1] = '1';
			square[9] = mark;
		}

		//mark movement logic 2 
		else if (from == 2 && to == 1 && square[2] == mark && square[1] == '1'){
			square[2] = '2';
			square[1] = mark;
		}
		else if (from == 2 && to == 3 && square[2] == mark && square[3] == '3'){
			square[2] = '2';
			square[3] = mark;
		}
		else if (from == 2 && to == 4 && square[2] == mark && square[4] == '4'){
			square[2] = '2';
			square[4] = mark;
		}
		else if (from == 2 && to == 5 && square[2] == mark && square[5] == '5'){
			square[2] = '2';
			square[5] = mark;
		}
		else if (from == 2 && to == 6 && square[2] == mark && square[6] == '6'){
			square[2] = '2';
			square[6] = mark;
		}
		else if (from == 2 && to == 7 && square[2] == mark && square[7] == '7'){
			square[2] = '2';
			square[7] = mark;
		}
		else if (from == 2 && to == 8 && square[2] == mark && square[8] == '8'){
			square[2] = '2';
			square[8] = mark;
		}
		else if (from == 2 && to == 9 && square[2] == mark && square[9] == '9'){
			square[2] = '2';
			square[9] = mark;
		}

		//mark movement logic 3 
		else if (from == 3 && to == 1 && square[3] == mark && square[1] == '1'){
			square[3] = '3';
			square[1] = mark;
		}
		else if (from == 3 && to == 2 && square[3] == mark && square[2] == '2'){
			square[3] = '3';
			square[2] = mark;
		}
		else if (from == 3 && to == 4 && square[3] == mark && square[4] == '4'){
			square[3] = '3';
			square[4] = mark;
		}
		else if (from == 3 && to == 5 && square[3] == mark && square[5] == '5'){
			square[3] = '3';
			square[5] = mark;
		}
		else if (from == 3 && to == 6 && square[3] == mark && square[6] == '6'){
			square[3] = '3';
			square[6] = mark;
		}
		else if (from == 3 && to == 7 && square[3] == mark && square[7] == '7'){
			square[3] = '3';
			square[7] = mark;
		}
		else if (from == 3 && to == 8 && square[3] == mark && square[8] == '8'){
			square[3] = '3';
			square[8] = mark;
		}
		else if (from == 3 && to == 9 && square[3] == mark && square[9] == '9'){
			square[3] = '3';
			square[9] = mark;
		}

		//mark movement logic 4 
		else if (from == 4 && to == 1 && square[4] == mark && square[1] == '1'){
			square[4] = '4';
			square[1] = mark;
		}
		else if (from == 4 && to == 2 && square[4] == mark && square[2] == '2'){
			square[4] = '4';
			square[2] = mark;
		}
		else if (from == 4 && to == 3 && square[4] == mark && square[3] == '3'){
			square[4] = '4';
			square[3] = mark;
		}
		else if (from == 4 && to == 5 && square[4] == mark && square[5] == '5'){
			square[4] = '4';
			square[5] = mark;
		}
		else if (from == 4 && to == 6 && square[4] == mark && square[6] == '6'){
			square[4] = '4';
			square[6] = mark;
		}
		else if (from == 4 && to == 7 && square[4] == mark && square[7] == '7'){
			square[4] = '4';
			square[7] = mark;
		}
		else if (from == 4 && to == 8 && square[4] == mark && square[8] == '8'){
			square[4] = '4';
			square[8] = mark;
		}
		else if (from == 4 && to == 9 && square[4] == mark && square[9] == '9'){
			square[4] = '4';
			square[9] = mark;
		}

		//mark movement logic 5 
		else if (from == 5 && to == 1 && square[5] == mark && square[1] == '1'){
			square[5] = '5';
			square[1] = mark;
		}
		else if (from == 5 && to == 2 && square[5] == mark && square[2] == '2'){
			square[5] = '5';
			square[2] = mark;
		}
		else if (from == 5 && to == 3 && square[5] == mark && square[3] == '3'){
			square[5] = '5';
			square[3] = mark;
		}
		else if (from == 5 && to == 4 && square[5] == mark && square[4] == '4'){
			square[5] = '5';
			square[4] = mark;
		}
		else if (from == 5 && to == 6 && square[5] == mark && square[6] == '6'){
			square[5] = '5';
			square[6] = mark;
		}
		else if (from == 5 && to == 7 && square[5] == mark && square[7] == '7'){
			square[5] = '5';
			square[7] = mark;
		}
		else if (from == 5 && to == 8 && square[5] == mark && square[8] == '8'){
			square[5] = '5';
			square[8] = mark;
		}
		else if (from == 5 && to == 9 && square[5] == mark && square[9] == '9'){
			square[5] = '5';
			square[9] = mark;
		}

		//mark movement logic 6 
		else if (from == 6 && to == 1 && square[6] == mark && square[1] == '1'){
			square[6] = '6';
			square[1] = mark;
		}
		else if (from == 6 && to == 2 && square[6] == mark && square[2] == '2'){
			square[6] = '6';
			square[2] = mark;
		}
		else if (from == 6 && to == 3 && square[6] == mark && square[3] == '3'){
			square[6] = '6';
			square[3] = mark;
		}
		else if (from == 6 && to == 4 && square[6] == mark && square[4] == '4'){
			square[6] = '6';
			square[4] = mark;
		}
		else if (from == 6 && to == 5 && square[6] == mark && square[5] == '5'){
			square[6] = '6';
			square[5] = mark;
		}
		else if (from == 6 && to == 7 && square[6] == mark && square[7] == '7'){
			square[6] = '6';
			square[7] = mark;
		}
		else if (from == 6 && to == 8 && square[6] == mark && square[8] == '8'){
			square[6] = '6';
			square[8] = mark;
		}
		else if (from == 6 && to == 9 && square[6] == mark && square[9] == '9'){
			square[6] = '6';
			square[9] = mark;
		}

		//mark movement logic 7 
		else if (from == 7 && to == 1 && square[7] == mark && square[1] == '1'){
			square[7] = '7';
			square[1] = mark;
		}
		else if (from == 7 && to == 2 && square[7] == mark && square[2] == '2'){
			square[7] = '7';
			square[2] = mark;
		}
		else if (from == 7 && to == 3 && square[7] == mark && square[3] == '3'){
			square[7] = '7';
			square[3] = mark;
		}
		else if (from == 7 && to == 4 && square[7] == mark && square[4] == '4'){
			square[7] = '7';
			square[4] = mark;
		}
		else if (from == 7 && to == 5 && square[7] == mark && square[5] == '5'){
			square[7] = '7';
			square[5] = mark;
		}
		else if (from == 7 && to == 6 && square[7] == mark && square[6] == '6'){
			square[7] = '7';
			square[6] = mark;
		}
		else if (from == 7 && to == 8 && square[7] == mark && square[8] == '8'){
			square[7] = '7';
			square[8] = mark;
		}
		else if (from == 7 && to == 9 && square[7] == mark && square[9] == '9'){
			square[7] = '7';
			square[9] = mark;
		}

		//mark movement logic 8 
		else if (from == 8 && to == 1 && square[8] == mark && square[1] == '1'){
			square[8] = '8';
			square[1] = mark;
		}
		else if (from == 8 && to == 2 && square[8] == mark && square[2] == '2'){
			square[8] = '8';
			square[2] = mark;
		}
		else if (from == 8 && to == 3 && square[8] == mark && square[3] == '3'){
			square[8] = '8';
			square[3] = mark;
		}
		else if (from == 8 && to == 4 && square[8] == mark && square[4] == '4'){
			square[8] = '8';
			square[4] = mark;
		}
		else if (from == 8 && to == 5 && square[8] == mark && square[5] == '5'){
			square[8] = '8';
			square[5] = mark;
		}
		else if (from == 8 && to == 6 && square[8] == mark && square[6] == '6'){
			square[8] = '8';
			square[6] = mark;
		}
		else if (from == 8 && to == 7 && square[8] == mark && square[7] == '7'){
			square[8] = '8';
			square[7] = mark;
		}
		else if (from == 8 && to == 9 && square[8] == mark && square[9] == '9'){
			square[8] = '8';
			square[9] = mark;
		}

		//mark movement logic 9 
		else if (from == 9 && to == 1 && square[9] == mark && square[1] == '1'){
			square[9] = '9';
			square[1] = mark;
		}
		else if (from == 9 && to == 2 && square[9] == mark && square[2] == '2'){
			square[9] = '9';
			square[2] = mark;
		}
		else if (from == 9 && to == 3 && square[9] == mark && square[3] == '3'){
			square[9] = '9';
			square[3] = mark;
		}
		else if (from == 9 && to == 4 && square[9] == mark && square[4] == '4'){
			square[9] = '9';
			square[4] = mark;
		}
		else if (from == 9 && to == 5 && square[9] == mark && square[5] == '5'){
			square[9] = '9';
			square[5] = mark;
		}
		else if (from == 9 && to == 6 && square[9] == mark && square[6] == '6'){
			square[9] = '9';
			square[6] = mark;
		}
		else if (from == 9 && to == 7 && square[9] == mark && square[7] == '7'){
			square[9] = '9';
			square[7] = mark;
		}
		else if (from == 9 && to == 8 && square[9] == mark && square[8] == '8'){
			square[9] = '9';
			square[8] = mark;
		}

		else
		{
			cout<<"Invalid move "<<endl;
			player--;
			cin.ignore();
			cin.get();
		}

}