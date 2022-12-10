#include <iostream>
#include <fstream>
using namespace std;

int sum(int cycle)
{
	int sum=1, cyc=1;
	string task, amount;
	ifstream plik("AoC_D10.txt");
	while(cyc<cycle-1)
	{
		getline(plik, task);
		if(task=="noop")
			cyc+=1;
		else
		{
			amount=task.substr(5,task.length());
			sum+=stoi(amount);
			cyc+=2;
		}
	}
	plik.close();
	sum=sum*cycle;
	return sum;
}

int main()
{
	int result=0;
	result+=sum(20);
	result+=sum(60);
	result+=sum(100);
	result+=sum(140);
	result+=sum(180);
	result+=sum(220);
	cout<<result;
	return 0;
}
