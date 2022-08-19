#include<iostream>
#include<ctype.h>
#include<cstdlib>
#include<stdio.h>
#include<iomanip>
#include<math.h>
#include<cmath> 
#include<iomanip>
#include<locale.h>
double Anos,DIAS_FALTANTES, RESULTADO, RESULTADO2,AB, AP;
int Dias=365;
float Edad, AN;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	system("color 0D");
	cout  <<"                                 ";
	cout  <<"-----JUEGO_DE_FAMILIA----";
	cout  <<"                                 "<<endl;
	cout <<"\nPor favor ingrese su edad \n"<<endl;
	cin  >>Anos;
	if(Anos==false)
    {
     		std::cout<<"ERROR el dato ingresado es un texto"<<endl;
     			exit (-1);
	}
	if(Anos<0)
    {
     		std::cout<<"ERROR no se puede tener una edad negativa"<<endl;
     			exit (-1);
	}
	if(Anos>=120)
    {
     		std::cout<<"ERROR no es posible naturalmente que tenga esta edad"<<endl;
     			exit (-1);
	}
	setlocale(LC_CTYPE,"Spanish");
	cout <<"\nPor favor ingrese el numero de dias faltantes para acabar el ao\n"<<endl;
	cin>>DIAS_FALTANTES;
	if(DIAS_FALTANTES<0)
	{
		cout <<"No pueden exisitir dias en negativo"<<endl;
		exit (-1);
	}
	if(DIAS_FALTANTES<0)
	{
		cout <<"No pueden exisitir dias en negativo"<<endl;
		exit (-1);
	}
	RESULTADO=Dias*Anos;
	RESULTADO2=RESULTADO-DIAS_FALTANTES;
	Edad=RESULTADO2/Dias;
	cout <<"Ya cumplio años?"<<endl;
	printf("Si digite 1 : "); 
	printf("NO digite 2 : "); 
	cin>>AP;
	if(Anos==false)
    {
     		std::cout<<"ERROR el dato ingresado es un texto"<<endl;
     			exit (-1);
	}
	if(AP==2)
	{
		double(Edad1)=Edad+1;
		int(redondeado)=trunc(Edad1);
		int(AN)=2022-Edad1;
		double(decimal)=Edad1-redondeado;
		double(A)=decimal*365;
		
		if(AN%4==0)
		{
			
			std::cout<<"En general el dia que nacio fue:"<<A<<endl;
		}
		if(AN%4!=0)
		{
			int(A1)=A+1;
			std::cout<<"En general el dia que nacio fue:"<<A1<<endl;
		}
	}
	if(AP==1)
	{
		
		int(redondeado)=trunc(Edad);
		int(AN)=2022-Edad;
		double(decimal)=Edad-redondeado;
		double(A)=decimal*365;
		if(AN%4==0)
		{
			
			std::cout<<"En general el dia que nacio fue:"<<A<<endl;
		}
		if(AN%4!=0)
		{
			int(A1)=A+1;
			std::cout<<"En general el dia que nacio fue:"<<A1<<endl;
		}
		
		
	}
	if(AP>2)
	{
		std::cout<<"No cumple con los requerimientos"<<endl;
		exit (-1);
	}
	
	system("PAUSE");
	return 0;
	}
	
	
	
	