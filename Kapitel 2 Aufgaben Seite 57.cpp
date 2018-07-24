#include <iostream>


using namespace std;


//	Aufgabe 1 Seite 57
//	Mit dem sizeof-Operator kann die Anzahlm der Bytes ermittelt werden, die Variablen eines bestimmten Datentyps im Hauptspeicher belegen.
//	Beispielweise hat sizeof(short) den Wert 2.
//	Schreiben Sie ein C++-Programm, das für für jeden elementaren Datentyp die Größe des benötigen Speicherplatzes auf dem Bildschirm ausgibt.

// Aufgabe 2 Seite 57
// Schreiben Sie ein C++-Programm, das die nebenstehende Bildschirmausgabe erzeugt.
// ICH
//			"SAUSE"
//					\HIN\
//          "UND"
// /HER/

// Aufgabe 3 Seite 57 
// Welche der nebenstehenden Variablendefinitionen ist nicht zulässig oder nicht sinnvoll ?
// int a(2.5);		
// const long breite;
// int b= '?';
// char c('\'');
// char z(500);
// unsigned char ch= '\201';
// int big = 40000;
// unsigned size(40000);
// double fläche(1.2E+5);
// float val = 12345.12345;

// Aufgabe 4 Seite 57
// Erstellen Sie ein C++-Programm, in dem zwei Variablen für Gleitpunktzahlen definiert und mit den Werten 123.456 und 76.543 
// initialisiert werden. Anschließend ist die Summe und die Differenz der beiden Zahlen am Bildschirm auszugeben.


int Aufgabe;


int main() {


	cout << "Geben Sie die Aufgabe an " << endl;
	cin >> Aufgabe;

	switch (Aufgabe) {


	case 1:


		cout << "Datentyp" << "\t" << "Benoetigter Speicher" << endl;

		cout << "char" << "\t" << "\t" << sizeof(char) << endl;

		cout << "int" << "\t" << "\t" << sizeof(int) << endl;

		cout << "short" << "\t" << "\t" << sizeof(short) << endl;

		cout << "long" << "\t" << "\t" << sizeof(long) << endl;

		cout << "long long" << "\t" << sizeof(long long) << endl;

		cout << "float" << "\t" << "\t" << sizeof(float) << endl;

		cout << "double" << "\t" << "\t" << sizeof(double) << endl;

		cout << "long double" << "\t" << sizeof(long double) << endl;


	case 2:

		cout << "ICH" << endl;

		cout << "\t" << "\"SAUSE\"" << endl;

		cout << "\t" << "\t" <<"\\HIN\\" <<  endl;

		cout << "\t" << "UND" << endl;

		cout << "/HER/" << endl;

	case 3:


//		 int a(2.5);	// Erlaubt, allerdings weniger Sinnvoll, weil ist keine Ganzzahl daher wird nur 2 Ausgegeben



//		const long breite;  // Nicht Erlaubt, weil Initialisierung fehlt wegen "const"

//		int b= '?'; // Erlaubt und Sinnvoll
		 
//		char c('\''); // Erlaubt und Sinnvoll

//		char z(500); // Erlaubt, allerdings ist der Wert zu Groß für ein Byte
		
//		unsigned char ch= '\201';
		
//		int big = 40000; // Erlaubt und Sinnvoll, allerdings ist der Wert zu Groß für 16 Bit Systeme , weil bei 16 Bit ist "int" gleichwertig mit "short"

		
//		unsigned size(40000); // Erlaubt
		
//		double fläche(1.2E+5); // Zeichen "ä" ist in Namen nicht erlaubt
		
//		float val = 12345.12345; // Erlaubt,  allerdings weniger Sinnvoll, weil die Genauigkeit der "float" Datentyps nur 6 Stellen beträgt.


	case 4:

		float a(123.456),b(76.543),Summe,Differenz;
		
		cout << "Summe" << "\t" "\t" << a + b << endl;
		cout << "Differenz" << "\t" <<a - b << endl;


	}



	system("pause");


	return 0;




}