#include <string>
#include<iostream>
#include<stdio.h>
using namespace std;

int maxlen = 0;
int start = 0;
void findLogestpalindrome(string s,int left,int right)
{
	while(left>=0 && right<s.length() && s[left] == s[right]){
		left--;
		right++;
	}
	if(maxlen < right-left-1){
		start = left+1;
		maxlen = right-left-1;
	}
}
void main()
{
	string strInput;

	while(cin>>strInput)
	{
		maxlen = 0;
		start = 0;
		for(int i=0;i<strInput.length();i++)
		{
			findLogestpalindrome(strInput,i,i);
			findLogestpalindrome(strInput,i,i+1);
		}
		cout<<maxlen<<endl;
	}

	

}