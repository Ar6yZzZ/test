#include <iostream>
int main() {
    int n, l, r; std::cin >> n; int array[n][3], arr[n];
    for (int i = 1; i <= n; i++) { std::cin >> l >> array[i][1] >> array[i][2]; }
    for (int i = n; i >= 1; i--) {
        l = array[i][1] != 0 ? array[array[i][1]][0] + 1 : 0;
        r = array[i][2] != 0 ? array[array[i][2]][0] + 1 : 0;
        arr[i] = l - r; array[i][0] = l > r ? l : r;
    } for (int i = 1; i <= n; i++) std::cout << arr[i] << '\n';
}