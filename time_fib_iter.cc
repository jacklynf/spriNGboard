#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
  //////////////////////////////////////////
  if (N == 0)
    return 0;

  int fib1 = 0, fib2 = 1, fib3;

  for (int i = 2; i <= N; i++){
    fib3 = fib1 + fib2;
    // update previous fib values:
    fib1 = fib2;
    fib2 = fib3;
  }
  return fib2;
  //////////////////////////////////////////

}

int main ()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

