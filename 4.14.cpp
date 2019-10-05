#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter Two Integers: "<<endl;
	cin>>x>>y;
	cout<<"The Original Value of x="<<x<<" And y="<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"The Values After Swapping Are"<<endl;
	cout<<"x="<<x<<endl<<"y="<<y;
	return 0;
}
