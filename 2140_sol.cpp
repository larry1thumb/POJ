#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int sums = 1;
	int i = 3;
	while (i <= N)
	{
		if (N % i == 0)
			sums++;
		i += 2;
	}
	cout << sums << endl;
	return 0;
}