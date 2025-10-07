#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> a = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int c = a[0].size();

    for (int col = 0; col < c; col++) {
        if ((col & 1) == 0) {  // even column → top to bottom
            for (int i = 0; i < a.size(); i++) {
                cout << a[i][col] << " ";
            }
        } else {  // odd column → bottom to top
            for (int i = a.size() - 1; i >= 0; i--) {
                cout << a[i][col] << " ";
            }
        }
    }
}
