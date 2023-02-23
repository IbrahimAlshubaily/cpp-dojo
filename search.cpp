#include <iostream>

int binary_search(int arr [], int target, int size){
    int lo = 0;
    int hi = size;
    int mid; 
    while (lo <= hi){
        mid = lo + ((hi - lo) / 2);
        if (arr[mid] == target){
            return mid;
        }

        if (arr[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    return -1;
}
int main() {

    int sample [5] = {1, 2, 3, 4, 5};
    std::cout << binary_search(sample, 2, 5) << "\n";
    std::cout << binary_search(sample, 7, 5) << "\n";
    return 1;
}
