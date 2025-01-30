// https://leetcode.com/problems/trapping-rain-water

int trap(int* height, int heightSize) {
    if (heightSize <= 2) return 0;  // Not enough bars to trap water

    int leftMax[heightSize], rightMax[heightSize];

    // Fill the leftMax array
    leftMax[0] = height[0];
    for (int i = 1; i < heightSize; i++) {
        if (height[i] > leftMax[i - 1]) {
            leftMax[i] = height[i];
        } else {
            leftMax[i] = leftMax[i - 1];
        }
    }

    // Fill the rightMax array
    rightMax[heightSize - 1] = height[heightSize - 1];
    for (int i = heightSize - 2; i >= 0; i--) {
        if (height[i] > rightMax[i + 1]) {
            rightMax[i] = height[i];
        } else {
            rightMax[i] = rightMax[i + 1];
        }
    }

    // Calculate the total trapped water
    int waterTrapped = 0;
    for (int i = 0; i < heightSize; i++) {
        int minHeight;
        if (leftMax[i] < rightMax[i]) {
            minHeight = leftMax[i];
        } else {
            minHeight = rightMax[i];
        }

        int waterAtI = minHeight - height[i];
        if (waterAtI > 0) {
            waterTrapped += waterAtI;
        }
    }

    return waterTrapped;
}
