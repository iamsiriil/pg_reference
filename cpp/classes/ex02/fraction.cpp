#include "fraction.hpp"

Fraction::Fraction() : num(new int(0)), den(new int(1)) {}

Fraction::Fraction(int n, int d) : num(new int(n)), den(new int(d)) {}

Fraction::Fraction(const Fraction& other) {
	num = new int(*other.num);
	den = new int(*other.den);
}

Fraction& Fraction::operator=(const Fraction& other) {
	if (this != &other) {
		*num = *other.num;
		*den = *other.den;
	}
	return *this;
}

Fraction::Fraction(Fraction&& other) noexcept : num(other.num), den(other.den) {
	other.num = nullptr;
	other.den = nullptr;
}

Fraction& Fraction::operator=(Fraction&& other) noexcept {
	if (this != &other) {
		delete num;
		delete den;

		num = other.num;
		den = other.den;

		other.num = nullptr;
		other.den = nullptr;
	}
	return *this;
}

Fraction& Fraction::operator*(const Fraction& other) {
	Fraction *frac = new Fraction;
	*frac->num = *num * *other.num;
	*frac->den = *den * *other.den;
	return *frac;
	
}

Fraction::~Fraction() {
	delete num;
	delete den;
}

void Fraction::printFraction() {
	if (num && den)
		std::cout << *num << "/" << *den << "\n";
}

