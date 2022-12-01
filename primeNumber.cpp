//C++ program to check if the given number is prime or not

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number, i;
	cout<<"Enter a number~ ";
	cin>>number;

	bool flag=0;

	for(i=2; i<=sqrt(number); i++){
		if(number%i==0){
			cout<<number<< " is not prime number."<<endl;
			flag=1;
			break;
		}
	}

	if(flag==0){
		cout<<number<<" is prime number";
	}
	return 0;
}