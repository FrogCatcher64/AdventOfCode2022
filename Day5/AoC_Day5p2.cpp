#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string data[9] = {"HTZD", "QRWTGCS", "PBFQNRCH", "LCNFHZ", "GLFQS", "VPWZBRCS", "ZFJ", "DLVZRHQ", "BHGNFZLD"}, full, tempfrom, temp, toadd;
	int n = 1, move, from, to;
	ifstream plik;
	plik.open("AoC_D5.txt");
	
	for(int i=0;i<503;i++)
	{
		getline(plik, full);
		if(full.length()==18)
		{
			move = stoi(full.substr(5,1));
			from = stoi(full.substr(12,1));
			to = stoi(full.substr(17,1));
		}
		else  if (full.length()==19)
		{
			move = stoi(full.substr(5,2));
			from = stoi(full.substr(13,1));
			to = stoi(full.substr(18,1));
		}
		
			tempfrom = data[from-1];
			toadd = tempfrom.substr(tempfrom.size()-move, move);
			data[to-1]= data[to-1] + toadd;
			temp = data[from-1];
			for(int i=0;i<move;i++)
			{
				temp.pop_back();
			}
			data[from-1]=temp;
	}
	
	for(int i=0; i<9; i++)
	{
		temp=data[i];
		cout<<temp[temp.size()-1];
	}
	plik.close();
	return 0;
}
