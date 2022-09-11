#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	int sum,sub,mul,mod;
    float div;
	cout<<"Enter the first number ";
	cin>>num1;
	cout<<"Enter the second number ";
	cin>>num2;
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	mod=num1%num2;
	div=num1/num2;
	cout<<"Sum of two numbers is "<<sum<<endl;
	cout<<"Subtraction of two numbers is "<<sub<<endl;
	cout<<"Multiplication of two numbers is "<<mul<<endl;
	cout<<"Modulus of two numbers is "<<mod<<endl;
	cout<<"Quotient of two numbers is "<<div<<endl;
	return 0;
}

