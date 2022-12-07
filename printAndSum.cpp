//Function to display the numbers and find sum of them

#include <iostream>
using namespace std;

int print(int num1){
      return num1;
}

int sum(int num1, int num2){
      int sum=num1+num2;
      return sum;
}

int main()
{
      int a=2;
      int b=3;
      cout<<"Number 1= "<<print(a)<<endl;
      cout<<"Number 2= "<<print(b)<<endl;
      cout<<"Sum= "<<sum(a, b);
      return 0;
}

