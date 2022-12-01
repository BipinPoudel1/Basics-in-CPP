//C++ program to reverse a number

#include <iostream>
using namespace std;

int main()
{
	int temp, number;
	cout<<"Enter a number to reverse- ";
	cin>>number;

	cout<<"Reverse of "<<number<<" is- ";

	while(number>0){
		temp=number%10;
		number=number/10;
		cout<<temp;
	}
	return 0;
}