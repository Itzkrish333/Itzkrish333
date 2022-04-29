#include<iostream>
using namespace std;
int x=20;
int main()

{
	int x=30;
	cout<<"local variable:"<<x<<endl;
	cout<<"global variable:"<<::x;
return 0;
}

