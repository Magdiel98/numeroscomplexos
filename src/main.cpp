#include <iostream> 
#include "complexo.h"
#include <iomanip>

using std::cout; 
using std::cin; 
using std::endl;
using std::fixed;
using std::setprecision; 

int main(int argc, char* argv[])
{
	Complexo numero1(atof(argv[1]), atof(argv[2])); /*Instancia do primeiro 
	numero complexo*/

	Complexo numero2(atof(argv[3]), atof(argv[4])); /*Instancia do 
	segundo numero complexo*/
	
	//Condicionais para operadores:   
	
		
	if(*argv[5] == '+')
	{
		Complexo resultado(numero1 + numero2);
		cout << resultado; 			 
	}
	else if(*argv[5] == '-')
	{
		Complexo resultado(numero1 - numero2);
		cout << resultado;  
	}
	else if(*argv[5] == '*')
	{
		Complexo resultado(numero1 * numero2);
		cout << resultado;  
	}
	else if(*argv[5] == '|')
	{
		float resultado1 = numero1|numero2;
		float resultado2 = numero2|numero1;   
		
		cout << setprecision(2) << fixed;
		cout << resultado1 << ";" << resultado2 << endl; 
	}	

	


	return 0; 
}

