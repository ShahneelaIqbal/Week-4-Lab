#include<iostream>
using namespace std;

void printName(string name1);



main()
{
string name;
cout << "Enter name:  ";
cin >> name;
printName(name);

}

void printName(string name1)
{
while(true){
if(name1 == "mano")
{
 cout << name1;

}
if(name1 != "mano")
{
 cout << "Enter name:  ";
 cin >> name1;
}
}

}






