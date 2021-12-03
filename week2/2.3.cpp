#include <iostream>
#include <vector>

using namespace std;
int length;

void main()
{
	cin >> length;
	vector<int> array(length);
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] > array[j+1])
			{
				swap(array[j], array[j+1]);
			}
			else
			{
				break;
			}
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << array[i];
	}
	system("pause");
}