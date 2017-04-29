#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	unsigned long long licznik=1;
	unsigned long long warunek=1e9+7;

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		licznik *= (tmp + 1);
		licznik %= warunek;
	}

	cout << licznik;

        return 0;
}
