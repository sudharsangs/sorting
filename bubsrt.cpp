#include<iostream>
#include<vector>
using namespace std;

void bubsort(vector<int>& a)
{
 int n=a.size();
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    swap(a[j],a[j+1]);
   }
  }
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
 bubsort(c);
 for(int i=0;i<c.size();i++)
 {
  cout<<c[i]<<'\t';
 }
 return 0;
}
