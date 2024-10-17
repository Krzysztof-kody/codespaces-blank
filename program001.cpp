#include <iostream>
#include <vector>
using namespace std;

vector <int> wektor; 

int main(){

    for(int i = 0 ; i< 10; i++){
        wektor.push_back(i);
    }

    for(int i = 0 ; i< 10; i++){
        cout << wektor[i];
    }

    return 0;
}