#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void binarysearch(int *a,int l,int h,int  mid,int key,int n){
    int count=0;
    while(l<=h){
    mid=(l+h)/2;
    if(key==a[mid]){ count++;
break;
}
    else 
    {
    if(a[mid]<key) l=mid+1;
    else h=mid-1;
}
}
if(count>0) cout<<"found";
else cout<<"not found";

}
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    
}
int key;
cin>>key;
int l=0,h=n-1,mid=0;
binarysearch(a,l,h,mid,key,n);

	return 0;
}
