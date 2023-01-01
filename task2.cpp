#include<iostream>
using namespace std;

void ifPass(int marks);


main()
{

int marks;
cout << "Enter marks:  ";
cin >> marks;
ifPass(marks);



}

void ifPass(int marks)
{

if(marks > 50)
{
 cout << "You have passed first quiz of PF"; 

}

if(marks == 50)
{
 cout << "Your marks are fifty"; 

}

if(marks < 50)
{
 cout << "Your have failed first quiz of PF"; 

}

}















