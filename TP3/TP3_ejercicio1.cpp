#include<iostream>
using namespace std;

int main ()
{
	int suma,prom;
	suma=0;
	int numeros[20];
	for(int i=0; i<=19; i++)
	{
	
		cout<< " Ingrese 20 numeros para promediar";
		cin>>numeros[i];
		suma= suma+numeros[i];
	}
	prom=suma/20;
	cout<< prom;
	
	
	
}
