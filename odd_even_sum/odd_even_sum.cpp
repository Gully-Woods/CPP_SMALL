# include <iostream>
# include <vector>
main() {
  std::vector<int> vector;
  int sum_even=0;
  int prod_odd=1;

  for (int i =0;i<6;i++){
    int input;

    std::cout<<"interger input:\n";
    std::cin>>input;
    vector.push_back(input);

    if (input%2==0){
      sum_even = sum_even + input;
    }
    else{
      prod_odd= prod_odd + input;
    }
  }
  std::cout<<"Sum of even:" << sum_even <<"\n";
  std::cout<<"Product of odd:" << prod_odd;
}
