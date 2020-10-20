#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.set_nome("Joao Snow");
  eng1.set_salarioHora(35);
  eng1.set_projetos(3); 
  std::cout << "Nome: " << eng1.get_nome() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "projetos: " << eng1.get_projetos() << std::endl;
  std::cout << std::endl;
  
  Engenheiro eng2;
  eng2.set_nome("Daniela Targaryen");
  eng2.set_salarioHora(30);
  eng2.set_projetos(1); 
  std::cout << "Nome: " << eng2.get_nome() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "projetos: " << eng2.get_projetos() << std::endl;  
  std::cout << std::endl;
  
  Engenheiro eng3;
  eng3.set_nome("Bruno Stark");
  eng3.set_salarioHora(30);
  eng3.set_projetos(2); 
  std::cout << "Nome: " << eng3.get_nome() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "projetos: " << eng3.get_projetos() << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor vend1;
  vend1.set_nome("Tonho Lannister");
  vend1.set_salarioHora(20);
  vend1.set_quotaMensalVendas(5000);  
  std::cout << "Nome: " << vend1.get_nome() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.set_nome("Jose Mormont");
  vend2.set_salarioHora(25);
  vend2.set_quotaMensalVendas(3000);  
  std::cout << "Nome: " << vend2.get_nome() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend3.set_nome("Sonia Stark");
  vend3.set_salarioHora(30);
  vend3.set_quotaMensalVendas(4000);  
  std::cout << "Nome: " << vend3.get_nome() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}