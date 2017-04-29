#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cout << "1";

	for (int i = 0; i < n - 1; i++)
		cout << "0";

	return 0;
}
