#include <iostream>
#include <string>
#include <graphics.h>
using namespace std;

const int blank_length = 9;
string blank[blank_length];
string name;
int win_or_lost = 0;
	
void board();
void win();

int main(){
	string name1, name2;

	int choice, count;
	
	cout << "Please Enter the First Player Name : ";
	getline(cin,name1);
	cout << endl;
	
	cout << "Please Enter the Second Player Name : ";
	getline(cin,name2);
	cout << endl;
		
	for(int i=0;i<blank_length;i++){
		blank[i] = " ";
	}
	
	board();
	
	for(int count=0;count<9;count++){
	if(count%2==0){
		cout << endl << name1 << " turn, choose from 1 to 9 : ";
		cin >> choice;
		blank[choice-1] = "x";
		cout << endl;
		board();
		name = name1;
		cout << endl;
	}
	else{
		cout << endl << name2 << " turn, choose from 1 to 9 : ";
		cin >> choice;
		blank[choice-1] = "o";
		cout << endl;
		board();
		name = name2;
		cout << endl;
	}
	win();
	if (win_or_lost==1) goto A;
	}
A:	return 0;
}

void board(){
	cout << "     |     |     " << endl;
	cout << "  "<< blank[0] <<"  |  "<< blank[1] <<"  |  "<< blank[2] <<"  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  "<< blank[3] <<"  |  "<< blank[4] <<"  |  "<< blank[5] <<"  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  "<< blank[6] <<"  |  "<< blank[7] <<"  |  "<< blank[8] <<"  " << endl;
	cout << "     |     |     " << endl;
}

void win(){
	if((blank[0]=="x")&&(blank[1]=="x")&&(blank[2]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[3]=="x")&&(blank[4]=="x")&&(blank[5]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[6]=="x")&&(blank[7]=="x")&&(blank[8]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[0]=="x")&&(blank[3]=="x")&&(blank[6]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[1]=="x")&&(blank[4]=="x")&&(blank[7]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[2]=="x")&&(blank[5]=="x")&&(blank[8]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[0]=="x")&&(blank[4]=="x")&&(blank[8]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[2]=="x")&&(blank[4]=="x")&&(blank[6]=="x")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[0]=="o")&&(blank[1]=="o")&&(blank[2]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[3]=="o")&&(blank[4]=="o")&&(blank[5]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[6]=="o")&&(blank[7]=="o")&&(blank[8]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[0]=="o")&&(blank[3]=="o")&&(blank[6]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[1]=="o")&&(blank[4]=="o")&&(blank[7]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[2]=="o")&&(blank[5]=="o")&&(blank[8]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[0]=="o")&&(blank[4]=="o")&&(blank[8]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
	else if((blank[2]=="o")&&(blank[4]=="o")&&(blank[6]=="o")){
		cout << endl << "The winner is " << name << endl;
		win_or_lost = 1;
	}
}
