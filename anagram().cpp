#include<iostream>
//#include<stdlib.h>
//#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
bool isAnagram(string s1,string s2)
{
int n1,n2;
n1=s1.length();
n2=s2.length();
if(n1!=n2)
return false;
else
return true;
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.begin());
for(int i=0;i<n1;i++)
{
if(s1[i]!=s2[i])
return false;
else
return true;
}
return true;
}
int main()
{
string str1,str2;
cout<<"Enter two str resp: ";
cin>>str1>>str2;
cout<<isAnagram(str1,str2);
}
