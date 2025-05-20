#include<bits/stdc++.h>
using namespace std;
int main(){
float m,n;
cin>>m>>n;
float k=m;

for(int j=2;j<=m;j++){
    int flag=1;
    
    m=k;
for(int i=0;i<n;i++){
    m=m/j;
    if((m-(int)m)!=0) {
        flag=0;
        break;
    }
    else continue;

}
if(flag && (int)m==1){
    cout<<j;
    return 0;
}
}
 cout<<-1;
return 0;

}
