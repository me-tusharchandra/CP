#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator ptr;
        for(ptr = nums.begin(); ptr < nums.end()-1 ;){
            if(*ptr == *(ptr+1))
                nums.erase(ptr);
            else
                ptr++;
        }
        return nums.size();
    }

int main(){
    vector<int> ar = {0,0,1,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(ar);
    return 0;
}