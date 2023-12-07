#include <iostream>
using namespace std;

int main() {
  int N, i;
  string Numbers;
  cin >> N >> Numbers;
  int sum = 0;
  for (i = 0; i < N; i++) {
    sum += Numbers[i] - 48;
  }
  cout << sum;
}