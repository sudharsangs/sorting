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
 quicksort(c,0,n-1);
 for(int i=0;i<c.size();i++)
 {
  cout<<c[i]<<'\t';
 }
 return 0;
}

  
