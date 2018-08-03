#include <iostream> // Fuer standartisierte In und Output
#include <iomanip> // Fuer Manipulatoren wie setw(),setprecision()....
#include <string>  // Fuer Klassen String

using namespace std;



// Aufgabe 1 Seite 99
// Welche Ausgabe erzeugt das unten stehende Programm ?
// #include <iostream>
// using namespace std;
// int main(){
//double x = 12.0;
//cout.precision(2);  // Genauigkeit 2
//cout << " Standard:" << x << endl;
//cout << "showpoint " << showpoint << x << endl;
//cout << " fixed " << fixed << x << endl;
//cout << "scientific " << scientific << x << endl;
//return = 0;
//}

// Aufgabe 1
double x = 12.0;

// Aufgabe 2 Seite 99
// Formulieren Sie die entsprechenden Anweisungen
// a) Die Zahl 0.123456 soll linksbündig in ein Feld mit der Feldbreite 15 Ausgegeben werden
// b) Die Zahl 23.987 soll als Festpunktzahl, auf zwei Ziffern hinter dem Dezimalpunkt gerundet, rechtsbündig in ein Feld der Breite 12 ausgegeben werden.
// c) Die Zahl -123.456 soll in exponentieller Darstellung und mit vier Stellen nach dem Dezimalpunkt ausgegeben werden. Wäre eine Feldbreite 10 sinnvoll ?

// Aufgabe 2
double a(0.123456), b(23.987), c(-123.456);

// Aufgabe 3

long Artikelnummer;
int Anzahl;
double Preis;

// Aufgabe 3 
// Schreiben Sie ein C++-Programm, das eine Artikelnummer, eine Stückzahl und einen Stückpreis von der Tastatur einliest und wie neben stehend gezeigt auf dem Bildschirm ausgibt.
// Artikelnummer	Stückzahl		Strückpreis
//  ......			 ......			  ......	Euro


// Aufgabe 4
// Erstellen Sie ien C++-Programm, das einen beliebigen Zeichencode (eine positive Ganzzahl) von der Tastatur einliest 
//und das entsprechende Zeichen und den Zeichencode dezimal, oktal und hexadezimal auf dem Bildschirm ausgibt.
// Warum wird, Ihrer Meinung nach, bei der Eingabe der Zahl 336 das zeichen P ausgegeben ?

// Aufgabe 4

unsigned int code = 0;
unsigned char zeichen = 0 ;


// Aufgabe 5
// Korrigieren Sie die Fehler im nebenstehenden Programm.
//
//#include <iostream>
// using namespace std;
// int main()
//{
//
//	char ch;
//	string wort;
//
//	cin >> "Los geht's mit der Return-Taste: " >> ch;
//
//	cout << "Geben Sie ein Wort 
//		mit höchstens drei Zeichen ein : " ;
//
//		cin >> setprecision(3) >> wort;
//
//
//	cout >> "Ihre Eingabe:  " >> ch >> endl;
//
//
//
//	return 0;
//
//}


// Aufgabe 5
char ch;
string wort; 








int Aufgabe;



int main(){


	cout << " Geben Sie die Aufgabe von Kapitel 4 Seite 99 an" << endl;
	cin >> Aufgabe;

	switch (Aufgabe) {

	case 1:


		
		cout.precision(2);  // Genauigkeit 2
		cout << " Standard:" << x << endl; // 12.0
		cout << "showpoint " << showpoint << x << endl; // 12.
		cout << " fixed " << fixed << x << endl; // 12.00
		cout << "scientific " << scientific << x << endl; // 1.20e+001


		break;


	case 2:



		cout << left << setw(15) << a << endl;
		
		cout << fixed << setw(12) << setprecision(2) << right << b << endl;

		cout << scientific << setw(12) << setprecision(4) << c << endl;


		break;


	case 3:

		cout << "Geben Artikelnummer ein" << endl;
		cin >> Artikelnummer;

		cout << "Geben sie Stückzahl ein" << endl;
		cin >> Anzahl;

		cout << "Geben Sie Stückpreis ein" << endl;
		cin >> Preis;


		cout << "\n\t Artikelnummer  Stueckzahl  Stueckpreis ";

		cout << "\n\t"
		     << setw(8)  << Artikelnummer 
			 <<	setw(16) << Anzahl 
			 << fixed    << setprecision(2)
			 << setw(16) <<  Preis << "EURO" << endl;
		
		break;


	case 4:

		zeichen = code;


		cout <<  "\n Einen Zeichencode in Dezimal eingeben ";

		cin >> code;

		cout << " entsprechende Zeichen " << zeichen << endl;

		code = zeichen;

		cout << "\n"
			<< "\n dezimal: " << setw(3) << dec << code
			<< "\n oktal: " << setw(3) << oct << code
			<< "\n hexadezimal: " << setw(3) << hex << code << endl;

		break;


	case 5:

	
		
			cout << "Los geht's mit der Return-Taste: " ;

			cin.get();
		
			cout << "Geben Sie ein Wort mit höchstens drei Zeichen ein : " ;
		
			cin >> setw(3) >> wort;
		
		
			cout << "Ihre Eingabe:  " << wort << endl;
		
		
			system("pause");


			return 0;
		
			


		break;







	}
	







	system("pause");


return 0;

}