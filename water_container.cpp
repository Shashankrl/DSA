#include <vector>
#include <iostream>
using namespace std;

int maxWater(vector<int> &arr) {
  	int left = 0, right = arr.size() - 1;
    int res = 0;
    while(left < right) {
        
    
        int water = min(arr[left], arr[right]) * (right - left);
        res = max(res, water);
      
        if(arr[left] < arr[right])
            left += 1;
        else
            right -= 1;
    }
  
    return res;
}

int main() {
    vector<int> arr = {2, 1, 8, 6, 4, 6, 5, 5};
    cout << maxWater(arr);
}