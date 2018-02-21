#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>& A,int start,int end)
{
 int pivot=A[end],pindex=start;
 for(int i=start;i<end;i++)
 {
  if(A[i]<=pivot)
  {
   swap(A[i],A[pindex]);
   pindex++;
  }
 }
 swap(A[pindex],A[end]);
 return pindex;
}

void quicksort(vector<int>& A,int start,int end)
{
 if(start<end)
 {
  int pindex=partition(A,start,end);
  quicksort(A,start,pindex-1);
  quicksort(A,pindex+1,end);
 }
}

int binsearch(vector<int> a,int x,int low,int high)
{
 if(low>high) 
 {
  return -1;
 }
 int mid=(low+high)/2; 
 if(x==a[mid])
 { 
  return mid;
 }
 else if(x<a[mid])
 {
  return binsearch(a,low,mid-1,x);
 }
 else
 {
  return binsearch(a,mid+1,high,x);
 }
}


int main()
{
 vector<int> c;
 int n,temp,x;
 cout<<"Enter the number of elements"<<endl;
 cin>>n;
 cout<<"Enter the elements"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>temp;
  c.push_back(temp);
 }
 quicksort(c,0,n-1);
 cout<<"Sorted array is"<<endl;
 for(int i=0;i<c.size();i++)
 {
  cout<<c[i]<<'\t';
 }
 cout<<"Enter the element to be searched"<<endl;
 cin>>x;
 int res=binsearch(c,x,0,c.size()-1);
 if(res==-1)
 {
  cout<<"Element "<<x<<"  not found"<<endl;
 }
 else
 {
  cout<<"Element "<<x<<" found at position "<<res+1<<endl;
 }
 return 0;
}


