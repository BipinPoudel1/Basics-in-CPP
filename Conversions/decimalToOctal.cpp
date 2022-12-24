//C++ Program to convert given decimal number to octal number

#include <bits/stdc++.h>
using namespace std;

int decimalToOctal(int n){
	int x=1;
	int ans=0;
	while(x<=n){
		x*=8;
	}
	x/=8;

	while(x>0){
		int last=n/x;
		n-=last*x;
		x/=8;
		ans=ans*10+last;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter a decimal number: ";
	cin>>n;
	cout<<"Octal of "<<n<<": "<<decimalToOctal(n);
	return 0;
}