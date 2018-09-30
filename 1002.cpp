#include <iostream>
#include <bits/stdc++.h> 
#define PI 3.14159

using namespace std;

int main()
{
	double radius, area;

	cin >> radius;
	area = PI*(radius*radius);
	
    cout << fixed << setprecision(4) <<"A="<< area <<endl;

	return 0;
}