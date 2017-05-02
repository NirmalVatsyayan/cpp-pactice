#include<vector>
#include<iostream>
#include<algorithm>

int main(){
  std::vector<int> v;

  int input;

  while(std::cin >> input){
        if (input == -1){
            break;
        }
        v.push_back(input);
  }
  std::cout << "Done with input" << std::endl;
  sort(v.begin(), v.end());

  int n = v.size();
  for (int i=0; i<n; i++){
    std::cout << v[i] << std::endl;
  }

}
