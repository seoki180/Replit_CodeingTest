#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M, i, j;
  cin >> N >> M;
  int arr[N], S[N];

  for (int index = 0; index < N; index++) {
    cin >> arr[index];
    if (index == 0) {
      S[index] = arr[index];
    } else {
      S[index] = S[index - 1] + arr[index];
    }
  }

  for (int index = 0; index < M; index++) {
    cin >> i >> j;
    cout << S[j - 1] - S[i - 2]
         << "\n"; // i,j번쨰 숫자이기 때문에 각 배열에 -1 연산을 추가함
  }
}