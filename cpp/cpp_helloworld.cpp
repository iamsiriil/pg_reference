#include <iostream>

//using namespace std;

int	main(void)
{
	{
		using namespace std;

		cout << "Hello World!" << endl;
		cout << "This is my first cpp program!" << endl;
	}
	{
		// Without 'using namespace std;' i
		// have to include:
		// 	std::cout
		// before:
		// 	<< "...";
		std::cout << "String #" << 1 << std::endl;
		std::cout << "String #" << 2 << std::endl;
	}
	return (0);
}
