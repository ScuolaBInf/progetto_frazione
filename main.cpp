#include <iostream>
#include "classe_frazione.h"
using namespace std;

main () 
	{
		frazione a(5, 4), b(7, 10), c;
		c = a + b;
		c.stampa();
	}
