#include"Complex.h"

int main() {
	Complex z1, z2, z3, z4;
	Complex first_sum, second_sum, Z;
	vector<Complex> V;
	float real, img;
	int n;

	z1 = Complex();
	z2 = Complex(5);
	z3 = Complex(2, 3); 
	z4 = z2;
	
	cout << "Ente the number of element of the vector:" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "The real part " << endl;
		cin >> real;
		cout << "\nThe imaginary part " << endl;
		cin >> img;

		V.push_back(Complex(real, img));
	}

	first_sum = Complex();
	for (int i = 0; i < n; i += 2) {		// (z1^3+ z3^3+ ... z(2n-1)^3)
		first_sum = first_sum + (V[i]^3);
	}

	second_sum = Complex();
	for (int i = 1; i < n; i += 2) {		// (z2^4+ z4^4+ ... z2n^4)
		second_sum = second_sum + (V[i] ^ 4);
	}

	Z = first_sum / second_sum;		//(z1^3+ z3^3+ ... z(2n-1)^3) /  (z2^4+ z4^4+ ... z2n^4)

	Z.print();

	system("pause");
	return 0;
}