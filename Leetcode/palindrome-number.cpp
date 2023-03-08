#include<iostream>

using namespace std;

bool palindrome(int x){
    int num = x, digit = 0;
    unsigned int rev = 0;
        while(num != 0){
            digit = num%10;
            rev = (rev*10) + digit;
            num = num/10;
        }
        if(x < 0)
            return false;
        else if(x == rev)
            return true;
        else
            return false;

}

int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    cout << palindrome(x);
}

// Final Submission
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int num = x, digit = 0;
//         unsigned int rev = 0;
//         if(x<0)
//             return false;
//         do{
//             digit = num%10;
//             rev = (rev*10) + digit;
//             num = num/10;
//         }while(num != 0);
        
//         if(x == rev)
//             return true;
//         else
//             return false;
//     }
// };