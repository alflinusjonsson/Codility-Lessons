// you can use includes, for example:
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {

    int unpaired = 0;
    for (int i = 0; i < A.size(); i++) {
        unpaired ^= A[i];
    }

    return unpaired;
}