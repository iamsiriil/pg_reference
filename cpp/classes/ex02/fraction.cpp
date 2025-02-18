#include "fraction.hpp"

Fraction::Fraction() : num(0), den(0) {}

Fraction::Fraction(int n, int d) : num(new int), den(new int) {
	*num = n;
	*den = d;
}

Fraction::Fraction(const Fraction& other) : num(other.num), den(other.den) {}

Fraction& Fraction::operator=(const Fraction& other) {
	if (this != &other) {
		delete num;
		delete den;

		num = other.num;
		den = other.den;
	}
	return *this;
}

Fraction::Fraction(Fraction&& other) noexcept : num(other.num), den(other.den) {
	other.num = 0;
	other.den = 0;
}

Fraction& Fraction::operator=(Fraction&& other) noexcept {
	if (this != &other) {
		delete num;
		delete den;

		num = other.num;
		den = other.den;

		other.num = 0;
		other.den = 0;
	}
	return *this;
}

Fraction::~Fraction() {
	delete num;
	delete den;
}

void Fraction::printFraction() {
	std::cout << *num << "/" << *den << "\n";
}

