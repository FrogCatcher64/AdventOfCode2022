#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int suma=0;
	string input, output;
	ifstream plik;
	plik.open("AoC_D2.txt");
	
	while (!plik.eof())
	{
		getline(plik, input, ' ');
		getline(plik, output);
		
		if(output=="X"){
			if(input=="A")
			suma+=3;
			else if(input=="B")
			suma+=1;
			else
			suma+=2;
		}
		else if(output=="Y"){
			suma+=3;
			if(input=="A")
			suma+=1;
			else if(input=="B")
			suma+=2;
			else
			suma+=3;
		}
		else{
			suma+=6;
			if(input=="A")
			suma+=2;
			else if(input=="B")
			suma+=3;
			else
			suma+=1;
		}
		
	}
	cout<<suma;
	plik.close();
	return 0;
}
