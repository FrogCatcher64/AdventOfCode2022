#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int suma=0;
	string input, output;
	
	fstream plik;
	plik.open("AoC_D2.txt");
	
	while(!plik.eof())
	{
		getline(plik, input, ' ');
		getline(plik, output);
		
		if(output=="X"){
			suma+=1;
			output="A";
		}
		else if(output=="Y"){
			suma+=2;
			output="B";
		}
		if(output=="Z"){
			suma+=3;
			output="C";
		}
		
		if(input==output)
			suma+=3;
		else if((input=="A" && output=="B") || (input=="B" && output=="C") || (input=="C" && output=="A"))
			suma+=6;
	}
	
	cout<< suma;
	
	plik.close();
	return 0;
}
