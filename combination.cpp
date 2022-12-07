//Combination
/*
      Formula: nCr=n!/(n-r)!*r!
*/

#include <iostream>
using namespace std;
int factorial(int num){
      int fact=1;
      for(int i=1; i<=num; i++){
            fact*=i;
      }
      return fact;
}
int main()
{
      int n, r;
      int a;
      cout<<"n= ";
      cin>>n;
      cout<<"\nr= ";
      cin>>r;
      a=factorial(n)/(factorial(r)*factorial(n-r));
      cout<<n<<"C"<<r<<"= "<<a;
      return 0;
}