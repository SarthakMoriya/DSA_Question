#include<iostream>
using namespace std;

void hcf_gcd(int n,int m){
    int smaller=min(n,m);
    int i=1;
    int ans=smaller;
    while (i<=smaller)
    {
        if(m%i==0 && n%i==0) ans=i;
        i++;
    }
    cout<<"HCF::"<<ans<<endl;
    
}

int euclidMethode(int n,int m){
    if(m==0) return n;
    return euclidMethode(m,n%m);
}

int main(){
    hcf_gcd(1,7);
    cout<<"HCF::"<<euclidMethode(34,56);
    return 0;
}