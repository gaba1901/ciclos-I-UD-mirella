#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include <iomanip>
#include<conio.h>
#define SIZE 20
#include <string.h>
using namespace std;
int res;
int d1;
int d2;
int ptos;


int main ()
{
	system("color 0C");
	setlocale(LC_ALL, "spanish");
	cout <<"Si hay jugador precione 1 sino otro valor"<<endl;
	cin >>res;
	while(res==1){
		cout<<"Ingrese el valor de el dado 1 y el dado 2"<< endl;
		cin>> d1>>d2;
		if (d1 > 0 and d1 < 7 and d2 >0 and d2<7){
		
		if (d1==6 and d2==6){ptos=6;
		}
		if (d1==5 and d2==5){ptos=5;
		}
		if (d1==4 and d2==4){ptos=4;
		}
		if (d1==3 and d2==3){ptos=3;
		}
		if (d1==2 and d2==2){ptos=2;
		}
		if (d1==1 and d2==1){ptos=1;
	}
		else ptos=0;
		
	}
	else cout <<"El valor es incorrecto"<< endl;
		cout<<"La puntuación es "<<ptos;
		cout<<" Si hay otro jugador, presione 1 sino otro valor"<< endl;
		cin>>res;
		system("PAUSE");
	return 0;
		}
	
	
	
	
	
	
	
	
	
	
	
}
