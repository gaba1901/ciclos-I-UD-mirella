#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include <iomanip>
#include<conio.h>
#define SIZE 20
#include <string.h>
using namespace std;
bool listo;
    int res;
	double tt;
	int tr;
	int tg;
	char nom [50];
    char nomg[50];
    int h,m,s;
int main ()
{
	system("color 0C");
tr=0;
	
	setlocale(LC_ALL, "spanish");
	cout<< "Si hay empleado ingrese '1' sino otro valor"<< endl;
      cin>> res;
		while(res==1){
			cout<<"Ingrese su nombre y tiempo en segundos en que realizó la tarea"<<endl;
		    cin>>nom >>tt; 
           
		  if (tt > 0 and tt< 172000){
		  if (tt < tr){ tr=tt; 
		  } 
		  } else {cout <<"Este valor no puede participar"<< endl;
		  }
		  cout<<"Si hay otro empleado, digite 1 sino otro valor"<<endl;
		  cin>>res;
         }
		  cout<<"El tiempo record es de "<<tr<<endl;
		  h=tr/3600;
         tr=tr%3600;
         m=tr/60;
         s=tr%60;
         
         cout <<h<<" Horas"<<endl;
         cout <<m<<" Minutos"<<endl;
         cout <<s<<" Segundos"<<endl;
        system("PAUSE");
         return 0;
     }
           
