#include <iostream>

#include <vector>
using namespace std;

int count_prime(int n)
{
    vector<bool> isprime(n, true);
    isprime[0] = isprime[1] = false;
    int ans = 0;
    for(int i = 2;i*i<n;i++)
    {
        if(isprime[i])
        {
            for(int j = i*i;j<n;j+= i)
            {
                isprime[j] = false;
            }
        }
    }
    for(int i = 2;i<n;i++)
    {
        if(isprime[i]){
            ans++;
        }
    }
}
int main()
{
    return 0;
}