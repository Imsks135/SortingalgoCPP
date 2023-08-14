#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
void selection(int a[],int n){   //selection sort
    for(int i=0;i<n;i++){     //not stable
        int min_index=i;    //theta(n*n)
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index])min_index=j;
        }
        swap(a[i],a[min_index]);
    }
}
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a[]={3,1,6,5,4,10,};
  int n=6;
  selection(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}