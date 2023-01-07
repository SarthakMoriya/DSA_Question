#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    int i = n;
    while (i >= 1)
    {
        fact *= i;
        i--;
    }

    return fact;
}

void countZeroes(int n)
{
    long long result = factorial(n);
    int count=0;

    while(result>0){
        if(result%10==0){
            count++;
        }
        result /= 10;
    }
    cout<<count;

}

int  trailingZeroes(int n){
    int res=0;
    for(int i=5; i<=n; i*=5){
        res+=n/i;
    }
    return res;
}

int main()
{
    int n = 251;
    // countZeroes(n);

    //in order to calcualte for even slightly larger number like 20 we cant store its factorial for this we use 
    cout<<trailingZeroes(n);
    return 0;
}