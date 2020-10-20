#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {
  
  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalarioHora(35);
  eng1.setProjetos(3); 
  eng1.setHorasTrabalhadas(9.5);
  eng1.printNome();
  eng1.printSalarioMes();
  eng1.printProjetos();
  std::cout << std::endl;
  
  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setProjetos(1);
  eng2.setHorasTrabalhadas(8);
  eng2.printNome();
  eng2.printSalarioMes();
  eng2.printProjetos();
  std::cout << std::endl;
  
  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalarioHora(30);
  eng3.setProjetos(2);
  eng3.setHorasTrabalhadas(8);
  eng3.printNome();
  eng3.printSalarioMes();
  eng3.printProjetos();
  std::cout << std::endl;
  
  
  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalarioHora(20);
  vend1.setQuotaMensalVendas(5000);
  vend1.setHorasTrabalhadas(6);
  vend1.printNome();
  vend1.printSalarioMes();
  vend1.printQuotaTotalAnual();
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalarioHora(25);
  vend2.setQuotaMensalVendas(3000);
  vend2.setHorasTrabalhadas(8);
  vend2.printNome();
  vend2.printSalarioMes();
  vend2.printQuotaTotalAnual();
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  vend3.setHorasTrabalhadas(8);
  vend3.printNome();
  vend3.printSalarioMes();
  vend3.printQuotaTotalAnual();
  
  return 0;	
}