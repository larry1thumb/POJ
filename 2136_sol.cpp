#include <iostream>
#include <functional>
#include <algorithm>
#include <locale>
#include <string>

using namespace std;

int main()
{
	const int num_lines = 4;
	const int alpha_length = 26;
	int alpha_array[alpha_length] = {};
	for (int i = 0; i < num_lines; i++)
	{
		string line;
		string result;
		getline(cin, line);
		remove_copy_if(line.begin(), line.end(),
						back_inserter(result),
						not1(ptr_fun(isalpha))
						);
		int length = result.length();
		for (int j = 0; j < length; j++)
		{
			char current_char = result.at(j);
			int index = current_char - 'A';
			alpha_array[index]++;
		}
	}

	int max = 0;
	for (int i = 0; i < alpha_length; i++)
	{
		if (alpha_array[i] > max)
		{
			max = alpha_array[i];
		}
	}

	while (max > 0)
	{
		int end;
		for (int j = 0; j < alpha_length; j++)
		{
			if (alpha_array[j] == max) {
				end = j;
			} 
		}
		for (int j = 0; j < end+1; j++)
		{
			if (j == end)
			{
				alpha_array[j]--;
				cout << "*";
			}
			else if (alpha_array[j] != max) {
				cout << "  ";
			}
			else {
				alpha_array[j]--;
				cout << "* ";
			}
		}
		max--;
		cout << endl;
		if (max == 0)
		{
			cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
		}
	}
}