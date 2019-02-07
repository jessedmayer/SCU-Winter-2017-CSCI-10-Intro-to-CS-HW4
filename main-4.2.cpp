#include <iostream>
#include <string>

using namespace std;

string codeword (string str){
/*
int length=str.length();
cout<<"str.at(0) is"<<str.at(0);
//string first_character = str.at(0);
cout<<"str.at(length-1) is"<<str.at(length-1);
//string last_character = str[length-1];
cout<<"code="<<l
//string code= first_character+last_character+length;
return code;
*/
string beginning;
string ending;
string numVal;

beginning=str.at(0);
ending=str.at(str.size()-1);
numVal=str.size();

string output=beginning+ending+numVal;
return output;
}




int main()
{
 cout<<"Code for Jeff is "<<codeword ("Jeff")<<endl;

 cout<<"Code for Frank is "<<codeword ("Frank")<<endl;

 cout<<"Code for Breanna is "<<codeword ("Breanna")<<endl;

 cout<<"Code for Jefferson is "<<codeword ("Jefferson")<<endl;

 cout<<"Code for Andrew is "<<codeword ("Andrew")<<endl;



 }
