#include <iostream>
using namespace std;


int main() {  
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            printf(" ");
        }
        for (int j = N - i -1; j < N; ++j) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}