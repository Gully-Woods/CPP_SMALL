#include <iostream>

int main() {
  double pesos,reais,soles;
  double dollars;

  std::cout<<"Enter number of Columbian Pesos:";
  std::cin>>pesos;

  std::cout<<"Enter number of Brazilian Reais:";
  std::cin>>reais;

  std::cout<<"Enter number of Peruvian Soles:";
  std::cin>>soles;

  dollars=pesos*0.052+reais*0.18+soles*0.27;

  std::cout<<"US dollars:" << dollars <<"$\n";
}
