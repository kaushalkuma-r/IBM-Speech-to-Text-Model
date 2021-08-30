#include <bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
int arr[101]={0};
for(int i=1;i&lt;=100;i++){
for(int j=i;j&lt;=100;j+=i){
if(arr[j]==0){
arr[j]=1;
}
else{
arr[j]=0;
}
}
}
int ans =0;
for(int i=1;i&lt;101;i++){
if(arr[i]==1)ans++;
}
cout<<ans;
return 0;
}