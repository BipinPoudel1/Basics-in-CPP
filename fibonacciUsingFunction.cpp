//Fibonacci number using C++ function

#include <iostream>
using namespace std;

void fibonacci(int n){
      int t1=0;
      int t2=1;
      int next;

      for(int i=1; i<=n; i++){
            cout<<t1<<"\t";
            next=t1+t2;
            t1=t2;
            t2=next;
      }
}

int main()
{
      int n;
      cout<<"Give any term ";
      cin>>n;

      fibonacci(n);

      return 0;
}