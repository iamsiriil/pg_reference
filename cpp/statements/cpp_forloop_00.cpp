#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	if (argc != 2)
		return 1;

	int n = atoi(argv[1]);

	switch (n) {
	case 1:
	{
		vector<int> vec{1, 2, 3, 4, 5};
	
		// range-for loop automatically iterates
		// over all elements of a sequence.
		cout << "range-for loop : ";

		for (int i : vec)
			cout << i << " ";
		cout << endl;

		break;
	}
	case 2:
	{
		vector<int> vec{1, 2, 3, 4, 5};

		cout << "for loop : ";

		for (auto i = vec.begin(); i != vec.end(); ++i)
			cout << *i << " ";
		cout << endl;

		break;
	}
	default:
		cout << "usage : ./a.out [1 | 2]" << endl; 
		cout << " 1 - ranged-for loop" << endl;
		cout << " 2 - regular for loop" << endl;
	}
}
