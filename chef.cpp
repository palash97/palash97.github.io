#include <bits/stdc++.h>

using namespace std;
int m = 1000000007;
string rotate(string a){
int n = a.length();
char temp=a[0];
for(int i=0;i<n-1;i++){
a[i]=a[i+1];
}
a[n-1]=temp;
return a;
}
int main(){
int t;
cin>>t;
int n;
string a,b;
while(t>0){
cin>>n;
a = to_string(n);
for(int i=0;i<n;i++){
b = rotate(a);
a = a + b;
}
n=stoi(a);
n=n%m;
cout<<n<<endl;
t--;
}
return 0;
}