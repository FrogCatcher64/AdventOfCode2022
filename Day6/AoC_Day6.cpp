#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string text, four;
	char a,b,c,d;
	int sum=0;
	bool found;
	int first=0;
	ifstream plik;
	plik.open("AoC_D6.txt");
	
	getline(plik, text);
	for(int i = 0; i<text.length()-3; i++)
	{
		four = text.substr(i,4);
		a=four[0]; b=four[1]; c=four[2]; d=four[3];
		if(a!=b && b!=c && c!=d && a!=d && a!=c && b!=d)
		{
			sum+=i+4;
			break;
		}
	}
	cout<<sum;
	plik.close();
	return 0;
}
