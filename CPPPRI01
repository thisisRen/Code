#include<iostream>
#include<math.h>

int snt(int n)
{

	if (n < 2)
	{
		return 0;
	}
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	long long T;
	std::cin >> T;
	long long a;
	while (T--)
	{
		std::cin >> a;
		if (a < 0) return 0;
		for (int j = 2; j <= sqrt(a); j++)
		{
			while (a % j == 0)
			{
				std::cout << j << " ";
				a /= j;
			}
		}
		if (a>1)
		{
			std::cout << a;
		}
		std::cout << std::endl;
	}
	return 0;
}
