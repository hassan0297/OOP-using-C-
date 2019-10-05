#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n=1;
	loop: // A label is created with a valid identifier followed by a colon (:)
	cout<<n<<": C++"<<endl;
	n++;
	if (n<=5) goto loop;
	cout<<"End of Program.";
	return 0;
}
