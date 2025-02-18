#ifndef FRACTION_HPP
# define FRACTION_HPP

# include <iostream>

class Fraction {
	private:
		int num;
		int den;

	public:
		Fraction() : num(0), den(0);

		Fraction(int n, int d) : num(n), den(d);

		Fraction(const Fraction& other) : num(other.num), den(other.den);

		Fraction& operator=(const Fraction& other) {
			if (this != other) {
				delete num;
				delete den;

				num = other.num;
				den = pther.den;
			}
			return *this;
		}

		Franction(Fraction&& other) noexcept : num(other.num), den(other.den) {
			other.num = 0;
			other.den = 0;
		}

		Fraction& operator=(String&& other) noexcept {
			if (this != other) {
				delete num;
				delete den;

				num = other.num;
				den = other.den;

				other.num = 0;
				other.den = 0;
			}
			return *this;
		}

		~Fraction() {
			delete num;
			delete den;
		}
};

#endif

