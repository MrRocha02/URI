#include <bits/stdc++.h> 


using namespace std;

int main(int argc, char** argv)
{
	double valueA, valueB, valueC, delta, x1, x2;
	
	cin>>valueA>>valueB>>valueC;
	
	delta = (valueB*valueB) - (4*valueA*valueC);
	
	if(valueA <= 0.0 || delta <= 0.0)
	{
		cout<<"Impossivel calcular\n";
	}
	else
	{
		delta = pow(delta,(0.5));
		x1 = (-valueB + delta)/(2*valueA);
		x2 = (-valueB - delta)/(2*valueA);
		cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<"\n"<<"R2 = "<<x2<<"\n"; 
	}	
	return 0;
}