#include<iostream>
#include<math.h>
#include<climits>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        long long int c;
        cin >> n >> c;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        long long int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i]*arr[i];
        }

        long long int q = -(c-sum)/4;
        long long int p = 0;

        for(int i=0; i<n; i++){
            p += arr[i];
        }

        long long int d = sqrt(p*p-4*q*n);

        long long int w = (-p+d)/(2*n);

        cout << w << endl;

    }

    return 0;
}

// 1
// 2
// 4
// 5
// 7654321
// 126040443
// 79356352
// 329406144173382406
// 9086033
// 256204778801519077