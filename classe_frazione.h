#include <iostream>
using namespace std;

class frazione
	{
		private:
			int dividendo;
			int divisore;			
//			int minore(int, int);
//			int mcm(int div1, int div2);
			
		public:
			frazione(int = 0, int = 1);
			void assegna(int, int);
			void stampa();
			frazione operator + (frazione);	
	};
