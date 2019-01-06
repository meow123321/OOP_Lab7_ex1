#include "Complex.h"

Complex::Complex()
{
	this->r = 0.00;
	this->i = 0.00;
}

Complex::Complex(float a)
{
	this->r = a;
	this->i = 0.00;
}

Complex::Complex(float a, float b)
{
	this->r = a;
	this->i = b;
}


void Complex::get(Complex nr) {
	this->r = nr.r;
	this->i = nr.i;
}

Complex Complex::operator+(Complex nr) {
	Complex sum;

	sum.r = this->r + nr.r;
	sum.i = this->i + nr.i;

	return (sum);
}

Complex Complex::operator-(Complex nr) {
	Complex dif;

	dif.r = this->r - nr.r;
	dif.i = this->i - nr.i;

	return (dif);
}

Complex Complex::operator*(Complex nr) {
	Complex prod;

	prod.r = r * nr.r - i * nr.i;
	prod.i = r * nr.i + i * nr.r;

	return (prod);
}

Complex Complex::operator/(Complex nr) {
	Complex imp;

	imp.r = (r * nr.r + i * nr.i) / (nr.r * nr.r + nr.i * nr.i);
	imp.i = (nr.r * i - r * nr.i) / (nr.r * nr.r + nr.i * nr.i);

	return (imp);
}

Complex Complex::operator~() {
	float mod;

	mod = sqrt(r * r + i * i);
	r = mod;
	i = 0.00;

	return Complex(r, i);
}

Complex Complex::operator^(int x) {
	int count = 1;
	Complex curr(r, i);					
	Complex pow;						

	pow = curr;
	do {
		count++;
		pow = pow * curr;

	} while (count != x);

	return pow;
}

void Complex::print() {
	cout << "\nz = " << r << " + (" << i << ")i" << endl;
}

Complex::~Complex(){}
