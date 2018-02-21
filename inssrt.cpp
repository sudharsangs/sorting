#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>& a)
{
 int n=a.size(),value,key;
 for(int i=1;i<n-1;i++)
 {
  value=a[i];
  key=i;
  while((key>0)&&(a[key-1]>value))
  {
   a[key]=a[key-1];
   key-=1;
  }
  a[key]=value;
 }
}

int main()
{
 vector<int> c;
 int n,temp;
 cout<<"Enter the number of elements"<<endl;
 cin>>n;
 cout<<"Enter the elements"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>temp;
  c.push_back(temp);
 }
 insertionsort(c);
 for(int i=0;i<c.size();i++)
 {
  cout<<c[i]<<'\t';
 }
 return 0;
}
              
