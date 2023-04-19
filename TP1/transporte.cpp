# include <iostream>
using namespace std;

main()
{
	float km, bulto, total, total_IVA;
	
	cout << "Ingrese los kilómetros recorridos: ";
	cin >> km;
	cout << "Ingrese la cantidad de bultos: ";
	cin >> bulto;
	
	total = (km * 40) + (bulto * 20);
	total_IVA = total * 0.21;
	
	cout << "El total es de $" << total << "\n";
	cout << "El total con IVA es de $" << total_IVA;

}
