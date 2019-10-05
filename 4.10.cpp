#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	double p,r,t,i;
	cout<<"Enter Principal Amount, Rate, Time: ";
	cin>>p>>r>>t;
	i=(p*r*t)/100;
	cout<<"\n Principal Amt = Rs. "<<p;
	cout<<"\n Rate = "<<r<<"%";
	cout<<"\n Time = "<<t<<"yrs";
	cout<<"\n Simple Interest Amt = Rs. "<<i;
	return 0;
}
