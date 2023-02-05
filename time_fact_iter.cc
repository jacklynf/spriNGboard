#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int64_t fact(int N)
{
  //////////////////////////////////////////
  if (N == 0)
    return 1;

  int64_t prod = 1;
  for (int i = N; i > 0; i--){
    prod *= i;
  }
  return prod;

  //////////////////////////////////////////

  // Pay attention to the return type!
}

int main ()
{
  for (int N=0; N<25; ++N)
  {
    auto start = chrono::high_resolution_clock::now();

    int64_t f = fact(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "N!=" << setw(18) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

