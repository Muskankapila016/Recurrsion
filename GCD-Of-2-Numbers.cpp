#include<iostream>
using namespace std;
int gcd(int dividend,int divisor)
{
    if(divisor!=0)
    {
        return gcd(divisor,dividend%divisor);
    }
    return dividend;
}
int main(void)
{
    int a=23;
    int b=8;
    int dividend=(a>b)?a:b;
    int divisor=(a<b)?a:b;
    cout<<"GCD OF "<<a<<" AND "<<b<<" is "<<gcd(dividend,divisor);

}