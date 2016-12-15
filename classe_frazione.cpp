#include <iostream>
#include "classe_frazione.h"
using namespace std;	

frazione::frazione(int dividendo, int divisore)
	{	
		assegna(dividendo, divisore);
	}

void frazione::assegna(int dividendo, int divisore)
	{
		if (divisore == 0)
			{
				throw "Division by 0 detection";
			}
		
		this -> dividendo = dividendo;
		this -> divisore = divisore;
	}

void frazione::stampa()
	{
		cout << '(' << dividendo << '/' << divisore << ')'; 	
	}

frazione frazione::operator + (frazione op)
	{
		frazione ris;
		ris.assegna((op.dividendo * divisore) + (dividendo * op.divisore), op.divisore * divisore);
		return ris;
	}
