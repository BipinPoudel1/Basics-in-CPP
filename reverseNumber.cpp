//Another method to reverse a number

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number~ ";
	cin>>n;
	int reverse=0;

	while(n>0){
		int lastdigit=n%10;
		reverse=reverse*10+lastdigit;
		n=n/10;
	}
	cout<<"Reverse of given number is "<<reverse;
	return 0;
}