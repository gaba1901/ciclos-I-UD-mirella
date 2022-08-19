#include<iostream>
#include<ctype.h>
#include<cstdlib>
#include<stdio.h>
#include<iomanip>
#include<math.h>
#include<cmath> 
#include<iomanip>
float distanciaDosPuntos(int X1, int Y1, int X2, int Y2,int Z1,int Z2,int C1,int C2, int H);
using namespace std;
double C4, C7;
bool F;
int main()
{
	int X1, X2, Y1, Y2, Z1, Z2;
	system("color 0C");
	cout  <<"                                 ";
	cout  <<"-----MATEMATICO_LOCO------";
	cout  <<"                                 "<<endl;
	cout <<"\nPor favor ingrese el punto X1\n"<<endl;
	printf("X1: "); 
	scanf("%d", &X1);
	cout <<"\nPor favor ingrese el punto Y1\n"<<endl;
	printf("Y1: "); 
	scanf("%d", &Y1);
	cout <<"\nPor favor ingrese el punto X2\n"<<endl;
	printf("X2: "); 
	scanf("%d", &X2);
	cout <<"\nPor favor ingrese el punto Y2\n"<<endl;
	printf("Y2: "); 
	scanf("%d", &Y2);
	cout <<"\nPor favor ingrese el punto Z1\n"<<endl;
	printf("Z1: "); 
	scanf("%d", &Z1);
	cout <<"\nPor favor ingrese el punto Z2\n"<<endl;
	printf("Z2: "); 
	scanf("%d", &Z2);
	double AB=(X2-X1);
	double AC=(Y2-Y1);
	double AS=(Z1-X1);
	double AA=(Z2-Y1);
	double AS1=(Z1-(X2));
	double AQ=(Z2-(Y2));
	double A1X=pow(AB,2);
	double A2X=pow(AC,2);
	double A3Z=pow(AS,2);
	double A4Z=pow(AA,2);
	double A5Z=pow(AS1,2);
	double A6Z=pow(AQ,2);

	double C1=sqrt(A1X+A2X);
	double C2=sqrt(A3Z+A4Z);
	double C3=sqrt(A5Z+A6Z);
	
	int redondeado1 = round(C1);
	int redondeado2 = round(C2);
	int redondeado3 = round(C3);
	C4=pow(C1,2);
	double C5=pow(C2,2);
	double C6=pow(C3,2);
	C7=C5+C6;
	int redondeado = round(C4); 
    if(redondeado == C7)
	{
		cout<<"Es un trinagulo REDTANGULO"<<endl;
		cout<<"Su puntaje es 50 puntos "<<endl;
	}
	if(redondeado1==redondeado2==redondeado3)
	{
		cout<<"Es un trinagulo EQUILATERO"<<endl;
		cout<<"Su puntaje es 30 puntos "<<endl;
	}
	system("PAUSE");
	return 0;
}


	


	