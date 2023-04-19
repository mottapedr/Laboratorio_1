# include <iostream>
using namespace std;

main()
{
	float moneda_1 , moneda_2 , cent_50 , cent_25 , cent_10 , cent_5 , total;
	
	cout << "ingrese cuantas monedas de $1 tiene: ";
	cin >> moneda_1;
	cout << "ingrese cuantas monedas de $2 tiene: ";
	cin >> moneda_2;
	cout << "ingrese cuantas monedas de 50 centavos tiene: ";
	cin >> cent_50;
	cout << "ingrese cuantas monedas de 25 centavos tiene: ";
	cin >> cent_25;
	cout << "ingrese cuantas monedas de 10 centavos tiene: ";
	cin >> cent_10;
	cout << "ingrese cuantas monedas de 5 centavos tiene: ";
	cin >> cent_5;
	
	total = (moneda_1  * 1) + (moneda_2  * 2) + (cent_50 * 0.5) + (cent_25 * 0.25) + (cent_10 * 0.1) + (cent_5 * 0.05);
	cout << "Total disponible de la sucursal es de $" << total;
}

