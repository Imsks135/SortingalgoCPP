#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
void bubble(int a[],int n){   //bubble sort stable sorting algo
    for(int i=0;i<n;i++){     //inplace
        bool swapped=false;   //worst case theta(n*n)
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
            swapped=true;
        }
        if(swapped==false)break;
    }
}
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a[]={3,1,6,5,4,10,};
  int n=6;
  bubble(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}