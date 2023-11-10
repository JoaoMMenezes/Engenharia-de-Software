#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  private:
    double _salarioHora;  
    double _quotaMensalVendas;  
    std::string _nome; 
    double _horasTrabalhadas;

  public:
    void setSalarioHora(double salarioHora){
      _salarioHora = salarioHora;
    }
    void setQuotaMensalVendas(double quotaMensalVendas){
      _quotaMensalVendas = quotaMensalVendas;
    }
    void setNome(std::string nome){
      _nome = nome;
    }
    void setHorasTrabalhadas(double horasTrabalhadas){
      _horasTrabalhadas = horasTrabalhadas;
    }

    double getSalarioHora(){
      return _salarioHora;
    }
    double getQuotaMensalVendas(){
      return _quotaMensalVendas;
    }
    double getHorasTrabalhadas(){
      return _horasTrabalhadas;
    }


    double pagamentoMes(double horasTrabalhadas) {
 
      double horasPagas = horasTrabalhadas;
      double jornadaDeTrabalho = 8;
	  
	    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > jornadaDeTrabalho) {
        double horasExtra = horasTrabalhadas - jornadaDeTrabalho;
        horasPagas += horasExtra / 2;
      }
	  return horasPagas * _salarioHora;
    }
    
    void printSalarioMes(){
      std::cout << "Salario Mes: " << pagamentoMes(getHorasTrabalhadas()) << std::endl;
    }
    void printNome(){
      std::cout << "Nome: " << _nome << std::endl;
    }
};

#endif