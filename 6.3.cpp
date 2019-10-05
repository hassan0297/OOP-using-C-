#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,Sum;
	n=1;
	Sum=0;
	while(n<=10)
	{
		cout<<n<<endl;
		Sum=Sum+n;
		n++;
	}
	cout<<"Sum is "<<Sum;
	return 0;
}
