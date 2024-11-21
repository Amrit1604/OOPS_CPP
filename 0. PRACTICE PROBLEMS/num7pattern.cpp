#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void print(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < n; i++) {
        ans.push_back(mat[0][i]);
        count++;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                ans.push_back(mat[i][j]);
                count++;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void display(){
	char n;
	cin>>n;
	char n="Hello";
	cout<<n;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> ans(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> ans[i][j];
        }
    }
    print(ans);
    display(n);
    return 0;
}
