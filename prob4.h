#include <iostream>
#include <vector>

int countElementsWithSmallerNeighbors(const std::vector<int>& arr) {
    if (arr.size() < 3) {
        
    }

    int count = 0;

    for (int i = 1; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
           
            count++;
        }
    }

    return count;
}

int main() {
   
    std::vector<int> input = {5, 2, 8, 1, 4, 6};

    int result = countElementsWithSmallerNeighbors(input);

    std::cout << result << std::endl;

    return 0;
}