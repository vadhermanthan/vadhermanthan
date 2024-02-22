#include<iostream>
using namespace std;
int main()
{
int a=5;
int b=25;

int bitwise_and=a&b;
int bitwise_or=a|b;
int bitwise_xor=a^b;
int left_shift= a<<3;
int right_shift=a>>1;

cout<<"A"<<bitwise_and<<endl;
cout<<"B"<<bitwise_or<<endl;
cout<<"C"<<bitwise_xor<<endl;
//cout<<"D"<<bitwise_not=!=a<<endl;
cout<<"E"<<left_shift<<endl;
cout<<"F"<<right_shift<<endl;

return 0;
}



