#include <iostream>
using namespace std;

int main() {
  int N, M = 0;
  cin >> N;
  float arr[N];

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
    if (arr[i] > M)
      M = arr[i];
  }

  float sum = 0;
  for (int i = 0; i < N; i++) {
    arr[i] = (arr[i] / M) * 100;
    sum += arr[i];
  }
  cout << sum / N;
}