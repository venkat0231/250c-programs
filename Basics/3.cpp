#include<iostream>
using namespace std;
int main(){
	int num1,num2,temp;
	cout<<"enter value of number1 is";
	cin>>num1;
	cout<<"enter value of number2 is";
	cin>>num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"value of number1 after swap is "<<num1<<endl;
	cout<<"value of number2 after swap is "<<num2<<endl;
	return 0;
}
