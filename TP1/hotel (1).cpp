# include <iostream>
using namespace std;

main()
{
	int cant_de_dias, cant_personas;
	float precio_neto,  precio_iva;
	int precio_por_persona = 5000;
	float precio_frigobar;
		
	cout << "ingrese los dias de estadia: ";
	cin >> cant_de_dias;
	cout << "ingrese la cantidad de personas: ";
	cin >> cant_personas;
	
	precio_neto = cant_de_dias * (cant_personas * precio_por_persona);
	precio_iva = (precio_neto * 0.21) + precio_neto;
	precio_frigobar= (precio_neto * 0.3) + precio_neto;			//ver
	cout << "el precio neto es: " << precio_neto << "\n";
	cout << "el precio con iva es: " << precio_iva << "\n";
	cout << "el precio total mas frigobar es de: "<< precio_frigobar << " sin iva";	
}
