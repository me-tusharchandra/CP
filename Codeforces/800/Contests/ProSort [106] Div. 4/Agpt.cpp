#include <iostream>
#include <vector>

int findOddOneOut(const std::vector<int>& arr) {
    int oddOneOut = 0;

    int evenCount = 0, oddCount = 0;
    int lastEven = 0, lastOdd = 0;

    for (int num : arr) {
        if (num % 2 == 0) {
            evenCount++;
            lastEven = num;
        } else {
            oddCount++;
            lastOdd = num;
        }
        
        if (evenCount > 1 && oddCount > 1) {
            oddOneOut = (evenCount > oddCount) ? lastOdd : lastEven;
            break;
        }
    }

    if (evenCount == 1)
        oddOneOut = lastEven;
    else if (oddCount == 1)
        oddOneOut = lastOdd;

    return oddOneOut;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        int oddOneOut = findOddOneOut(arr);
        std::cout << oddOneOut << std::endl;
    }

    return 0;
}
