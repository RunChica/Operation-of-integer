#include <iostream>
using namespace std;

int iNumber() {
	int nom;
	cin >> nom;
	return nom;
}

char ichar() {
	char op;
	cin >> op;
	return op;
}

void operasi(int& a, int& b,char& c,int& d) {
	cout << "Please key-in the first value: ";
	a = iNumber();
	cout << "Please key-in the second value: ";
	b = iNumber();
	cout << "Please key in the operator(+ or - or *): ";
	c = ichar();

	if (c == '+') {
		d = a + b;
	}
	else if (c == '-') {
		d = a - b;
	}
	else if (c == '*') {
		d = a * b;
	}
	else {
		cout << "Error...Wrong operator. (+ or - or *)\n";
		d = 0;
	}
}


int main() {
	int first1, second1,ans1, first2, second2, ans2, first3, second3,ans3, first4, second4, ans4, first5, second5, ans5;
	char opt1, opt2, opt3, opt4, opt5;
	cout << "OPERASI PERTAMA" << endl;
	operasi(first1, second1, opt1, ans1);
	cout << "OPERASI KEDUA" << endl;
	operasi(first2, second2, opt2, ans2);
	cout << "OPERASI KETIGA" << endl;
	operasi(first3, second3, opt3, ans3);
	cout << "OPERASI KEEMPAT" << endl;
	operasi(first4, second4, opt4, ans4);
	cout << "OPERASI KELIMA" << endl;
	operasi(first5, second5, opt5, ans5);
	cout << "Hasil Operasi Pertama,		" << first1 << " " << opt1 << " " << second1 << " = " << ans1 << endl;
	cout << "Hasil Operasi Kedua,		" << first2 << " " << opt2 << " " << second2 << " = " << ans2 << endl;
	cout << "Hasil Operasi Ketiga,		" << first3 << " " << opt3 << " " << second3 << " = " << ans3 << endl;
	cout << "Hasil Operasi Keempat,		" << first4 << " " << opt4 << " " << second4 << " = " << ans4 << endl;
	cout << "Hasil Operasi Kelima,		" << first5 << " " << opt5 << " " << second5 << " = " << ans5 << endl;
}
