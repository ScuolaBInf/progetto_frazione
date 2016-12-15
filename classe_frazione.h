#include <iostream>
using namespace std;

class frazione
	{
		private:
			int dividendo;
			int divisore;			
			void assegna(int, int);
//			int minore(int, int);
//			int mcm(int div1, int div2);
			
		public:
			frazione(int = 0, int = 1);
			void stampa();
			frazione operator + (frazione);
			
	};
