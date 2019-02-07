#include <iostream>

using namespace std;
bool isPalindrome (string str){

    if (str==reverse(string str)){
        return true;
    }
    else{
        return false;
    }
}



int main()
{
cout<<"Input string to check if palindrome";
cin>>str>>endl;

    if (isPalindrome(str)==true){
        cout<<str<<" is a palindrome"<<endl;
    }
    else{
        cout<<str<<" is not a palindrome"<<endl;
    }

    return 0;
}
