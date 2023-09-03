#include <iostream>
#include <vector>
using namespace std;

vector<long> Narr(2000);
void sort(int N){
    for(int i =0; i<N; i++){
        for(int j = 1; j<N-i;j++){
            if(Narr[j] < Narr[j-1]){
                int temp = Narr[j-1];
                Narr[j-1] = Narr[j];
                Narr[j] = temp;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,Good = 0;

    cin >> N;

    for(int i =0; i<N; i++){
        cin >> Narr[i];
    }

    sort(N);


    for(int i = 0; i<N; i++){
        int p1 = 0, p2 = N-1;
        long k = Narr[i];

        while(p1 < p2){    
            long sum = Narr[p1]+Narr[p2];

            if(sum == k){

                //exception case eg) 0 3 3
                if(p1 != i && p2 != i){
                    Good++;
                    break;
                }
                if(p1 == i) {
                    p1++;
                }
                else if(p2 == i){
                    p2--;
                }
            }
            else if(sum < k){
                p1++;
            }
            else if(sum > k){
                p2--;
            }
        }
    }

    cout << Good << endl;

}