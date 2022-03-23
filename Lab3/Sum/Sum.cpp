# include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{


	cout << "enter numbers to zero: ";
	int n;
	cin >> n;

	int sum = 0;
	if (n < 0)
	{
		sum = n;
	}

	while (n != 0)
	{
		cin >> n;
		if (n < 0)
		{
			sum += n;
			
		}
		cout << "the sum of negative numbers is: " << sum << endl;
		system("pause");
	}
}

