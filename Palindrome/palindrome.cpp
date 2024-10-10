#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  int length= text.length();
  for (int i=0;i<length/2;i++){
    if (text[i] != text[length-i-1]){
      return false;
    }
  }
  return true;
}

int main() {
  
  std::string input;
  std::cout << "Type in string for palindrome inspection\n";
  std::cin >> input;
  is_palindrome(input);
  if (is_palindrome(input)) {
    std::cout << "The string is a palindrome.\n";
  } else {
    std::cout << "The string is not a palindrome.\n";
  }		  
	  
}
