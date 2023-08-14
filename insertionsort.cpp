#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
void insertion(int a[],int n){
      for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
      }                           //insertion sort
}                                //stable and inplace
int main()                        //BigO(n*n) worst case
{                                  //best case already sorted BigO(n)
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a[]={3,1,6,5,4,10,};
  int n=6;
  insertion(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}