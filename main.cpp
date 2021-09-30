#include <iostream>
using namespace std;



int main()
{
	long long n;
	cout << "Please enter a number: ";
	cin >> n;
	long long tmp = n;
	int maks = n % 10;
	while (n != 0)
	{
		if (n % 10 > maks) {
			maks = n % 10;
		}
		n = n / 10;

	}

    cout << "The biggest digit in this number is: " <<maks << endl;
	return 0;
}

