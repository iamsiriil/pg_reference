#ifndef MYCLASS_HPP
# define MYCLASS_HPP

# include <iostream>

class MyClass {
	private:
		int *data;

	public:
		MyClass();
		MyClass(int nbr);
		MyClass(const MyClass& other);
		MyClass& operator=(const MyClass& other);
		MyClass(MyClass&& other) noexcept;
		MyClass& operator=(MyClass&& other) noexcept;
		~MyClass();

		int getData() const;
};

#endif

