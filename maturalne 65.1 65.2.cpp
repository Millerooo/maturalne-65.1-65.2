#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class file{
	int liczba, srednia = 0, min = 0, max = 0;
	FILE * plik;
	string a;
	double decimal = (double) liczba;
	int licz[], mian[] , nwd;

public:
	
	void otworz();
	void Euklides();


};
void file::otworz(){
{
    FILE * plik;
    plik = fopen( "liczby.txt", "r" );
    int liczba, srednia = 0, min = 0;
   
    if( plik == NULL )
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
    }
    else
    {
        for( int i = 0; i < 100; i++ )
        {
            fscanf( plik, "%d , ", & liczba );
            if( liczba < min )
            {
                min = liczba;
            }
           
            srednia += liczba;
        }
        srednia = srednia / 100;
        cout << "Srednia  liczb: " << srednia << endl;
        cout << "MIN  liczb: " << min << endl;
    }
}
}
void file::Euklides(){
	
	int nwd(int n, int m){

 if (m==0) return n;
 return nwd(m,n%m);
} 

 int ileN=0;
 	for(int i=0; i<1000; i++){
 		if (nwd(licz[i],mian[i])==1) //   sprawdzeenie algorytmu euklidesa
 			ileN++;             //    dodawanie do licznika 1
 
 } 
 
}
int main() {
	file plik;
	plik.otworz();
	plik.Euklides();
	
	return 0;
}
