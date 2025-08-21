class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d % n;  // handle if d >= n
        if (d == 0) return;
        
        // Step 1: Reverse first d elements
        reverse(arr.begin(), arr.begin() + d);
        
        // Step 2: Reverse remaining n-d elements
        reverse(arr.begin() + d, arr.end());
        
        // Step 3: Reverse whole array
        reverse(arr.begin(), arr.end());
    }
};

/*
Input: arr[] = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
*/