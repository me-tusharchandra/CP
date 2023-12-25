#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n = 0;
        cin >> n;
        int arr[n][2];

        int maxi = 0;

        vector<int> quality;

        for(int i=0;i<n;i++){
            cin >> arr[i][0] >> arr[i][1];
        }

        for(int i=0; i<n; i++){
            if(arr[i][0] <= 10){
                quality.push_back(arr[i][1]);
            }
            else{
                quality.push_back(0);
            }
        }

        for(auto i:quality){
            maxi = max(maxi, i);
        }

        for(int i=0; i<n; i++){
            if(arr[i][1] == maxi){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}