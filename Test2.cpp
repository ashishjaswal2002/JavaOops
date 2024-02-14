#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> doubled;

    for(int num: nums) {
        num *= 2; // Modify the original elements in nums
        doubled.push_back(num);
    }

    cout << "Original vector: ";
    for(int num: nums) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Doubled vector: ";
    for(int num: doubled) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
