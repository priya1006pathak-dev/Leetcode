#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> chunkArray(vector<int> arr, int size) {
vector<vector<int>> ans;

for (int i = 0; i < arr.size(); i += size) {
    vector<int> temp;

    for (int j = i; j < i + size && j < arr.size(); j++) {
        temp.push_back(arr[j]);
    }

    ans.push_back(temp);
}

return ans;
}

int main() {
vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
int size = 2;

vector<vector<int>> result = chunkArray(arr, size);

for (int i = 0; i < result.size(); i++) {
    cout << "{ ";
    for (int j = 0; j < result[i].size(); j++) {
        cout << result[i][j] << " ";
    }
    cout << "}" << endl;
}

return 0;

}