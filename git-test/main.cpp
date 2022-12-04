#include<iostream>

int main() {
    int n, a, j = 1; std::cin >> n; n++; int array[n + 1][3];
    for (int i = 1; i < n; i++) { std::cin >> array[i][0] >> array[i][1] >> array[i][2]; } std::cin >> a;
    while(true) {
        if (a > array[j][0]){ if (array[j][2] != 0) j = array[j][2];}
    }
    std::cout << j;
}