#include <iostream>

// 10948938 ADAM PRUDENCE RASHIDA

using namespace std;

int main()

{
    int  i = 1, average = 0, sum = 0;
  while( i++ <= 10000 ) {
    if( i%2 == 0 ) {
      sum += i;
      average ++;
    }
  }

  cout << " The sum of all even numbers is "<< sum << endl;

  cout << " Average of the sum of all even numbers between 1 and 10,000 is "<< (sum / average ) << endl;

  return 0;
}
