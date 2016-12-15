#include <iostream>
#include "classe_frazione.h"
using namespace std;

main () 
	{
		int val1, val2;
		frazione a(5, 4), b(7, 10), c;
		c = a + b;
		c.stampa();
		
		cout << endl << "Inserisci dividendo: ";
		cin >> val1;
		cout << "Inserisci divisore: ";
		cin >> val2;
		try 
			{
				c.assegna(val1, val2);
			}
		catch (const char* msg)
			{
				cout << msg;
			}
	}
