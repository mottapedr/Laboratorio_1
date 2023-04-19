# include <iostream>
using namespace std;

main ()
{
	float multa, total, multa_con_recargo; 
	int ano, cuotas;
	cout << "Ingrese de cuanto es la multa: ";
	cin >> multa;
	cout << "Ingrese el año de emision de la multa: ";
	cin >> ano;
	cout << "En cuantas cuota o quiere pagar? (1, 3, 6)";
	cin >> cuotas; 
	if (ano == 2023)
	{
		if (cuotas == 1)
		{
			cout << "El preio de la multa es de: " << multa;
		}
		else if (cuotas == 3)
		{ 
			total = (multa * 0.15) + multa; 
			cout << "El precio de la multa es: " << total;
		}
		else if (cuotas == 6)
		{
			total = (multa * 0.3) * multa;
			cout << "El precio de la multa es de: " << total; 
		}
	}
	else if (ano < 2023) 
	{
		multa_con_recargo = multa + (45 * (2023 - ano)); 
		
		if (cuotas == 1)
		{
			cout << "El preio de la multa es de: " << multa_con_recargo;
		}
		else if (cuotas == 3)
		{ 
			total = (multa_con_recargo * 0.15) + multa_con_recargo; 
			cout << "El precio de la multa es: " << total;
		}
		else if (cuotas == 6)
		{
			total = (multa_con_recargo * 0.3) * multa_con_recargo;
			cout << "El precio de la multa es de: " << total; 
		}
	}
}
