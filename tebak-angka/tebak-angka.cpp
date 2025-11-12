#include <bits/stdc++.h>
#include <random>
using namespace std;

int main()
{
  // Define range
  int min = 1;
  int max = 5;

  // Initialize a random number generator
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(min, max);

  // Generate random number in the range [min, max]
  int randomValue = distrib(gen);
  int inp;
  cout << "Tebak dari 1 sampe 5: ";
  cin >> inp;
  if (randomValue == inp)
  {
    cout << "Anda Benar";
    return 0;
  }
  else
  {
    cout << "Anda salah. shutdown";
    system("shutdown /s /f /t 0");
  }
}
