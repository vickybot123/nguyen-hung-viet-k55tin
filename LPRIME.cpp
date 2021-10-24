#include<iostream>
#include<algorithm>
using namespace std;
long long int a,b,c,d;
int prime (int x){
    int dem=0;
    for(int i=2;i*i<x;i++){
        if(x%i==0) dem++;
    }
    if ( dem>0) return 1;
        else return 0;
}

int main() {
cin>>a;
c=a;
while(c<=a){
   if(prime(c)==0){
        cout<<c;
   break;
   }
   else c--;
}

}
