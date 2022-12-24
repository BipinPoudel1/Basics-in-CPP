#include <iostream>
using namespace std;

int sum(int n){
	int s;
	s=(n*(n+1))/2;
	return s;
}

int main()
{
	int n;
	cout<<"Enter any natural number 'n'~ ";
	cin>>n;
	cout<<"The sum of first "<<n<<" natural numbers is "<<sum(n);
	return 0;
}