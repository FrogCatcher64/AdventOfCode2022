#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string com1, com2, com;
	char pow;
	int half, sum=0;
	ifstream plik;
	plik.open("AoC_D3.txt");
	
	while (!plik.eof())
	{
		getline(plik, com);
		half=com.length()/2;
		com1=com.substr(0,half);
		com2=com.substr(half, com.length());

		for(int i=0; i<half; i++)
		{
			for(int j=0; j<half; j++)
			{
				if(com1[i]==com2[j])
				pow=com1[i];
			}
		}
		
		if(pow <= 'z' && pow >= 'a')
		sum+= ((int)pow)- 96;
		else
		sum+= ((int)pow)- 38;	
	}
	cout<<sum;
	plik.close();
	return 0;
}
