#include <iostream>
#include "functions.h"
using namespace std;
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    solveNQueens(N);

    return 0;
}

