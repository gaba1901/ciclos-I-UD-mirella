
#include <iostream>
#include <sstream>
#include <limits>
#include <vector>
#include <cstdlib>
using namespace std;
int N, i, Sobrante;
int x;
bool primo= true;
int main()
	{
	cout << "                           " << endl;
	cout << "----DIVISORES DE NUMERO----" << endl;
	cout << "                           " << endl;
	cout << "Dime un numero: ";
	cin >> N;	
	cout << "Sus divisores son: "<< endl;;
	for(i=2;i<N;i++)
	{
		if(N%i==0)primo=false;
		{
		
			for (i=1; i<=N ; i=i+1)
			{
			Sobrante = N%i;
			if (Sobrante==0)
				{ 
				cout << i << " "<< endl;
				}
			
			}
		}
			if(primo==true)
			{
				cout << "Es un numero primo"<< endl;;
			}
			system("PAUSE");
	cout << endl;
	}
	
	
	return 0;
	system("PAUSE");
	}  