# include <iostream>
using namespace std;

main ()
{
	int entrada_50 , entrada_25;
	float recaudacion , gastos_50 , gastos_25, ganancia;
	
	cout << "Ingrese la cantidad de entradas vendidas de un valor de $50: ";
	cin >> entrada_50;
	cout << "Ingrese la cantidad de entradas vendidas de $25: ";
	cin >> entrada_25;
	
	recaudacion = (entrada_50 * 50)+ (entrada_25 * 25);
	gastos_50 = (entrada_50 * 50) * 0.24;
	gastos_25 = (entrada_25 * 25) * 0.36;
	ganancia = (recaudacion) - (gastos_50 + entrada_25);
	
	cout << "La recaudacion es de $" << recaudacion << "\n",
	cout << "Los gastos por entrada son: por la entrada de 50: $" << gastos_50 << " y las de 25:$" << gastos_25 << "\n";
	cout << "La ganacia es de $" << ganancia;
}
