#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;

	for (int i = 1; ; i++)
	{
		sum += i;
		if (sum >= n)
		{
			cout << sum;
			break;
		}
	}
}