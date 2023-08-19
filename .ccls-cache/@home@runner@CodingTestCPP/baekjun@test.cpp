#include <iostream>
#include <vector>
using namespace std;
int sorted[8];

void Merge(int arr[], int left, int right, int mid) {
  int i = left;    // left partial array index
  int j = mid + 1; // right partial array index

  int k = 0; // sorted  array index

  while (i <= mid && j <= right) {
    if (arr[i] <= arr[j])
      sorted[k++] = arr[i++];
    else
      sorted[k++] = arr[j++];
  }

  if (i > mid)
    while (j <= right)
      sorted[k++] = arr[j++];
  else
    while (i <= mid)
      sorted[k++] = arr[i++];
}

void Divide(int left, int right, int arr[]) {
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

  int data[8] = {3, 5, 7, 1, 2, 4, 8, 6};

  Divide(0, 7, data);

  for (int i = 0; i < 8; i++) {
    cout << sorted[i] << endl;
  }
}