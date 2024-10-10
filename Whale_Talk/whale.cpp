# include <iostream>
# include <vector>
# include <string>

int main() {
  std::string input;
  std::cout<<"input english for translation\n";
  std::cin>>input;
  std::vector<char> vowles{'a','e','i','o','u'};
  std::vector<char> result;

  for (int i=0; i< input.size(); i++){
    for (int j=0; j< vowles.size(); j++){
      if (input[i] == vowles[j]){
        result.push_back(input[i]);
      if (input[i] == 'e' || input[i] == 'u'){
        result.push_back(input[i]);
      }
      }
    }
  }
  for (int k=0; k<result.size();k++){
    std::cout << result[k];
  }
}
