#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int i=1;
	float loan=0,rate=0,pay=0;
	float total=0,balance;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(15) << left << "EndOfYear#"; 
	cout << setw(15) << left << "PrevBalance"; 
	cout << setw(15) << left << "Interest"; 
	cout << setw(15) << left << "Total";
	cout << setw(15) << left << "Payment";
	cout << setw(15) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << loan*rate/100;
		total = loan+(loan*rate/100);
		if(total<pay) pay = total;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		balance = total - pay;
		cout << setw(13) << left << balance;
		cout << "\n";	
		loan = balance;
		i++;
	} while (balance!=0);

	
	return 0;
}
