#include <iostream>
#include <vector>

void moveZerosToEnd(std::vector<int>& nums) {
    int n = nums.size();
    int zeroCount = 0;

    // Count the number of zeros
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            zeroCount++;
        }
    }

    int nonZeroIndex = 0;

    // Move non-zero elements to the front of the array
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    // Fill the remaining positions with zeros
    while (zeroCount > 0) {
        nums[nonZeroIndex++] = 0;
        zeroCount--;
    }
}

// Function to print the array
void printArray(const std::vector<int>& nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    std::cout << "Input: ";
    printArray(nums);

    moveZerosToEnd(nums);

    std::cout << "Output: ";
    printArray(nums);

    return 0;
}
