#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void um_um() {
	char letter = 0;

	cin >> letter;

	cout << "The ASCII code for " << letter << " is " << static_cast<int>(letter) << endl;
}

void um_dois() {
	int a = 0, b = 0, c = 0;
	float average = 0;

	cout << "A ? ";
	cin >> a;

	cout << "B ? ";
	cin >> b;

	cout << "C ? ";
	cin >> c;

	average = (a + b + c) / 3.0;

	cout << "media\t= " << setprecision(10) << average << endl;
	cout << "A-media\t= " << a - average << endl;
	cout << "B-media\t= " << b - average << endl;
	cout << "C-media\t= " << c - average << endl;
}

void um_tres() {
	const double PI = atan(1) * 4;
	float p = 0, r = 0;

	cout << "p ? (m) ";
	cin >> p;

	cout << "r ? (Kg) ";
	cin >> r;

	cout << 4 / 3.0 * (p * PI * pow(r, 3)) << endl;
}

void um_quatro() {
	float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	cout << "a ? ";
	cin >> a;

	cout << "b ? ";
	cin >> b;

	cout << "c ? ";
	cin >> c;

	cout << "d ? ";
	cin >> d;

	cout << "e ? ";
	cin >> e;

	cout << "f ? ";
	cin >> f;

	const float common_denom = (a*e - b*d);
	cout << "x = " << (c*e - b*f) / common_denom << endl;
	cout << "y = " << (a*f - c*d) / common_denom << endl;
}

void um_cinco() {
	int h1 = 10, m1 = 35, s1 = 50, h2 = 15, m2 = 59, s2 = 30;

	cout << "Tempo 1 (horas minutos segundos) ? ";
	cin >> h1 >> m1 >> s1;

	cout << "Tempo 2 (horas minutos segundos) ? ";
	cin >> h2 >> m2 >> s2;

	int d = 0, h = 0, m = 0, s = 0;

	s = (s1 + s2);
	m = (m1 + m2 + s / 60);
	h = (h1 + h2 + m / 60);
	d = h / 24;

	cout << "Soma dos tempos: " << d << " dia, " << h % 24 << " horas, " << m % 60 << " minutos e " << s % 60 << " segundos" << endl;
}

float calc_dist(float x1, float y1, float x2, float y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void um_seis() {
	float x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;

	cout << "x1 y1 ? ";
	cin >> x1 >> y1;

	cout << "x2 y2 ? ";
	cin >> x2 >> y2;

	cout << "x3 y3 ? ";
	cin >> x3 >> y3;

	float a = 0, b = 0, c = 0, s = 0;

	a = calc_dist(x1, y1, x2, y2);
	b = calc_dist(x2, y2, x3, y3);
	c = calc_dist(x3, y3, x1, y1);

	s = (a + b + c) / 2.0;

	cout << "�rea = " << sqrt(s*(s - a)*(s - b)*(s - c)) << endl;
}

void dois_um() {

}

void dois_dois_a() {
	float n1 = 0, n2 = 0, n3 = 0;

	cout << "n1 ? ";
	cin >> n1;

	cout << "n2 ? ";
	cin >> n2;

	cout << "n3 ? ";
	cin >> n3;

	float min = 0, max = 0;

	if (n1 < n2 && n1 < n3)
		min = n1;
	else if (n2 < n3 && n2 < n1)
		min = n2;
	else
		min = n3;

	if (n1 > n2 && n1 > n3)
		max = n1;
	else if (n2 > n3 && n2 > n1)
		max = n2;
	else
		max = n3;

	cout << "M�nimo = " << min << endl;
	cout << "M�ximo = " << max << endl;
}

void get_order(float n1, float n2, float n3, float& min, float& middle, float& max) {
	if (n1 < n2) {
		if (n2 < n3) {
			min = n1;
			middle = n2;
			max = n3;
		}
		else if (n1 < n3) {
			min = n1;
			middle = n3;
			max = n2;
		}
		else {
			min = n3;
			middle = n1;
			max = n2;
		}
	}
	else {
		if (n2 > n3) {
			min = n3;
			middle = n2;
			max = n1;
		}
		else if (n1 > n3) {
			min = n2;
			middle = n3;
			max = n1;
		}
		else {
			min = n2;
			middle = n1;
			max = n3;
		}
	}
}

void dois_dois_b() {
	float n1 = 0, n2 = 0, n3 = 0;

	cout << "n1 ? ";
	cin >> n1;

	cout << "n2 ? ";
	cin >> n2;

	cout << "n3 ? ";
	cin >> n3;

	float min = 0, max = 0, middle = 0;

	get_order(n1, n2, n3, min, middle, max);

	cout << "Ordem = " << min << " " << middle << " " << max << endl;
}

void dois_dois_c() {
	double a = 0, b = 0, c = 0;

	cout << "a ? ";
	cin >> a;

	cout << "b ? ";
	cin >> b;

	cout << "c ? ";
	cin >> c;

	float min = 0, max = 0, middle = 0;

	get_order(a, b, c, min, middle, max);

	if (min + middle <= max)
		cout << "Imposs�vel" << endl;
	else
		cout << "Poss�vel" << endl;
}

void dois_tres() {
	double n1 = 0, n2 = 0;
	char op = 0;

	cout << "numero op numero ? ";
	cin >> n1 >> op >> n2;

	cout << "Resultado = ";
	if (op == '+')
		cout << n1 + n2;
	else if (op == '-')
		cout << n1 - n2;
	else if (op == '*')
		cout << n1 * n2;
	else if (op == '/')
		cout << n1 / n2;
	else
		cout << "inv�lido";

	cout << endl;
}

void dois_quatro() {

}

int main() {
	dois_dois_b();

	return 0;
}