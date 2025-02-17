#include <iostream>
#include <cstring>		// for std::strlen and std::strcopy

class String {
	private:
		char* data;
		size_t length;

	public:
		// 1. Default constructor
		String() : data(nullptr), length(0) {
			std::cout << "Default Constructor\n";
		}

		// 2. Parammeterized constructor
		String(const char* str) : length(std::strlen(str)) {
			data = new char[length + 1];
			std::strcpy(data, str);
			std::cout << "Parameterized constructor: " << data << "\n";
		}

		// 3. Copy constructor (deep copy)
		String(const String& other) : length(other.length) {
			data = new char[length + 1];
			std::strcpy(data, other.data);
			std::cout << "Copy constructor: " << data << "\n";
		}

		// 4. Copy assignment operator (deep copy)
		String& operator=(const String& other) {
			std::cout << "Copy assignment operator\n";
			if (this != &other) {
				delete[] data;

				length = other.length;
				data = new char[length + 1];
				std::strcpy(data, other.data);
			}
			return *this;
		}

		// 5. Move constructor (stealing ownership)
		String(String&& other) noexcept : data(other.data), length(other.length) {
			other.data = nullptr;		// Prevent deletion in desctructor
			other.length = 0;
			std::cout << "Move constructor: Data moved\n";
		}

		// 6. Mve assignmrnt operator (stealing ownership)
		String& operator=(String&& other) noexcept {
			std::cout << "Move assignment operator\n";
			if (this != &other) {
				delete[] data;

				data = other.data;
				length = other.length;

				other.data = nullptr;
				other.length = 0;
			}
			return *this;
		}

		// 7. Destructor
		~String() {
			delete[] data;
			std::cout << "Destructor: data deleted\n";
		}	

		// 8. Overloading the '+' operator
		String operator+(const String& other) const {
			String newStr;
			newStr.length = length + other.length;
			newStr.data = new char[newStr.length + 1];

			std::strcpy(newStr.data, data);
			std::strcat(newStr.data, other.data);

			std::cout << "Operator+: Concatenation\n";
			return newStr;
		}	

		// 9. Overloading the '<<' operator
		friend std::ostream& operator<<(std::ostream& os, const String& str) {
			if (str.data)
				os << str.data;
			return os;
		}	
};

int main() {
	String s1("Hello");
	String s2(" World");

	String s3 = s1 + s2;
	std::cout << "Concateneted string: " << s3 << std::endl;

	String s4;
	s4 = s3;

	String s5 = std::move(s3);
	s4 = std::move(s5);

	return 0;
}

