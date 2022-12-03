#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string E1, E2, E3;
	char letter;
	int sum=0, a, b;
	ifstream plik;
	plik.open("AoC_D3.txt");
	
	while (!plik.eof())
	{
		getline(plik, E1);
		getline(plik, E2);
		getline(plik, E3);      
		
		for(int i=0; i<E1.length(); i++)
		{
			a = E2.find(E1[i]);
			b = E3.find(E1[i]);
			if(a!=-1 && b!=-1)
			{
				letter = E1[i];
				if(letter <= 'z' && letter >= 'a')
					sum+= ((int)letter)- 96;
				else
					sum+= ((int)letter)- 38;
				break;		
			}
		}
	}
	cout<<sum;
	plik.close();
	return 0;
}
