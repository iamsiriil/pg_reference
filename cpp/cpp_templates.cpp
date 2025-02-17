#include <iostream>

using namespace std;

template <typename T>
T	add(T a, T b)
{
	return a + b;
}

int	main(void)
{
	{
		int	a = 23, b = 45;
		cout << add(a, b) << endl;
	}	
	{
		float	a = 23.0, b = 56.5;
		cout << add(a, b) << endl;
	}
	return 0;
}
