//Function to add two numbers
#include <iostream>
using namespace std;
int sum (int n1, int n2){
      int sum=n1+n2;
      return sum;
}

int main()
{
      int a=2, b=3;
      cout<<"The sum is "<<sum(a, b);
      return 0;
}