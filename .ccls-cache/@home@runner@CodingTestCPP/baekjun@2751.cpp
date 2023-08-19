#include <iostream>
#include <vector>
using namespace std;

vector<int> sorted(8);

void Merge(vector<int> arr, int left, int right, int mid) {
  int i = left;    // left partial array index
  int j = mid + 1; // right partial array index

  int k = 0; // sorted  array index

  while (i <= mid && j <= right) { // partial array가 사라질떄 까지
    if (arr[i] < arr[j]) {
      sorted[k] = arr[i];
      i++;
    } else if (arr[i] > arr[j]) {
      sorted[k] = arr[j];
      j++;
    }
    k++;
  }

  if (i > mid) {
    while (j <= right) {
      sorted[k] = arr[j];
      j++;
      k++;
    }

  } else {
    while (i <= mid) {
      sorted[k] = arr[i];
      i++;
      k++;
    }
  }
}

void Divide(int left, int right, vector<int> arr) {
  if (left < right) {
    int mid = (left + right) / 2;

    Divide(left, mid, arr);
    Divide(mid + 1, right, arr);
    Merge(arr, left, right, mid);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;

  cin >> N;
  vector<int> Arr(N);

  for (int i = 0; i < N; i++) {
    cin >> Arr[i];
  }

  Divide(0, N - 1, Arr);

  for (int i = 0; i < N; i++) {
    cout << sorted[i] << endl;
  }
}