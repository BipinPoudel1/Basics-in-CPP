//C++ Program to convert the given hexadecimal value into decimal value

#include <bits/stdc++.h>
using namespace std;

int hexToDecimal(string n){
	int result=0, p=1;
	int size=n.size()-1;
	for(int i=size; i>=0; i--){
		if(n[i]>='A' && n[i]<='F'){
			result+=(n[i]-'A'+10)*p;
		}else if(n[i]>='0' && n[i]<='9'){
			result+=(n[i]-'0')*p;
		}else if(n[i]>='a' && n[i]<='f'){
			result+=(n[i]-'a'+10)*p;
		}
		p*=16;
	}
	return result;
}
int main()
{
	string n;
	cout<<"Hexadecimal number= ";
	cin>>n;
	cout<<"Corresponding Decimal Value= "<<hexToDecimal(n);
	return 0;
}
