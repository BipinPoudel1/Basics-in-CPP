//To calculate the sum of first n natural numbers using for loop

#include <iostream>
using namespace std;

int sum(int n){
	int s=0;
	for(int i=0; i<=n; i++){
		s=s+i;
	}
	return s;
}

int main()
{
	int n;
	cout<<"n= ";
	cin>>n;
	cout<<"Sum of first "<<n<<" natural numbers= "<<sum(n);
	return 0;
}