//Tic Tac Toe GAME
//Shivam Kashaudhan
//Password : password

#include <iostream>
#include <conio.h>
#include<process.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();//FUNTION FOR RESULT//
void board();//FUNCTION TO DRAW THE BOARD//
void guide();//FUNCTION FOR USER GUIDE//
main()
{
 system("cls");;
	int player = 1,i,choice,option;
	char mark,choice1;
	system("cls");;
       do
       {    system("cls");;
	cout<<"1.ENTER THE GAME "<<endl<<"2.USER GUIDE"<<endl<<"3.EXIT";
	cin>>option;
	switch(option)
	{
	case 1:
	      do
		 {
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
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
		else
		{
			cout<<"Invalid move ";
			player--;
			getch();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else

		cout<<"==>\aGame draw";break;
case 2:guide();
	break;

case 3:exit(0);break;
default:cout<<"Wrong Choice";
}
cout<<"\nDo you want to continue";
cin>>choice1;
}while(choice1=='y'||choice1=='Y');
	getch();
	return 0;
}

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}
void board()
{
	system("cls");;
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "\t\t     |     |     " << endl << endl;
}

void guide()
{
system("cls");;

cout<<"\nThe TIC-TAC-TOE games board is similar to that of # key\nor it looks something like this :\n\t\t\t    _|_|_"<<endl<<"\t\t\t    "<<
							       "_|_|_ "<<endl<<"\t\t\t    "<<
							       " | |  ";
cout<<"\nIn this gaps turn by turn crosses and zeroes have to be filled up";
cout<<"TIC-TAC-TOE is basically a X and O  game in which the player has to complete 3";
cout<<"\n crosses or zeroe which may be horizontal vertical or even  diagonal x|x|x"<<
								     "\t\t\t\t\t\t\t\t\t     -|-|-"<<
								     "\t\t\t\t\t\t\t\t\t     _|_|_"<<
								     "\t\t\t\t\t\t\t\t\t      | |  ";
cout<<endl<<endl<<"OR\t\t\t\t\t\t\t             x|_|_  "<<endl<<
	   "\t\t\t\t\t\t\t             -|x|_   "<<
	   "\t\t\t\t\t\t\t\t             -|-|x";

cout<<endl<<endl<<"OR\t\t\t\t\t\t\t\t     x|_|_"<<endl<<
		  " \t\t\t\t\t\t\t\t     x|_|_"<<endl<<
		  " \t\t\t\t\t\t\t\t     x| | ";;

}
