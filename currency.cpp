#include <iostream>

int main() {
  float pesos;
  float reais;
  float soles;
  float dollars;
  
  std::cout<<"Enter number of Colombian Pesos \n";
  std::cin>>pesos;
  
  std::cout<<"Enter number of Brazilian Reais: \n";
  std::cin>>reais;
  
  std::cout<<"Enter number of Peruvian Soles: \n";
  std::cin>>soles;
  
  dollars=(0.042*pesos)+(0.20*reais)+(0.30*soles);
  
  std::cout<<"US Dollars="<<dollars<<"$\n";
  }