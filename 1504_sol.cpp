#include <iostream>
#include <string>
#include <sstream>

int main()
{
	int iter;
	std::cin >> iter;
	for (int i = 0; i < iter; i++)
	{
		std::string str1;
		std::string str2;
		std::cin >> str1 >> str2;
		int length1 = str1.length();
		int length2 = str2.length();
		char* arr1 = new char[length1];
		char* arr2 = new char[length2];
		for (int i = 0; i < length1; i++)
		{
			arr1[length1 - i - 1] = str1[i];
		}
		for (int i = 0; i < length2; i++)
		{
			arr2[length2 - i - 1] = str2[i];
		}

		int count1 = -1;
		int count2 = -1;
		char index_val = '0';
		int index = 0;
		while (index_val == '0')
		{
			index_val = arr1[index];
			index++;
			count1++;
		}
		index = 0;
		index_val = '0';
		while (index_val == '0')
		{
			index_val = arr2[index];
			index++;
			count2++;
		}

		char* no_zero_arr1 = new char[length1 - count1];
		char* no_zero_arr2 = new char[length2 - count2];
		for (int i = 0; i < length1 - count1; i++)
		{
			no_zero_arr1[i] = arr1[i + count1];
		}
		for (int i = 0; i < length2 - count2; i++)
		{
			no_zero_arr2[i] = arr2[i + count2];
		}
		std::string rev_str1(no_zero_arr1);
		std::string rev_str2(no_zero_arr2);
		int num1;
		int num2;
		std::istringstream(rev_str1) >> num1;
		std::istringstream(rev_str2) >> num2;
		int rev_sum = num1 + num2;
		std::stringstream ss;
		ss << rev_sum;
		std::string str = ss.str();
		int length3 = str.length();
		char* arr3 = new char[length3];
		for (int i = 0; i < length3; i++)
		{
			arr3[length3 - i - 1] = str[i];
		}
		int count3 = -1;
		index_val = '0';
		index = 0;
		while (index_val == '0')
		{
			index_val = arr3[index];
			index++;
			count3++;
		}
		char* sum_array = new char[length3 - count3];
		for (int i = 0; i < length3 - count3; i++)
		{
			sum_array[i] = arr3[i + count3];
		}
		std::string sum(sum_array);
		int num3;
		std::istringstream(sum) >> num3;
		std::cout << num3 << std::endl;
	}
}