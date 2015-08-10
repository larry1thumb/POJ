#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double months = 12.00;
	double closing_balance;
	double sum = 0.00;
	for (int i = 0; i < months ; i++) {
		cin >> closing_balance;
		sum = sum + closing_balance;
	}
	double average = sum / months;
	average = floor((average * 100.00) + 0.5)/100.00;
	cout << "$" << average << endl;
}