#include <iostream>
#include <vector>
using namespace std;



vector<int> Material(15000);

void sort(int N){
    for(int i =0; i<N; i++){
        for(int j = 1; j<N-i; j++){
            if(Material[j-1] > Material[j]){
                int temp = Material[j];
                Material[j] = Material[j-1];
                Material[j-1] = temp;
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M,count = 0;
    cin >> N >> M;


    for(int i= 0; i<N; i++){
        cin >> Material[i];
    }

    sort(N);

    int p1 = 0, p2 = N-1;

    while(p1 < p2){
        int sum = Material[p1] + Material[p2];

        if(sum == M){
            count++;
            p1++;
            p2--;
        }
        else if(sum < M){1
            p1++;
        }
        else if(sum > M){
            p2--;
        }


    }

    // for(int i =0; i<N-1; i++){
    //     for(int j = i+1; j<N; j++){
    //         int sum = Material[i]+Material[j];
    //         if(sum == M){
    //             count ++;
    //         }
    //     }
    // }


    cout << count << endl;
}