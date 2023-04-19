# include <iostream>
using namespace std;

main ()
{
	float num_1, num_2 ,num_3;
	
	cout << "Ingrese el primer numero: ";
	cin >> num_1;
	cout << "Ingrese el segundo: ";
	cin >> num_2;
	cout << "Ingrese el ultimo numero: ";
	cin >> num_3;
	
	if (num_1 == num_2 == num_3)
	{
		cout << "Los numeros son iguales";
	}
	else if (num_1 > num_2 && num_1 > num_3)
	{
		if (num_2 > num_3)
		 {
		 	cout << "El mayor numero es: " << num_1 << " y el menor es: " << num_3; 
		 } 
		else if (num_2 < num_3)
		{
			cout << "El mayor numero es: " << num_1 << " y el menor es: " << num_2; 
		}
		else
		{
			cout << "El mayor numero es: " << num_1 << ", no hay menor"; 
		}
	}
	else if ( num_2 > num_1 && num_2 > num_3)
	{
		if (num_1 > num_3)
		 {
		 	cout << "El mayor numero es: " << num_2 << " y el menor es: " << num_3; 
		 } 
		else if (num_1 < num_3) 
		{
			cout << "El mayor numero es: " << num_2 << " y el menor es: " << num_1; 
		}
		else
		{
			cout << "El mayor numero es: " << num_2 << ", no hay menor"; 
		}
	}
	else if ( num_3 > num_1 && num_3 > num_2)
	{
		if (num_2 > num_1)
		 {
		 	cout << "El mayor numero es: " << num_3 << " y el menor es: " << num_1; 
		 } 
		else if (num_2 < num_1)
		{
			cout << "El mayor numero es: " << num_3 << " y el menor es: " << num_2; 
		}
		else
		{
			cout << "El mayor numero es: " << num_3 << ", no hay menor"; 
		}
	}
}
