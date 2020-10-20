#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	  int projetos;
	
  public:
    int get_projetos(){
      return projetos;
    }

    void set_projetos(int p){
      this->projetos = p;
    }
};

