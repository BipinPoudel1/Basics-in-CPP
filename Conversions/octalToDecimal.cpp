#include <bits/stdc++.h>
using namespace std;

int octalToDecimal(int n){
	int a, p=1, ans=0;
	while(n>0){
		a=n%10;
		ans+=a*p;
		p*=8;
		n/=10;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter a valid octal number: ";
	cin>>n;
	cout<<"The decimal form of given octal number is "<<octalToDecimal(n);
	
	return 0;
}