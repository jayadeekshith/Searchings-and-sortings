#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void insertion(int *a,int n){
    for(int i=1;i<n;++i){
    int key=a[i];
    int j;
    j=i-1;
    while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
    
        a[j+1]=key;
    }

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    
}
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
insertion(a,n);
	return 0;
}
