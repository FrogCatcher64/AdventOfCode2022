#include <iostream>
#include <fstream>
using namespace std;

bool comp(string& input, int beg)
{
	for(int i=0; i<14; i++)
	{
		for(int j=1; j<(14-i); j++)
		{
			if(input[beg + i] == input[beg + j + i])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	ifstream plik("AoC_D6.txt");
	string text;
	int sum = 0;
	getline(plik, text);
	
	for(int i = 0; i < text.length() - 14; i++)
	{
		if(comp(text, i))
		{
			cout<< i + 14 <<endl;
			break;
		}
	}
	
	plik.close();
	return 0;
}

