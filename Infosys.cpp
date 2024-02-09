#include <iostream>

using namespace std;

// Function to find the maximum index that can be reached
// given the number of steps and the bad index
int maxIndex(int Steps, int badIndex) {
    int maxIndex = 0;
    
    // Calculate the maximum possible index by adding the number of steps
    for (int i = 1; i <= Steps; i++) {
        maxIndex += i;
    }
    
    int currentIndex = maxIndex;
    int step = Steps;
    
    while (true) {
        while (currentIndex > 0 && Steps > 0) {
            currentIndex -= Steps;
            
            // Check if the current index is equal to the bad index
            if (currentIndex == badIndex) {
                currentIndex += Steps;
            }
            
            Steps--;
        }
        
        if (currentIndex <= 0) {
            // Return the maximum index
            return maxIndex;
        }
        else {
            Steps = step;
            currentIndex = maxIndex - 1;
            maxIndex--;
            
            if (currentIndex == badIndex) {
                currentIndex = maxIndex - 1;
                maxIndex--;
            }
        }
    }
}

int main() {
    int steps, badIndex;
    
    // Read the number of steps and the bad index
    cin >> steps >> badIndex;
    
    // Call maxIndex function and print the result
    cout << maxIndex(steps, badIndex) << endl;
    
    return 0;
}
