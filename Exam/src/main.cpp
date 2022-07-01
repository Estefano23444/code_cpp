#include <iostream>
#include <fstream>
using namespace std;
void inicio()
{
	int a = 10;
	cout << "ingrese el valor de a = ";
	cin >> a;
	cout << "a = " << a << endl;
	cout << "Hello world!" << endl;
}

void leerarchivo (string dev_zuk)
{
	string s;
	fstream f;

	cout << "leer archivo" << endl;
	f.open(dev_zuk, ios_base::in);
	if (!f.is_open())
	cerr << "Error al abrir el archivo" << dev_zuk << endl;
	else
		{
			do
			{
			getline (f, s);
			cout << s << endl;
			} while (!f.eof());
		}
	f.close();
}

int main ()
{
	inicio;
	leerarchivo("Files/texto.txt");
}