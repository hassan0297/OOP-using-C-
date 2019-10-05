#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char charac;
	cout<<"Enter the character: ";
	cin>>charac; //We haven't assigned any character so we don't use single quotation marks
	int num1=charac; //There is ASCII Code for single characters only not string and we are assigning the character into Int data type so ASCII Code is displayed
	cout<<"The ASCII Code for "<<charac<<" is "<<num1<<"."<<endl;
	return 0;
}
