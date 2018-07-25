#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;


int Aufgabe;

// Aufgabe 1
double a(4), b(12.25), c(0.0121), Zahl;

// Aufgabe 3
string meldung = "\n aus Fehlern wird man klug!";
int len = meldung.length();


// Aufgabe 1 Seite 75
// Erstellen Sie ein Programm, das die Wurzeln der Zahlen 4, 12.25. , 0.0121 berechnet
// und wie nebestehend gezeigt ausgibt. Lassen Sie dann noch eine Zahl von der Tastatur einlesen und geben Sie ebenfalls die Wurzel dieser Zahl aus.
// Zur Berechnung der Wurzel einer Zahl verwenden Sie die Funktion sqrt(), die inder Header-Datei math.h (oder auch cmath) mit folgenden Prototyp deklariert ist:
//double sqrt (double x);
//Der Return-Wert der Funktion sqrt() ist die Wurzel von x

// Aufgabe 2 Seite 75
//Das nebestehende Programm enthält mehrere Fehler ! Korrigieren Sie die Fehler, und Sie die Lauffähigkeit des Programms.

// Ein Programm mit Fehlern !

//	#include <iostream> , <string>
//	#include <stdlib>
//	void srand(seed);
//
//	int main()
//{
//	string meldung "\n aus Fehlern wird man klug!";
//	cout << meldung << endl;
//	
//	int len = length( meldung);
//	cout << " Die Laenge des Strings: " << len << endl;
//
//	// Und noch eine Zufallszahl
//	int a,b;
//	a = srand(12.5);
//	b = rand(a);
//	cout << "\nZufallszahl:" << b << endl;
//
//	system("pause");
//
//	return = 0
//}

// Aufgabe 3 Seite 75
//
// Erstellen Sie ein C++-Programm, in dem ein String mit der Zeichenkette 
// Schon wieder was dazugelernt !
// definiert und die Länge des Strings von der Tastatur ein. Fügen Sie die beiden Strings so zu einem String zusammen, dass die beiden Teilstrings durch " * " getrennt sind. 
// geben Sie den neuen String am Bildschirm aus.



int main() {


	cout << "Geben Sie die Aufgabe von Kapitel 3 Seite 75 an" << endl;

	cin >> Aufgabe;



	switch (Aufgabe) {

	case 1:





		cout << sqrt(a) << "\t" << sqrt(b) << "\t" << sqrt(c) << endl;


		cout << "Von welcher Zahl soll die Wurzel berechnet werden ?" << endl;

		cin >> Zahl;

		cout << sqrt(Zahl);




		break;



	case 2:



		cout << meldung << endl;

		cout << " Die Laenge des Strings: " << ""  << len << endl;

		// Und noch eine Zufallszahl
		int d;
		srand(12);

		d = rand();

		cout << "\nZufallszahl:" << d << endl;

		break;


	case 3:

		string Zeichenkette = "Schon wieder was dazugelernt";

		int len2 = Zeichenkette.length();

		cout << " Länge der Zeichenkette" << len2 << endl;

		string neuZeichenkette1, neuZeichenkette2, Summe;
		
		cout << " Geben Sie die erste Zeichenfolge ohne Leerzeichen ein " << endl;
		
		cin >> neuZeichenkette1;


		cout << " Geben Sie die zweite Zeichenfolge ohne Leerzeichen ein " << endl;


		cin >> neuZeichenkette2;

		Summe = neuZeichenkette1 + " * " + neuZeichenkette2;

		cout << "Summe" << " " <<  Summe <<  endl;


		break;

	}	

	


	system("pause");

	return 0;
}
