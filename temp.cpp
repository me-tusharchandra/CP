#include<iostream>
#include<vector>

using namespace std;

int main(){

    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    int k = key.size();
    int m = message.size();
    int a = alpha.size();
    
    vector<char> newKey;

    newKey.push_back(key[0]);


    for(char c : key){
        for(char b : newKey){
            if(c!=a){
                newKey.push_back(c);
            }
        }
    }

    for(char c : newKey){
        cout<<c;
    }

    return 0;
}