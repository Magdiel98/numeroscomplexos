#include <iostream>
#include "complexo.h"
#include <ostream>
#include <cmath>

using std::cout; 
using std::endl; 


Complexo::Complexo(float re, float im)
{
	real = re; 
	imaginario = im;  
}

Complexo::Complexo()
{
	real = 0; 
	imaginario = 0; 

}


Complexo::~Complexo()
{


}


Complexo Complexo::operator+(Complexo &c)
{
	int re = real + c.real; 
	int im = imaginario + c.imaginario; 
	
	return Complexo(re,im); 	
}

Complexo Complexo::operator-(Complexo &c)
{
	int re = real - c.real; 
	int im = imaginario - c.imaginario; 
	
	return Complexo(re,im);
}

Complexo Complexo::operator*(Complexo &c)
{
	int re = (real * c.real) + (-(imaginario*c.imaginario));
	int im = (real * c.imaginario) + (c.real * imaginario); 

	return Complexo(re,im); 
}

float Complexo::operator|(Complexo &c)
{
	float re = sqrt(pow(real,2) + pow(imaginario,2)); 

	return re;  

}



std::ostream& operator<<(std::ostream &o, Complexo const &c)
{

		o << c.real; 
		if(c.imaginario > 0)
			o << "+" << c.imaginario << "i" << endl;
		else if(c.imaginario < 0)
			o << c.imaginario << "i" << endl; 

	return o; 
}
