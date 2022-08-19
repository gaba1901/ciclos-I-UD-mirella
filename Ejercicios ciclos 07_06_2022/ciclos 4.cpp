#include <iostream>
#include <sstream>
#include <limits>
#include <vector>
#include <cstdlib>

int INICIAL, FINAL, i, N, A;
using namespace std;
int main  ()
{
	system("color 0B");
    std::cout<< "                                         ";
    std::cout<< "----EJERCICIO_MULTIPLOS_DE_N-------------";
    std::cout<< "                                         ";
    cout<< "Buenas tardes, este es un programa para mostrar los multiplos de un numero"<<endl;
    cout<<"Digite el numero:"<<endl;
    cin>> N;
	if(N==false)
    {
     		std::cout<<"ERROR el dato ingresado es un texto"<<endl;
	}
	else{
		cout<< "Dijite el primer numero del rango este debe ser entero "<<endl;
    cin>> INICIAL;
    if(INICIAL==false)
    {
     		std::cout<<"ERROR el dato ingresado es un texto"<<endl;
	}
	else{
		 std::cout<< "Dijite el ultimo numero del rango este debe ser entero "<<endl;
    std::cin >> FINAL;
    if(INICIAL>FINAL)
    {
    	std::cout<<"ERROR el final del rango no puede ser menor al inicial"<<endl;
	}


    if (FINAL==false)
    {
    	std::cout<<"ERROR el dato ingresado es un texto";
	}
	else
	{ 
		for (A=INICIAL; A<=FINAL ; A++)
    {
        if (((A %N==0)& (A!=0) ))
        {
            
            if ((A>N)&(A!=INICIAL)&(A!=FINAL))
            {
                cout<<A<<" Es multiplo de: "<<N<<"\n"<<endl;
            
            }
		
	   }
	   
		

	}
	
   
}
system("PAUSE");
return 0;
}
}
}

    