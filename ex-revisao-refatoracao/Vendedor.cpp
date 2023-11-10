#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  public:  
	double quotaTotalAnual() {
	  return getQuotaMensalVendas() * 12;
	}
	void printQuotaTotalAnual(){
		std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl; 
	}
};

