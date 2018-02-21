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

int binsearch(vector<int> A,int x)
{
 int low=0,high=A.size()-1,mid;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(A[mid]==x)
  {
   return mid;
  }
  else if(x<A[mid])
  {
   high=mid-1;
  }
  else 
  {
   low=mid+1;
  }
 }
 return -1;
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
 int res=binsearch(c,x);
 if(res==-1)
 { 
  cout<<"Element "<<x<<" not found"<<endl;
 }
 else
 {
  cout<<"Element "<<x<<" found at position  "<<res+1<<endl;
 }

 return 0;
}



