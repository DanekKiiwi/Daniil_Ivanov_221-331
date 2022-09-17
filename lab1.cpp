#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    string text = "Ivanov Daniil Maksimovich, 221-331";
    cout << text << endl;

	cout << "min int = " << INT_MIN << ", max int = " << INT_MAX << ", size of int = " << sizeof(int) << endl;
	cout << "min unsigned int  =  0, max unsigned int = " << UINT_MAX << ", size of unsigned int = " << sizeof(unsigned int) << endl;
	cout << "min short = " << SHRT_MIN << ", max short = " << SHRT_MAX << ", size of short = " << sizeof(short) << endl;
	cout << "min unsigned short = 0, max unsigned short = " << USHRT_MAX << ", size of unsigned short = " << sizeof(unsigned short) << endl;
	cout << "min long = " << LONG_MIN << ", max long = " << LONG_MAX << ", size of long = " << sizeof(long) << endl;
	cout << "min long long = " << LLONG_MIN << ", max long long = " << LLONG_MAX << ", size of long long = " << sizeof(long long) << endl;
	cout << "min double = " << DBL_MIN << ", max double = " << DBL_MAX << ", size of double =" << sizeof(double) << endl;
	cout << "min char =" << CHAR_MIN << ", max char = " << CHAR_MAX << ", size of char = " << sizeof(char) << endl;
	cout << "min bool = 0, max bool = 255, size of bool = " << sizeof(bool) << endl;

	int num;

	cout << "Enter the number:";
	cin >> num;

	cout << bitset<16>(num) << endl;
	cout << hex << num << endl;
	cout << "bool " << bool(num) << endl;
	cout << "char " << char(num) << endl;
	cout << "double " << double(num) << endl;

	cout << "a * x = b" << endl;
	cout << "Input coefficients" << endl;

	int a, b;

	cin >> a >> b;

	cout << "x = " << b << " / " << a << endl;

	cout << " x = " << b / a << endl;
	cout << "answer " << b / a << endl;


	cout << "Input coordinates:" << endl;

	int x, y;

	cin >> x >> y;

	cout << " Middle " << (x + y) / 2 << endl;

	return 0;

}

