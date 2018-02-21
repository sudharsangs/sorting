#include<iostream>
#include<vector>
using namespace std;

void merges(vector<int>& l,vector<int>& r,vector<int>& a)
{
 int nl=l.size(),nr=r.size(),na=a.size();
 int i=0,j=0,k=0;
 while(((i<nl)&&(j<nr))&&(k<na))
 {
  if(l[i]<=r[j])
  {
   a[k]=l[i];
   k++;
   i++;
  }
  else
  {
   a[k]=r[j];
   j++;
   k++;
  }
 }
 while((i<nl))
 {
  a[k]=l[i];
  i++;
  k++;
 }
 while((j<nr))
 {
  a[k]=r[j];
  j++;
  k++;
 }
}

void mergesort(vector<int>& a)
{
 int mid,n=a.size();
 vector<int> left;
 vector<int> right;
 cout << "size of left is " << left.size() << flush;
 cout << "size of right is " << right.size() << flush;
 if(n>=2)
 {
 mid=n/2;
 /*
 for(int i=0;i<mid;i++)
 {
  left[i]=a[i];
 }
 for(int i=mid;i<n;i++)
 {
  right[i-mid]=a[i];
 }
*/
 left = vector<int>(a.begin(), a.begin() + mid);
 right = vector<int>(a.begin() + mid, a.end());
 mergesort(left);
 mergesort(right);
 merges(left,right,a);
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
 mergesort(c);
 for(int i=0;i<c.size();i++)
 {
  cout<<c[i]<<'\t';
 }
 return 0;
}
