 #include<iostream>
#include<cmath>
using namespace std;
char functionMenu(char &o) {
	
	cout << "\t WELCOME TO FRACTIONS CALCULATOR! " << endl << endl;
	cout << "First of all enter the operation you want to operate your fractions with!(+,-,*,/) ";
	cin >> o;
	
	return o;
}

float addFractions(float a, float c, float b, float d) {
	float t1,t2,t3;
	t1 = (b*d);
	t2 = (a*d + c * b);
	t3 = t2 / t1;
	return t3;

}
float subtractFractions(float a, float c, float b, float d) {
	float t1, t2, t3;
	t1 = (b*d);
	t2 = (a*d - c * b);
	t3 = t2 / t1;
	return t3;

}
float multiplyFractions(float a, float c, float b, float d) {
	float t1, t2, t3;
	t1 = (b*d);
	t2 = (a*c);
	t3 = t2 / t1;
	return t3;
}
float divideFractions(float a, float c, float b, float d) {
	float t1, t2, t3;
	t1 = (b*c);
	t2 = (a*d);
	t3 = t2 / t1;
	return t3;
}


int main() {
	char op = {};
	float num1, num2, den1, den2;
	functionMenu(op);
	
	cout << "\n \t Enter numerator and denominator of first fraction: " << endl;
	cin >> num1 >> den1;
	cout << endl << endl;
	cout << "\t Enter numerator and denominator of second fraction: " << endl;
	cin >> num2 >> den2;
	cout << endl << endl;

	switch (op) {
	case '+':
		addFractions(num1, num2, den1, den2);
		cout << "\t The sum of your fractions: " << num1 << " / " << den1 << "  and  " << num2 << " / " << den2 << " = " << addFractions(num1, num2, den1, den2) << endl;
		break;

	case '-':
		subtractFractions(num1, num2, den1, den2);
		cout << "\t The subtraction of your fractions: " << num1 << " / " << den1 << "  and  " << num2 << " / " << den2 << " = " << subtractFractions(num1, num2, den1, den2)<<endl;
		break;

	case '*':
		multiplyFractions(num1, num2, den1, den2);
		cout << "\t The Multiplication of your fractions: " << num1 << " / " << den1 << "  and  " << num2 << " / " << den2 << " = " << multiplyFractions(num1, num2, den1, den2) << endl;
		break;

	case '/':
		divideFractions(num1, num2, den1, den2);
		cout << "\tThe Division of your fractions : " << num1 << " / " << den1 << "  and  " << num2 << " / " << den2 << " = " << divideFractions(num1, num2, den1, den2) << endl;
		break;
	default:
		cout << "\t Your input is wrong! ";
		break;
	}
	return 0;
}

