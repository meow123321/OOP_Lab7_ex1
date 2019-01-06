#pragma once
#include<iostream>
#include<vector>

using namespace std;

class Complex {
public:
	float r;
	float i;

	Complex();
	Complex(float a);
	Complex(float a, float b);

	Complex operator+(Complex nr);
	Complex operator-(Complex nr);
	Complex operator*(Complex nr);
	Complex operator/(Complex nr);
	Complex operator~();
	Complex operator^(int x);
	void print();

	~Complex();
};
