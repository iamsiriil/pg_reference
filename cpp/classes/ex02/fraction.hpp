#ifndef FRACTION_HPP
# define FRACTION_HPP

# include <iostream>

class Fraction {
	private:
		int *num;
		int *den;

	public:
		Fraction();
		Fraction(int n, int d);
		Fraction(const Fraction& other);
		Fraction& operator=(const Fraction& other);
		Fraction(Fraction&& other) noexcept;
		Fraction& operator=(Fraction&& other) noexcept;
		~Fraction();

		void printFraction();
};

#endif

