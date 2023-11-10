#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
	private:
    int _projetos;

  public:
    void setProjetos(int projetos){
      _projetos = projetos;
    }
    void printProjetos(){
      std::cout << "Projetos: " << _projetos << std::endl;
    }
};

