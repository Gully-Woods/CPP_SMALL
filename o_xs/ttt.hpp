#include <vector>
void introduction();

void draw(std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3);

bool is_winner(std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3);

bool is_available(int x,int y,std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3);

bool is_valid(int x);

void set_position(int x, int y,char currentplayer,std::vector <char> vector1,std::vector <char> vector2,std::vector <char> vector3);

void switch_turn(char& currentplayer);

void take_turn(char currentplayer)
