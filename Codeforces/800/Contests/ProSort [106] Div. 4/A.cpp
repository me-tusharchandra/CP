#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    int n;
    int even = 0;
    int odd = 0;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even<odd){
            for (int i = 0; i < n; i++)
            {
                if(arr[i]%2 == 0){
                    cout << arr[i] << endl;
                    break;
                }
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(arr[i]%2 != 0){
                    cout << arr[i] << endl;
                    break;
                }
            }
        }
    } 
    return 0;
}