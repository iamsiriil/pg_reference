#include <iostream>
#include <vector>

using namespace std;

int	main(void)
{
	{
		// Get sequence of values directly into vector.
		vector<int>	v(5);
	
		for (int &x : v)
			cin >> x;

		for (auto &x : v)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
