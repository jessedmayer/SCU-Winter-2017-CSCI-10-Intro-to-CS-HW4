#include <iostream>

using namespace std;

reverse (int n){
int n1=n%10;
int n2=n%10*10 -n1;
int n3=n%10*10*10 -n2;

return n1+n2+n3;
}


int main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
cout<<"Input 10 numbers";
cin>>n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

cout<<"reverse of n1 is "<<reverse(n1)<<endl;
cout<<"reverse of n2 is "<<reverse(n2)<<endl;
cout<<"reverse of n3 is "<<reverse(n3)<<endl;

    return 0;
}
