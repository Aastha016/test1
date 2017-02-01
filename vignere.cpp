#include<bits/stdc++.h>
using namespace std;

int main()
{
char str[20],key[10];


cout<<"enter the string"<<endl;
gets(str);
cout<<"enter the key"<<endl;
gets(key);
int len =strlen(key);
int length = strlen(str);
int arr[len],a[length];
int encrypt[length];
char full[length];
cout<<str;
cout<<key<<endl;
for(int i=0;i<strlen(key);i++)
{
    arr[i]=key[i]-'A';//key

}
for(int i=0;i<strlen(str);i++)
{
    a[i]=str[i]-'A';//sting

}

for(int i=0;i<strlen(key);i++)
{
   cout<<arr[i]<<" ";

}
cout<<endl;
for(int i=0;i<strlen(str);i++)
{
   cout<<a[i]<<" ";

}
int i=0,j=0;
while(i!=strlen(str))
{
    if(j!=strlen(key))
   {

       encrypt[i] = (a[i]+arr[j])%26+65;
   i++;
   j++;
   }
   else
   {
     j=0;
   encrypt[i] = (a[i]+arr[j])%26 +65;
   i++;
   j++;

   }
}
cout<<endl;
for(int i=0;i<strlen(str);i++)
{
   cout<<(char)encrypt[i]<<" ";

}

}
