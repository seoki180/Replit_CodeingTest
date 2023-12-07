#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int p1 = 1,p2 = 1,sum = 1,count = 1;

    while(p1 != N){
        if(sum == N){
            count++;
            p2++;
            sum = sum - p1 + p2;
            p1++;
        }
        else if(sum > N && p1 < p2){
            sum = sum - p1;
            p1++;
        }
        else if(sum < N){
            p2++;
            sum += p2;
        }
        else if(sum > N){
            p2++;
              sum = sum - p1 + p2;
            p1++;

        }
    }
    cout << count << endl;
    

}