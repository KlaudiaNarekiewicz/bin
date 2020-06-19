#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class binarne
{
	ifstream plik;
	ofstream plik2;
	
	public:
		
	void otworz()
	{
		plik.open("c:\1.txt");
		plik2.open("c:\2.txt");
	}
	
	void zamiana()
	{
		int i=0;
		int reszta[100];
		int liczba;
		while(!plik.eof())
		{
			plik>>liczba;
			i=0;
		
			while(liczba>0)
			{
				reszta[i++]=liczba%16;
				liczba/=16;
			}
			i--;
			while(i>=0)
			{
				switch (reszta[i])
				{
					case 10: plik2<<"A"; 
					break;
					case 11: plik2<<"B"; 
					break;
					case 12: plik2<<"C"; 
					break;
					case 13: plik2<<"D"; 
					break;
					case 14: plik2<<"E"; 
					break;
					case 15: plik2<<"F"; 
					break;
					default: plik2<<reszta[i];
				}
				i--;
			}
			plik2<<" ";
		}
	}
	void zamknij()
	{
		plik2.close();
		plik.close();
	}
};
int main(int argc, char** argv) 
{
	binarne b;
	b.otworz();
	b.zamiana();
	b.zamknij();
return 0;
}
