#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    

    char arr[8][8];

    while(t--){
        string ans = "";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }


        for (int i = 0; i < 8; i++){
            for(int j=0;j<8;j++){
                if(arr[i][j] != '.'){
                        ans += arr[i][j];
                    }
                }
            }
        cout << ans << endl;
    }
    
    return 0;
}
    
