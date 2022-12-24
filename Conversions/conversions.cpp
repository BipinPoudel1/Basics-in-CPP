#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
	int copy=n;
	int ans=0;
	int a=1;
	while(n>0){
		int b=n%10;
		ans+=a*b;
		a*=2;
		n/=10;
	}
	cout<<"Binary "<<copy<<" = Decimal "<<ans;
}
int main()
{
	int n;
	cout<<"Enter n- ";
	cin>>n;
	binaryToDecimal(n);
	return 0;
}