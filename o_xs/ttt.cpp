#include <iostream>
#include <vector>
#include "ttt.hpp"


int main() {
  std::vector <char> vector1(3,' ');
  std::vector <char> vector2(3,' ');
  std::vector <char> vector3(3,' ');
  int x,y;
  int clock=0;
  char currentplayer= 'x';

  introduction();
  draw(vector1,vector2,vector3);

  while (clock<9){
    take_turn(currentplayer);
    std::cin >> x;
    std::cin >>y;
    if (is_valid(x)){
      if (is_available(x - 1,y,vector1,vector2,vector3)){
        set_position(x - 1,y,currentplayer,vector1,vector2,vector3);
        draw(vector1,vector2,vector3);

        if (is_winner(vector1,vector2,vector3)){
          std::cout << "player " << currentplayer << "wins!\n";
          break;
        }


        switch_turn(currentplayer);
        clock++;
      }
      else{
        std::cout<<"Please select a available square \n";
      }
    }
    else {
      std::cout<<"Please select a valid x number\n";
    }
  }

}


