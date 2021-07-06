#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void selection(int *a,int n){
    for(int i=0;i<n-2;++i){
        int min=i;
        for(int j=i+1;j<n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        
           int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
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
selection(a,n);
	return 0;
}
