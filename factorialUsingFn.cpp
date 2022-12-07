//Factorial of a given number using function in C++

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
      int num, i;
      cout<<"Enter a number to calculate it's factorial > ";
      cin>>num;
      cout<<"Factorial of "<<num<<"= "<<factorial(num);
      return 0;
}