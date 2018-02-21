#include<iostream>
#include<vector>

using namespace std;

void selsort(vector<int>& a)
{
 int n=a.size(),imin;
 for(int i=0;i<n-2;i++)
 {
  imin=i;
  for(int j=i+1;j<n-1;j++)
  {
   if(a[j]<a[imin])
   {
    imin=j;
   }
  }
  swap(a[i],a[imin]);
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
 selsort(c);
 for(int i=0;i<c.size();i++)
 {
  cout<<c[i]<<'\t';
 }
 return 0;
}

