#include<iostream>
#include<vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
int n = arr.size();

    for (int i = 0; i < n; i++) {
        int count1 = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count1++;
            }
        }

        for (int k = i + 1; k < n; k++) {
            if (arr[i] != arr[k]) {
                int count2 = 0;

                for (int j = 0; j < n; j++) {
                    if (arr[k] == arr[j]) {
                        count2++;
                    }
                }

                if (count1 == count2) {
                    return false;
                }
            }
        }
    }

    return true;
}

    int main() {
vector<int> arr = {1, 2, 2, 1, 1, 3};

cout << uniqueOccurrences(arr);

return 0;

}
