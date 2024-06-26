#include<iostream>
using namespace std;

int element[100];
int count = 0;
void SevenBoom();
int length;
int flag = 1;
main()
{
	cout << "Enter Length of array" << endl;
	cin >> length;
	for (int s = 0; s < length; s = s + 1)
	{
		cout << "Enter Number" << endl;
		cin >> element[s];
	}
	SevenBoom();
}
void SevenBoom()
{
	int mode;
	int idx = 0;
	for (int x = 0; x < length; x = x + 1)
	{
		if (element[x] == 7)
		{
			cout << "Boom" << endl;
			flag = 0;
			break;
		}
	}
	if (flag != 0)
	{
		for (int x = element[idx]; x >= 0; x = x / 10)
		{
			mode = element[idx] % 10;
			if (mode == 7)
			{
				cout << "Boom" << endl;
				break;
			}
			idx = idx + 1;
		}
	}
}
