#include <iostream>
using namespace std;

int S,P,count = 0;
string DNA_Password;

int DNA_Needed[4];
int DNA_Check[4];

void reset_Check();
void Add(char c);
void Remove(char c);
bool Adenosine();
bool Cytosine();
bool Guanine();
bool Tyiamine();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> S >> P >> DNA_Password;

    for(int i=0; i<4; i++){
        cin >> DNA_Needed[i];
    }

    for(int i= 0; i<P;i++){
        Add(DNA_Password[i]);
    }
    if(Adenosine() && Cytosine() && Guanine() && Tyiamine()){count++;}


    for(int i = P; i<S; i++){
        int j = i-P;
        Add(DNA_Password[i]);
        Remove(DNA_Password[j]);
        if(Adenosine() && Cytosine() && Guanine() && Tyiamine()){count++;}
    }

    cout << count << "\n";
}


bool Adenosine(){
    if(DNA_Needed[0] > DNA_Check[0]){
        return false;
    }
    return true;
}

bool Cytosine(){
    if(DNA_Needed[1] > DNA_Check[1]){
        return false;
    }
    return true;
}
bool Guanine(){
    if(DNA_Needed[2] > DNA_Check[2]){
        return false;
    }
    return true;
}
bool Tyiamine(){
    if(DNA_Needed[3] > DNA_Check[3]){
        return false;
    }
    return true;
}

void Add(char c){
    switch(c){
        case 'A' : DNA_Check[0]++; break;
        case 'C' : DNA_Check[1]++; break;
        case 'G' : DNA_Check[2]++; break;
        case 'T' : DNA_Check[3]++; break;   
    }
}


void Remove(char c){
    switch(c){
        case 'A' : DNA_Check[0]--; break;
        case 'C' : DNA_Check[1]--; break;
        case 'G' : DNA_Check[2]--; break;
        case 'T' : DNA_Check[3]--; break;   
    }
}