#include<iostream>
using namespace std;
void totalAmount(string day, int amount);

main(){
string day;
int amount;

while(true)
{
 cout << "Enter day:  ";
 cin >> day;
 cout << "Enter amount:  ";
 cin >> amount;
 totalAmount(day, amount);
}

}


void totalAmount(string day, int amount)
{
	int price;

	if(day=="sunday")
	{
	price=amount-((10*amount)/100);
	cout << "Payable amount is:  " << price << endl;
	}

if(day!="sunday")
  {
   cout << "Payable amount is:  " << amount << endl;
  }



}

