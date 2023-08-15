#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

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

  cout << "print";
  // for (index = 0; index < N * N; index++) {
  //   cout << S[index] << " ";
  // }

  for (index = 0; index < M; index++) {
    int arr[4];
    for (int i = 0; i < 4; i++) {
      cin >> arr[i];
    }
    cout << arr[3];

    x1 = arr[0] - 1;
    y1 = arr[1] - 1;
    x2 = arr[2] - 1;
    y2 = arr[3] - 1;

    int sum = 0;
    for (int i = 0; i < y2 - y1 + 1; i++) {
      int temp = S[x2] - S[x1 - 1];
      cout << temp;
    }
  }
}
