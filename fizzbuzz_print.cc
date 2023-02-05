#include <iostream>

using namespace std;
void printFunc(int);

////////////////////////////////
void printFunc(int N){
  if ((N%3==0) && (N%5==0))
    std::cout << "fizzbuzz" << endl;
  else if (N%3 == 0)
    std::cout << "fizz" << endl;
  else if (N % 5 == 0)
    std::cout << "buzz" << endl;
  else
    std::cout << N << endl;
}
////////////////////////////////

int main ()
{
  for (int n=1; n<=50; ++n)
  {
    /////////////////////////////////////////////
    printFunc(n);
    /////////////////////////////////////////////

  }
}

