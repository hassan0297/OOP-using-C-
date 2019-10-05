#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int number,option;
	char letter;
	cout<<"1. Convert ASCII Value to Character"<<endl;
	cout<<"2. Convert Character to ASCII Value"<<endl;
	cout<<"Enter Your Option: ";
	cin>>option;
	switch(option)
	{
		case 1:
			cout<<"Enter a Number: ";
			cin>>number;
			cout<<"The corresponding character is: "<<char(number)<<endl; // We use char(number) which is a function to convert number into character
			break;
			
			case 2:
				cout<<"Enter a Character: ";
				cin>>letter;
				cout<<"The corresponding ASCII Value is: "<<int(letter)<<endl; // We use int(letter) which is a function to convert character into number
				break;
				
				default:
					cout<<"Invalid Option!";
					break;
	}
	return 0;
}
