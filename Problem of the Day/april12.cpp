// Solved 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> arr; 
    
    for (int i = 0; i < num; i++) {
        int val;
        cin >> val;
        arr.push_back(val); 
    }
    
    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i] << '\n';
    }
    
    return 0;
}
