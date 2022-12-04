#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	string l1, p1, l2, p2;
	int sum1=0, sum2=0, a, b, c, d;
	ifstream plik;
	plik.open("AoC_D4.txt");
	
	while (!plik.eof())
	{
		getline(plik, l1, '-');
		getline(plik, p1, ',');
		getline(plik, l2, '-');
		getline(plik, p2);
		
		b = atoi(p1.c_str()); //13
		a = atoi(l1.c_str()); //8
		d = atoi(p2.c_str()); //65
		c = atoi(l2.c_str()); //10
		
		if(a>c && b<d)
		sum1+=1;
		else if(c>a && d<b) 
		sum1+=1;	
		else if(c==a || b==d) 
		sum1+=1;
		
			
		if(b>c && a<=c)
		sum2+=1;
		else if(c<a && a<=d) 
		sum2+=1;	
		else if(c==b || a==d) 
		sum2+=1;	
	}
	cout<<sum1<<" "<<sum2;
	plik.close();
	return 0;
}
