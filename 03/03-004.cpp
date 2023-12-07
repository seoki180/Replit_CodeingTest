#include <iostream>
using namespace std;

int main() {

  int N, M;
  int index;
  int x1, y1, x2, y2;

  cin >> N >> M; // NxN Metrics
  int S[N * N];

  for (index = 0; index < N * N; index++) {
    int temp;
    cin >> temp;

    if (index == 0 || index % N == 0) {
      S[index] = temp;
    } else {
      S[index] = S[index - 1] + temp;
    }
  }

  cout << "print\n";

  for (index = 0; index < M; index++) {
    cin >> x1 >> y1 >> x2 >> y2;
    x1 -= 1;
    y1 -= 1;
    x2 -= 1;
    y2 -= 1;

    int sum = 0;
    for (; y1 <= y2; y1++) {
      int temp = S[x2 * N + y1] - S[x1 * N + y1 - 1];
      sum += temp;

      cout << sum << "\n";
    }
    cout << "========="
         << "\n";
  }
}
