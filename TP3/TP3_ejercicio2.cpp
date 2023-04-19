#include<iostream>
using namespace std;

int main ()
{
	
	char letras[20];
	char letrabuscada;
	int cont;
	

	for(int i=0; i<=19; i++)
	{
	
		cout<< "Ingrese 20 letras EN MAYUSCULA ";
		cin>>letras[i];
		if(letras[i]);
	}
	
	for(int x=0; x<=19; x++)
	{
	
		letrabuscada=letras[x];
	
		cont=0;
	
		for(int x=0; x<=19; x++)
		{
	
			if(letras[x]==letrabuscada)
			{
			cont=cont+1;
            }
		}	
	cout<<"la letra "<< letrabuscada << " se repite "<< cont;
	}
}
