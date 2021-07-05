#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void linearsearch(int *a,int key,int n){
    int count=0;
   for(int i=0;i<n;i++)
{
    if(key==a[i])
   {
count++;
break;
}
}
if(count==1) cout<<"found";
else cout<<"not found";

}
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){ cin>>a[i];
}

int key;
cin>>key;
linearsearch(a,key,n);
return 0;
}
