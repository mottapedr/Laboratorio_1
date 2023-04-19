# include <iostream>
using namespace std;

main ()
{
	string nombre;
	int edad; 
	
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Ingrese su edad: ";
	cin >> edad;
	if (edad < 1)
	{
		cout << nombre << ", tu categoria es: recien nacido";
	}
	else if (edad >= 1 && edad <= 5)
	{
		cout << nombre << ", tu categoria es: infante";	
	}
	else if (edad >= 6 && edad <= 12)
	{ 
		cout << nombre << ", tu categoria es: niño";
	}
	else if (edad > 12 && edad <= 18)
	{
		cout << nombre << ", tu categoria es: pre-adolescente";
	}
	else if (edad > 18 && edad <= 25)
	{
		cout << nombre << ", tu categoria es: adolescente";
	}
	else if (edad > 25 && edad <= 35)
	{
		cout << nombre << ", tu categoria es: adulto joven";
	}
	else if (edad > 35 && edad <= 50)
	{
		cout << nombre << ", tu categoria es: aulto";
	}
	else if (edad > 50)
	{ 
		cout << nombre << ", tu categoria es: adulto mayor"; 
	}
	else
	{
		cout << "Error";
	}
	}
