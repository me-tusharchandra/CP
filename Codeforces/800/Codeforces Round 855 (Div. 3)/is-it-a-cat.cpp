// https://codeforces.com/contest/1800/problem/A

#include<iostream>

using namespace std;

void meowDetector(){
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    int j =1;
    if(str[0] == 'm' || str[0] || 'M'){
        j++;
        for (int i = 1; i < n; i++)
        {
            if (str[i] ==  'm' || str[i] || 'M' || str[i] == 'e' || str[i] == 'E')
            {

            }
            
        }
        
    }
    else 
        cout<< "NO";

}

int main(){

    int T;

    cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        meowDetector();
    }
    

    return 0;
}