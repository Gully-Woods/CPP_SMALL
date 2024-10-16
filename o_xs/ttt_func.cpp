#include <iostream>
#include <vector>

void introduction(){
  std::cout<<"Welcome to tik tak toe\n";
  std::cout<<"This is the board\n";
  std::cout<<"   x:1 x:2 x:3\n";
  std::cout<<"y:1   |   |    \n";
  std::cout<<"   ------------\n";
  std::cout<<"y:2   |   |    \n";
  std::cout<<"   ------------\n";
  std::cout<<"y:3   |   |    \n";
}



void draw(std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3){
  std::cout<<"\n";
  std::cout<<"\n";
  std::cout<<"y:1 "<<vector1[0]<<" | "<<vector1[1]<<" | "<<vector1[2]<<"  \n";
  std::cout<<"   ------------\n";
  std::cout<<"y:2 "<<vector2[0]<<" | "<<vector2[1]<<" | "<<vector2[2]<<"  \n";
  std::cout<<"   ------------\n";
  std::cout<<"y:3 "<<vector3[0]<<" | "<<vector3[1]<<" | "<<vector3[2]<<"  \n";
}




bool is_winner(std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3){

  if (vector1[0] == vector2[0] && vector2[0] == vector3[0] && vector1[0] != ' '){
    return true;
  }
  else if (vector1[1] == vector2[1] && vector2[1] == vector3[1] && vector1[1] != ' '){
    return true;
  }
  else if (vector1[2] == vector2[2] && vector2[2] == vector3[2] && vector1[2] != ' '){
    return true;
  }
  else if (vector1[0] == vector2[1] && vector2[1] == vector3[2] && vector1[0] != ' '){
    return true;
  }
  else if (vector1[2] == vector2[1] && vector2[1] == vector3[0] && vector1[2] != ' '){
    return true;
  }
  else if (vector1[0] == vector1[1] && vector1[1] == vector1[2] && vector1[0] != ' '){
    return true;
  }
  else if (vector2[0] == vector2[1] && vector2[1] == vector2[2] && vector2[0] != ' '){
    return true;
  }
  else if (vector3[0] == vector3[1] && vector3[1] == vector3[2] && vector3[0] != ' '){
    return true;
  }
  else{
    return false;
  }
}


bool is_available(int x,int y,std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3){
  if (y==1 && vector1[x]==' '){
    return true;
  }
  else if(y==2 && vector2[x]==' '){
    return true;
  }
  else if (y==3 && vector3[x]==' '){
    return true;
  }
  else {
    return false; 
  }
}


bool is_valid(int x){
  if (x==1 || x==2 || x==3){
    return true;
  }
  else{
    return false;
  }
}

void set_position(int x, int y,char currentplayer,std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3){
  if (y==1){
    vector1[x]=currentplayer;
  }
  else if (y==2){
    vector2[x]=currentplayer;
  }
  else {
    vector3[x]=currentplayer;
  }
}


void take_turn(char currentplayer){
  std::cout<<currentplayer<<" YOUR TURN!\n";
  std::cout<<"select an x and a y position\n";
}

void switch_turn(char& currentplayer){
  currentplayer = (currentplayer == 'x') ? 'o' : 'x';
}


