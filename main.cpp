#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

const double PI = atan(1) * 4;

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

	average = (a + b + c) / 3.0f;

	cout << "media\t= " << setprecision(10) << average << endl;
	cout << "A-media\t= " << a - average << endl;
	cout << "B-media\t= " << b - average << endl;
	cout << "C-media\t= " << c - average << endl;
}

void um_tres() {
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

	s = (a + b + c) / 2.0f;

	cout << "Área = " << sqrt(s*(s - a)*(s - b)*(s - c)) << endl;
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

	cout << "Mínimo = " << min << endl;
	cout << "Máximo = " << max << endl;
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
	float a = 0, b = 0, c = 0;

	cout << "a ? ";
	cin >> a;

	cout << "b ? ";
	cin >> b;

	cout << "c ? ";
	cin >> c;

	float min = 0, max = 0, middle = 0;

	get_order(a, b, c, min, middle, max);

	if (min + middle <= max)
		cout << "Impossível" << endl;
	else
		cout << "Possível" << endl;
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
		cout << "inválido";

	cout << endl;
}

void dois_quatro() {

}

bool is_prime(unsigned int n) {
	for (unsigned int i = 2; i <= sqrt(n); i++)
	if (n % i == 0)
		return false;

	return true;
}

void dois_seis_a() {
	unsigned int n = 0;

	cout << "N ? ";
	cin >> n;

	if (is_prime(n))
		cout << "É primo";
	else
		cout << "Não é primo";

	cout << endl;
}

void dois_seis_b() {
	int nr_primes = 0;

	for (unsigned int i = 3; nr_primes < 100; i++)
	if (is_prime(i)) {
		cout << i << endl;
		nr_primes++;
	}
}

void dois_seis_c() {
	for (unsigned int n = 1; n <= 10000; n++)
	if (is_prime(n))
		cout << n << endl;
}

void dois_sete_a() {
	cout << "ang     sen         cos         tan" << setprecision(6) << endl;

	for (unsigned int angle = 0; angle <= 90; angle += 15) {
		double radians = angle * PI / 180.0;

		cout << angle;
		
		cout << "  " << sin(radians) << "  " << cos(radians) << "  " << tan(radians) << endl;
	}
}

bool isNumber(string number) {
	bool slashFound = false;
	for (unsigned short i = 0; i < number.length(); i++)
	if (number[i] == '-' && i > 0)
		return false;
	else if (number[i] == '/') {
		if (slashFound)
			return false;
		else
			slashFound = true;
	}
	else if ((number[i] < '0' || number[i] > '9') && i > 0)
		return false;

	return true;
}

bool readFracc(int &numerator, int &denominator) {
	string number = "";
	stringstream ss;

	cout << "Número ? " << endl;
	getline(cin, number);

	if (!isNumber(number)) {
		numerator = 0;
		denominator = 0;

		return false;
	}

	unsigned short slashPos = number.find('/');
	ss << number.substr(0, slashPos);
	ss >> numerator;
	ss.clear();
	ss << number.substr(slashPos + 1, number.length() - slashPos);
	ss >> denominator;

	if (denominator == 0) {
		numerator = 0;
		denominator = 0;

		return false;
	}
	
	return true;
}

void writeFracc(int numerator, int denomirator) {
	cout << numerator << "/" << denomirator << endl;
}

int gcd(int a, int b) {
	if (b == 0)
		return 1;

	if (a < 0)
		a = -a;

	while (a != b)
	if (a > b)
		a -= b;
	else
		b -= a;

	return a;
}

void reduceFracc(int &numerator, int &denomirator) {
	if (denomirator == 0)
		return;

	int frac_gcd = gcd(numerator, denomirator);

	numerator /= frac_gcd;
	denomirator /= frac_gcd;
}

void sumFracc(int numerator1, int denomirator1, int numerator2, int denominator2,
	int &numerator_result, int &denominator_result) {

	numerator_result = numerator1 * denominator2 + numerator2 * denomirator1;
	denominator_result = denomirator1 * denominator2;

	reduceFracc(numerator_result, denominator_result);
}

void subtractFracc(int numerator1, int denomirator1, int numerator2, int denominator2,
	int &numerator_result, int &denominator_result) {

	sumFracc(numerator1, denomirator1, -numerator2, denominator2, numerator_result, denominator_result);
}

void multiplyFracc(int numerator1, int denomirator1, int numerator2, int denominator2,
	int &numerator_result, int &denominator_result) {

	numerator_result = numerator1 * numerator2;
	denominator_result = denomirator1 * denominator2;

	reduceFracc(numerator_result, denominator_result);
}

void divideFracc(int numerator1, int denomirator1, int numerator2, int denominator2,
	int &numerator_result, int &denominator_result) {

	sumFracc(numerator1, denomirator1, denominator2, numerator2, numerator_result, denominator_result);
}

void tres_cinco() {
	int num, den;
	
	readFracc(num, den);
	cout << "Antes:" << endl;
	writeFracc(num, den);

	reduceFracc(num, den);
	cout << "Depois:" << endl;
	writeFracc(num, den);

	int num_res, den_res;

	sumFracc(num, den, 4, 6, num_res, den_res);
	cout << "A tua fracc + 4/6 = ";
	writeFracc(num_res, den_res);

	subtractFracc(num, den, 4, 6, num_res, den_res);
	cout << "A tua fracc - 4/6 = ";
	writeFracc(num_res, den_res);

	multiplyFracc(num, den, 4, 6, num_res, den_res);
	cout << "A tua fracc * 4/6 = ";
	writeFracc(num_res, den_res);

	divideFracc(num, den, 4, 6, num_res, den_res);
	cout << "A tua fracc / 4/6 = ";
	writeFracc(num_res, den_res);
}

int mdc(int a, int b) {
	if (a % b == 0)
		return b;

	return mdc(b, a % b);
}

void tres_oito() {
	int a, b;

	cout << "Números ? ";
	cin >> a;
	cin >> b;

	cout << "mdc = " << mdc(a, b) << endl;
}

void decompose(string compound) {
	string compounds;
	string current_compound;

	for (char letter : compound)
	if (letter > '0' && letter < '9') {
		compounds += current_compound + ",";
		current_compound = "";
	}
	else if (letter > 'a' && letter < 'z')
		current_compound += letter;
	else {
		if (current_compound != "")
			compounds += current_compound + ",";
		
		current_compound = letter;
	}

	compounds += current_compound;

	cout << compounds << endl;
}

void readIntArray(int a[], int nElem) {
	for (int i = 0; i < nElem; i++)
		cin >> a[i];
}

int searchValueInIntArray(const int a[], int nElem, int value) {
	for (int i = 0; i < nElem; i++)
	if (a[i] == value)
		return i;

	return -1;
}

int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[]) {
	int indexSize = 0;

	for (int i = 0; i < nElem; i++)
	if (a[i] == value)
		index[indexSize] = i;

	return indexSize;
}

int main() {
	decompose("MgOH");

	return 0;
}