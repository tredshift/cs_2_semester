#include <iostream>
#include <vector>

using namespace std;
int lenght;
int number;

bool binary(vector<int> a, int start, int end, int num)
{
	while (1)
	{
		if (num == a[(end + start) / 2])
		{
			return true;
		}
		if (end == start + 1)
		{
			return false;
		}
		if (num > a[(end + start) / 2])
		{
			start = (end + start) / 2;
		}
		else
		{
			end = (end + start) / 2;
		}
	}
}

int main()
{
	cin >> lenght;
	vector<int> array(lenght);
	for (int i = 0; i < lenght; i++)
	{
		cin >> array[i];
	}

	cin >> number;

	if (not binary(array, 0, lenght - 1, number))
	{
		cout << "Your number not in array";
	}
	else
	{
		cout << "Your number in array";
	}
	system("pause");
}