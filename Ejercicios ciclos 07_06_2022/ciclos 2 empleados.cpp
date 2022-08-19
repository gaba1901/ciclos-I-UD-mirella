#include <iostream>
#include <ctype.h>
#include <cstdlib>
#define SIZE 20

using namespace std;
int salario;
int F;
int FF;
int N;
int N1;
char Nombre_trabajador[SIZE];
int empleados_salario;
int main()
{	cout <<"                                 ";
	cout <<"---NOMBRE Y SALARIO, EMPLEADOS---";
	cout <<"                                 "<<endl;
	cout <<"Por favor ingrese su salario,gracias"<<endl;
	cin  >>salario;
	if(salario==false)
	{
		cout<<"Error el dato que ingreso es un texto"<<endl;
		system("PAUSE");
		exit (-1);	
	}
	if(salario<0){
		cout<<"El salario no puede ser negativo"<<endl;
		system("PAUSE");
		exit (-1);
	}
	if (salario<200000){
		cout<<"Nadie tiene un salario por debajo de 200000"<<endl;
		system("PAUSE");
		exit (-1);
	}
	cout<<"Por favor indique cuantos empleados requiere"<<endl;
	cin>>N;
	if(N==false){
		cout<<"Error el dato que ingreso es un texto"<<endl;
		system("PAUSE");
		exit (-1);
	}
	if(N<0){
		cout<<"¿De casualidad no tienes trabajadores?"<<endl;
		system("PAUSE");
		exit (-1);
	}
	for(int i=0;i<=N1;i++){
	
		cout <<"Digite el nombre del trabajador"<<endl;
		cin >>Nombre_trabajador;
		N1=N-1;
		cout<<"El nombre del trabajador es:"<<Nombre_trabajador<<endl;
		cout<<"Con un salario de :"<<(empleados_salario=salario*3)<<endl;
		system("PAUSE");
		};
return 0;
		
}