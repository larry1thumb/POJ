#include <iostream>

using namespace std;

int main()
{
	double target_length;
	cin >> target_length;
	while (target_length != 0.00)
	{
		double current_length = 0.00;
		double overhang_denom = 2.00;
		while (current_length < target_length)
		{
			current_length = current_length + 1.00 / overhang_denom;
			overhang_denom = overhang_denom + 1.00;
		}
		overhang_denom = overhang_denom - 2;
		int cards = (int)overhang_denom;
		cout << cards << " card(s)" << endl;
		cin >> target_length;
	}
	return 0;
}