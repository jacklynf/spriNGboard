#include <iostream>
#include <string>

using namespace std;

////////////////////////////////
string returnFunc(int n){
  if ((n % 3 == 0) && (n % 5 == 0)){
    return "fizzbuzz";
  }
  else if (n % 3 == 0){
    return "fizz";
  }
  else if (n% 5 == 0){
    return "buzz";
  }
  else{
    std::string s = std::to_string(n);
    return s;
    }
}
////////////////////////////////

int main ()
{
  for (int n=1; n<=50; ++n)
  {
    ////////////////////////////////////////
      std::cout << returnFunc(n) << endl;
    ////////////////////////////////////////

  }
}

