#include<iostream>//Permita leer tres valores distintos, determinar cuál de los tres valores es el mayor y cuál es el menor y escribirlos.

#include<conio.h>


using namespace std;

int main()
{
	int a;
	int b;
	int c;
	char mayor;
	char menor;
	

	cout << "ingrese el valor de a: ";
	cin >> a;
	cout << "ingrese el valor de b: ";
	cin >> b;
	cout << "ingrese el valor de c: ";
	cin >> c;
	
	
	mayor = (a > b && a > c) ? 'a' : (b > a&&b > c) ? 'b' : 'c';
	menor=(a < b && a < c) ? 'a' : (b < a&&b < c) ? 'b' : 'c';

	cout << "el mayor es : " << mayor << endl;
	cout << "el menor es : " << menor << endl;

	_getch();











}