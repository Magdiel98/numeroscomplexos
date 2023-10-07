#include <ostream> 

class Complexo
{
	private: 
		float real; //atributo do numero real  
		float imaginario;  //atributo do numero imaginario 
	public: 
		Complexo(float re, float im); // Construtor
		Complexo(); //Construtor padrão  
		~Complexo(); // Destrutor 
		
		//Sobrecarga de operadores: 
		Complexo operator+(Complexo &c); 
		Complexo operator-(Complexo &c);
		Complexo operator*(Complexo &c); 
		float operator|(Complexo &c); 		

		//Sobrecarga para impressao: 
		friend std::ostream& operator<<(std::ostream &o, Complexo const &c);
		  
		
}; 
