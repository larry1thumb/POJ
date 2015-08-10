#include <iostream>
#include <string>
using namespace std;

struct DNA_seq {
	string sequence;
	int inversions;
};

int main()
{
	int length;
	int input_num;
	string string;
	cin >> length >> input_num;
	DNA_seq* DNA_arr = new DNA_seq[input_num];
	for (int i = 0; i < input_num; i++)
	{
		cin >> string;
		DNA_arr[i].sequence = string;
		DNA_arr[i].inversions = 0;
		for (int j = 0; j < length; j++)
		{
			for (int k = j + 1; k < length; k++)
			{
				if (string[j]>string[k])
				{
					DNA_arr[i].inversions++;
				}
			}
		}
	}
	for (int i = 1; i < input_num; i++)
	{
		int j = i;
		while (DNA_arr[j].inversions < DNA_arr[j-1].inversions && j>0)
		{
			DNA_seq temp = DNA_arr[j];
			DNA_arr[j] = DNA_arr[j - 1];
			DNA_arr[j - 1] = temp;
			j--;
		}
	}
	for (int i = 0; i < input_num; i++)
	{
		cout << DNA_arr[i].sequence << endl;
	}
	cout << endl;
	delete[] DNA_arr;
}