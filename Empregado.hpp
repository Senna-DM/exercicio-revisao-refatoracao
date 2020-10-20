#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    double salarioHora;  
    double quotaMensalVendas;
    std::string nome;

  public:

    double get_salarioHora(){
      return salarioHora;
    }

    double get_quotaMensalVendas(){
      return quotaMensalVendas;
    }

    std::string get_nome(){
      return nome;
    }

    void set_salarioHora(double salario){
      this->salarioHora = salario;
    }

    void set_quotaMensalVendas(double quota){
      this->quotaMensalVendas = quota;
    }

    void set_nome(std::string n){
      this->nome = n;
    }

    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif