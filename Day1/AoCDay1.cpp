#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	int liczba=0, k=0, numer=0, najwieksza=0, suma[1000], top3suma;
	string renifer[10000];
	
	
	fstream plik;
	plik.open("AoC_D1.txt");
	
	while(!plik.eof())
	{
		getline(plik, renifer[k]);
		if(renifer[k] == "")
		{
			for(int i=0; i<k; i++)
			{
				liczba += atoi(renifer[i].c_str());
			}
			suma[numer] = liczba;
			
			for(int i=0; i<k; i++)
			{
				renifer[i]="";
			}
			liczba=0;
			k=0;
			numer++;
		}
		else
		k++;
	}
	
	sort(suma, suma+numer);
	cout<< suma[numer-1] << " " << suma[numer-2] << " " << suma[numer-3]<<endl;
	
	top3suma = suma[numer-1] + suma[numer-2] + suma[numer-3];
	cout << "Suma kalorii niesionych przez top 3 Elfy: " << top3suma;
	
	plik.close();
	return 0;
}
