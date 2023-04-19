# include <iostream>
using namespace std;

main ()
{
string nombre;
int dias_de_trabajo, dias_trabajados, inasistencias;
float sueldo;

dias_de_trabajo = 20;

cout << "Ingrese su nombre: ";
cin >> nombre;
cout << "Ingrese la inasistencias en dias: ";
cin >> inasistencias;

dias_trabajados = dias_de_trabajo - inasistencias;

if (dias_trabajados == 20) 
{
	cout << "El empleado " << nombre << " cobrara: $20000";
}
else if (dias_trabajados < 20 && dias_trabajados >= 15)
{
	cout << "El empleado " << nombre << " cobrara: $15000";
}
else if (dias_trabajados < 15 && dias_trabajados >= 10)
{
	cout << "El empleado " << nombre << " cobrara: $10000";
}
else
{
	cout << "El empleado " << nombre << " cobrara: $0";
}
}
