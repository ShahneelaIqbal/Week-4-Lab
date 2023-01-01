#include<iostream>
using namespace std;
void greaterNumber(int firstNumber, int secondNumber);

main(){
int firstNumber;
int secondNumber;

while(true){
 cout << "Enter 1st number:  ";
 cin >> firstNumber;
 cout << "Enter 2nd number:  ";
 cin >> secondNumber;
 greaterNumber(firstNumber, secondNumber);
}

}

void greaterNumber(int firstNumber, int secondNumber)
{

if(firstNumber<secondNumber)
{
cout << "Second number is greater." << endl;
}

if(firstNumber>secondNumber)
{
cout << "First number is greater." << endl;
}









}
