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
    ifstream plik;
    plik.open("liczby.txt");
    ofstream plik2;
    plik2.open("wyniki_liczby.txt");
    int liczba;
    int zad = 0;
 
    while(!plik.eof())
    {
        plik>>liczba;
        zad+=czynniki(liczba);
    }
    cout<<"Wynik: "<<zad<<endl;
    plik.close();
    plik2.close();
    return 0;
}
