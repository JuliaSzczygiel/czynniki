#include <iostream>
using namespace std;

bool czynniki(int liczba)
{
	int licznik = 0;
	int czynnik = 3;
	if(liczba %2 == 0) return false;
	while (liczba>1)
	 {
		 if (liczba % czynnik == 0) licznik++;
		 while (liczba%czynnik==0)
		 {
		 	liczba = liczba/czynnik;
		 }
	 	czynnik=czynnik+2;
	 	if (licznik>3) return false;
	 }
	 if (licznik == 3) return true;
	 if (licznik <3) return false;
} 
int main ()
{
    cout<<czynnik<< "\n"; 
}