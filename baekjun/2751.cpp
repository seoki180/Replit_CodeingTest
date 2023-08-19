#include <iostream>
#include <vector>
using namespace std;

vector<int> sorted(1000000);

void Merge(vector<int> arr, int left, int right, int mid) {
  int i = left;
  int j = mid + 1;
  int k = right;
}

void Divide(int left, int right, vector<int> arr) {
  int mid = (left + right) / 2;

  Divide(left, mid, arr);
  Divide(mid + 1, right, arr);

  Merge(arr, left, right, mid);
}

int main() {
  int N;
  cin >> N;

  vector<int> Arr(N);

  Divide(0, N - 1, Arr);
}