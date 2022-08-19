#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include<iomanip>

int D,Chijos,A;
bool listo;
float IP, Salario ;
double SALARIO_MINIMO,I;
using namespace std;
double Hijos;
int main()
{
	system("color 0C");
	cout <<"                         "<<endl;
	cout <<"----PAGO_DE_IMPUESTOS----"<<endl;
	cout <<"                         "<<endl;
	cout <<"Por favor ingrese su salario,gracias"<<endl;
	cin  >>Salario;
	if(Salario==false)
	{
		cout<<"Error el dato que ingreso es un texto"<<endl;
		system("PAUSE");
		exit (-1);
			
	}
	if(Salario<0){
		cout<<"El salario no puede ser negativo"<<endl;
		system("PAUSE");
		exit (-1);
	}
	if (Salario<200000){
		cout<<"Nadie tiene un salario por debajo de 200000"<<endl;
		system("PAUSE");
		exit (-1);
	}
	float(SALARIO_MINIMO)=float(Salario)/1000000;
	cout <<"Por favor ingrese 1 si tiene hijos y 0 si no tiene"<<endl;
	cin>>Chijos;
	
	if(Chijos==1)
	{
	cout <<"Por favor ingrese la cantidad de hijos que tiene:"<<endl;
	cin>>Hijos;
	if(Hijos<0)
	{
	cout <<"No se puede tener menos 0 hijos"<<endl;
	exit (-1);
	}
	if(Hijos>20)
	{
	cout <<"Estas seguro de que tines mas de 20 hijos?"<<endl;
	exit (-1);
	}	
	

	}
	if((SALARIO_MINIMO<=1)&&(Chijos>0))
	{
		cout <<"Como gana igual o menos que 1 salario minimo y"<<endl;
		cout <<"SI tiene hijos no debe de pagar ningun impuesto"<<endl;
		system("color 0D");
	}
	if((SALARIO_MINIMO==1)&&(Chijos==0))
	{
		I=Salario*0.03;
		cout <<"Como gana igual 1 salario minimo y"<<endl;
		cout <<"NO tiene hijos debe de pagar el 3% de impuesto"<<endl;
		cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos"<<endl;
		system("color 0D");
	}
	if((SALARIO_MINIMO<=2)&&(SALARIO_MINIMO>1)&&(Chijos>0))
	{
		I=Salario*0.08;
		cout <<"Como gana entre 1 y 2 salarios minimos y"<<endl;
		cout <<"SI tiene hijos debe de pagar el 8% de impuesto"<<endl;
		cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
		system("color 0D");
	}
	if((SALARIO_MINIMO<=3)&&(SALARIO_MINIMO>2)&&(Chijos>=1&&Chijos<=3))
	{
		I=Salario*0.18;
		cout <<"Como gana entre 2 y 3 salarios minimos y"<<endl;
		cout <<"SI tiene hijos debe de pagar el 18% de impuesto"<<endl;
		cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
		system("color 0D");
	}
	if((SALARIO_MINIMO<=4)&&(SALARIO_MINIMO>3))
	{
		I=Salario*0.28;
		cout <<"Como gana entre 3 y 4 salarios minimos"<<endl;
		cout <<"No interesa si tiene o no hijos por lo que paga un impuesto de 28%"<<endl;
		cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
		system("color 0D");
	}
	if((SALARIO_MINIMO<=5)&&(SALARIO_MINIMO>4))
	{
		float(I)=Salario*0.38;
		cout <<"Como gana entre 4 y 5 salarios minimos"<<endl;
		cout <<"No interesa si tiene o no hijos por lo que paga un impuesto de 28%"<<endl;
		cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
		system("color 0D");
	}
	if(SALARIO_MINIMO>=6)
	{

			do{
			IP=38+10;
			if((SALARIO_MINIMO<7)&&(SALARIO_MINIMO>=6))
			{
			I=Salario*((IP)/100);
			cout <<"Como gana entre 6 y 7 salarios minimos"<<endl;
			cout <<"No interesa si tiene o no hijos por lo que paga un impuesto de "<<IP<<"%"<<endl;
			cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
			listo==true;
			system("color 0D");
			}
			if((SALARIO_MINIMO<8)&&(SALARIO_MINIMO>=7))
			{
			I=Salario*((IP+20)/100);
			cout <<"Como gana entre 7 y 8 salarios minimos"<<endl;
			cout <<"No interesa si tiene o no hijos por lo que paga un impuesto de "<<IP+20<<"%"<<endl;
			cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
			listo==true;
			system("color 0D");
			}
			if((SALARIO_MINIMO<9)&&(SALARIO_MINIMO>=8))
			{
			I=Salario*((IP+30)/100);
			cout <<"Como gana entre 8 y 9 salarios minimos"<<endl;
			cout <<"No interesa si tiene o no hijos por lo que paga un impuesto de "<<IP+30<<"%"<<endl;
			cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
			listo==true;
			system("color 0D");
			}
			if((SALARIO_MINIMO<10)&&(SALARIO_MINIMO>=9))
			{
			I=Salario*((IP+40)/100);
			cout <<"Como gana entre 9 y 10 salarios minimos"<<endl;
			cout <<"No interesa si tiene o no hijos por lo que paga un impuesto de "<<IP+40<<"%"<<endl;
			cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
			listo==true;
			system("color 0D");
			}
			if((SALARIO_MINIMO<11)&&(SALARIO_MINIMO>=10))
			{
			I=Salario*((IP+50)/100);
			cout <<"Como gana entre 10 y 11 salarios minimos"<<endl;
			cout <<"No interesa si tiene o no hijos por lo que paga un impuesto de "<<IP+50<<"%"<<endl;
			cout <<"El cual equivaldria a: "<<fixed<<setprecision(2)<<I<<" Pesos colombianos" <<endl;
			listo==true;
			system("color 0D");
			}
			if((SALARIO_MINIMO<12)&&(SALARIO_MINIMO>=11))
			{
			cout <<"Como gana entre 11 y 12 salarios minimos"<<endl;
			cout <<"Llame a la Dian por inconveniesntes con su sueldo, muchas gracias por usar este programa"<<endl;
			listo==true;
			system("color 0D");
			}
			
			
		}
		while(listo==true);
	}
system("PAUSE");
return 0;

}



