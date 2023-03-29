#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return(a + b) /2;
}

string status(double r) {
	if (r >= 70) {
		return "lulus";
	}else {
		return "gagal";
	}
}

string status2(double r, double n) {
	if (r >= 70 && n >= 80) {
		return "lulus";
	}
	else {
	}
}

string status3(double r, double n) {
	if (r >= 70 || n >= 70) {
		return "lulus";
	}
	else {
		return "gagal";
	}
}

int main() {
	double nilaimath, nilaiBing;


	cout << "Masukan nilai matematika : ";
	cin >> nilaimath;
	cout << "masukan nilai B.inggris : ";
	cin >> nilaiBing;

	cout << "nilai Rerata : " << rerata(nilaimath, nilaiBing);
	cout << "\nstatus kelulusannya : " << status(rerata(nilaimath, nilaiBing));
	cout << "\nstatus kelulusannya : " << status2(rerata(nilaimath, nilaiBing), nilaimath);
	cout << "\nstatus kelulusannya : " << status3(rerata(nilaimath, nilaiBing), nilaimath);
}