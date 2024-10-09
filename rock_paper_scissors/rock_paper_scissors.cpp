#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

  int user=0;


  srand(time(NULL));
  int computer = rand() % 3 +1;

  std::cout<<"ROCK PAPER SCISSORS!\n";
  std::cout<<"1=✊\n";
  std::cout<<"2=✋\n";
  std::cout<<"3=✌️\n";
  std::cout<<"SHOOT!\n";
  std::cin>>user;

  if (user==1  && computer==2 || user==2 && computer==3 || user==3 && computer==1){
    std::cout<<"YOU LOSE\n";
  }
  else {
    std::cout<<"YOU WIN\n";
  }
}
