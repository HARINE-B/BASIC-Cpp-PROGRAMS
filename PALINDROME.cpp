#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	cout<<"ENTER A POSITIVE NUMBER";
	cin>>num;
	n=num;
	while(num)
	{
	 digit=num%10;
	 rev=(rev*10)+digit;
	 num=num/10;
	}
	cout<<"THE REVERSE OF THE NUMBER IS"<<rev<<endl;
	if(n==rev)
	cout<<"THE NUMBER IS A PALINDROME"<<endl;
	else
	cout<<"THE NUMBER IS NOT A PALINDROME"<<endl;
	return 0; 
}
