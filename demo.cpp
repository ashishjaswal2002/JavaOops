#include <iostream>

int main() {
    int arr[][2] = {{2, 3}, {1, 3}, {5, 4}, {6, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
      