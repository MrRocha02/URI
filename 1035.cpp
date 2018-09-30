#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int valueA, valueB, valueC, valueD;
	
	cin>>valueA>>valueB>>valueC>>valueD;
	
	if(valueB > valueC && valueD > valueA && valueC+valueD > valueA+valueB 
	   && valueC > 0 && valueD > 0 && valueA % 2 == 0)
	{
		cout<<"Valores aceitos\n";
	}
	else
	{
		cout<<"Valores nao aceitos\n";
	}	
	return 0;
}