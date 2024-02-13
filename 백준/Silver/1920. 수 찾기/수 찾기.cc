#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main() {
    
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    for(int i=0; i<N; ++i) {
        int a;
        cin>>a;
        v.push_back(a);
        
    }

    sort(v.begin(), v.end());
    int M; cin>> M;
    
    while(M--) {
        int a; cin>>a;
        if (binary_search(v.begin(), v.end(), a)) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
        
    }
  
    
    return 0;
}


