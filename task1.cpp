#include<iostream>
using namespace std;

void add(int number1, int number2);
void multiplication(int number1, int number2);
void substraction(int number1, int number2);


main()
{
int number1;
int number2;

while(true){
char operation;
cout << "Enter 1st number:  ";
cin >> number1;
cout << "Enter 2nd number:  ";
cin >> number2;
cout << "Operation is:  ";
cin >> operation;


if(operation=='+')
{
add(number1, number2);
}

if(operation=='*')
{
multiplication(number1, number2);
}

if(operation=='-')
{
substraction(number1, number2);
}
 }
}

void add(int number1, int number2)
{
int sum;
sum=number1+number2;
cout << "Sum is  " << sum  << endl; 
}

void multiplication(int number1, int number2)
{
int product;
product=number1*number2;
cout << "product is  " << product << endl; 
}

void substraction(int number1, int number2)
{
int substract;
substract=number1-number2;
cout << "Substraction is:  " << substract << endl;
}








