// projekt 3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	//zad 1

	/*float a, b, x;

	cout << "podaj a:";
	cin >> a;;
	cout << "podaj b:";
	cin >> b;

	if (a == 0)
		cout << "rownanie sprzeczne\n";
	else
		cout << "x = " << -b / a << endl;*/

	//zad 2

		/*float a, b, c, x, delta;

		cout << "podaj a:";
		cin >> a;
		cout << "podaj b:";
		cin >> b;
		cout << "podaj c:";
		cin >> c;
		delta = b * b - 4 * a * c;

		if (a == 0)
		{
			x = -b / a;
			cout << "1 rozwiazanie";
		}
		else if (delta == 0)
		{
			cout << "1 rozwiazanie";
		}
		else
		{
			cout << "2 rozwiazania";
		}*/

	//zad 3

		/*float a, b, c, x, x1, x2, delta;
		cout << "podaj a:";
		cin >> a;
		cout << "podaj b:";
		cin >> b;
		cout << "podaj c:";
		cin >> c;
		delta = b * b - 4 * a * c;

		if (a == 0)
		{
			x = -c / b;
			cout << "1 rozwiazanie i x wynosi:" << x << endl;
		}


		else
		{
			if (delta == 0)
			{
				x1 = -b / 2 * a;
				cout << "x1 wynosi:";
				cout << x1;
			}

			else if (delta < 0)

				cout << "brak rozwiazania" << endl;

			else
			{
				x1 = (-b - sqrt(delta)) / (2 * a);
				x2 = (-b + sqrt(delta)) / (2 * a);
				cout << "x1 wynosi: ";
				cout << x1;
				cout << "\nx2 wynosi: ";
				cout << x2;
			}
		}*/

	//zad 4a

		/*float x;
		cout << "podaj x:";
		cin >> x;
		if (x > 0)
		{
			cout << 2 * x << endl;
		}
		else if (x == 0)
		{
			cout << "0" << endl;
		}

		else if (x < 0)
		{
			cout << -3 * x << endl;
		}*/

	//zad 4b

		/*float x;
		cout << "podaj x:";
		cin >> x;
		if (x >= 1)
		{
			cout << (x * x) << endl;
		}
		else
		{
			cout << x << endl;
		}*/

	//zad 4c

		/*float x;
		cout << "podaj x:";
		cin >> x;

		if (x > 2)
		{
			cout << (2 + x) << endl;
		}
		else if (x == 2)
		{
			cout << "8" << endl;
		}
		else if (x < 2)
		{
			cout << (x - 4) << endl;
		}*/

	//zad 5 
		/*int x, y, z;
		int max, srednia, min;
		cout << "Wprowadz x: ";
		cin >> x;
		cout << "\nWprowadz y: ";
		cin >> y;
		cout << "\nWprowadz z: ";
		cin >> z;
		cout << endl;
		if (x > y && x > z)
		{
			max = x;
			if (y < z && y < x)
			{
				min = y;
			}
			else min = z;
			
			if (max == x && min == y)
			{
				srednia = z;
			}
			else srednia = y;
		}
		else if (y > z && y > x)
		{
			max = y;
			if (x < z && x < y)
			{
				min = x;
			}
			else min = z;

			if (max == y && min == x)
			{
				srednia = z;
			}
			else srednia = x;
		
		}else {
			max = z;
			if (x < z && x < y)
			{
				min = x;
			}
			else min = y;

			if (max == z && min == x)
			{
				srednia = y;
			}
			else srednia = x;

		}
		
		cout << "najmniejsza liczba;" << min << endl;
		cout << "srednia liczba;" << srednia << endl;
		cout << "najwieksza liczba;" << max << endl;*/

	//zad 6
	// a=1 pada deszcz, b=1 jest autobus 	
		
		/*int a, b;
		cout << "Wpisz 1 jesli tak, wpisz 0 jesli nie\n";
		cout << "Pada deszcz:";
		cin >> a;
		cout << "Czy masz autobus:";
		cin >> b; 

		if (a == 1 && b == 1)
			cout << "\nwez parasol";
		else if (a == 1 && b == 0)
			cout << "\nNie dostaniesz sie na uczelnie";
		else if (a == 0 && b == 1)
			cout << "\nDostaniesz sie na uczelnie " << "Milego dnia i pieknej pogody";
		else
			cout << "blad danych";*/

	//zad 7
	// a=1 znizka na samochod, b=1 podwyzka 
	
		/*int a, b;
		cout << "Wpisz 1 jesli tak, wpisz 0 jesli nie\n";
		cout << "Czy jest znizka na samochod:";
		cin >> a;
		cout << "\nCzy otrzymales podwyzke:";
		cin >> b;
		if (a == 0 || b==0)
		{
		cout << "Mozesz kupic samochod" << "Znizki na samochod nie ma" << endl;

		}
		if (a == 1 || b == 1)
		{
		cout << "Mozesz kupic samochod !" << endl;
		}*/

}

	

			
				

		


		
	










