class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          int left = 0;
    int right = arr.size() - k;

    while (left < right) {
        int mid = left + (right - left) / 2;
        // Correct comparison considering duplicates and the "a < b" tiebreaker:
        if (x - arr[mid] > arr[mid + k] - x) { 
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    std::vector<int> result;
    for (int i = left; i < left + k; i++) {
        result.push_back(arr[i]);
    }
    return result;
    }
};