#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() > 0){
        for(int i = 0; i < K; i++){
        rotate(A.rbegin(), A.rbegin() + 1, A.rend());
        }
    }
    return A;
}