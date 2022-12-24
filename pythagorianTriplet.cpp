//Program to check if the given numbers belong to pythagorian triplet 
//i.e. if the given numbers satisfy Pythagoras Theorem.

#include <iostream>
using namespace std;

bool check(int a, int b, int c){
	int p, q;
	int h=max(a, max(b, c));

	if(h==a){
		p=b;
		q=c;
	}else if(h==b){
		p=a;
		q=c;
	}else{
		p=a;
		q=b;
	}

	if(h*h==p*p+q*q)
		return true;
	else	
		return false;
}
int main()
{
	int a, b, c;
	cout<<"a= ";
	cin>>a;
	cout<<"b= ";
	cin>>b;
	cout<<"c= ";
	cin>>c;

	if(check(a, b, c))
		cout<<"Pythagorian Triplet";
	else
		cout<<"Not a pythagorian triplet";
	
	return 0;
}