#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> Arr(N);

  for (int i = 0; i < N; i++) {
    cin >> Arr[i];
  }

  for (int i = 1; i < N; i++) {
    for (int j = 1; j < N; j++) {
      if (Arr[j - 1] > Arr[j]) {
        int temp = Arr[j];
        Arr[j] = Arr[j - 1];
        Arr[j - 1] = temp;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    cout << Arr[i] << endl;
  }
}