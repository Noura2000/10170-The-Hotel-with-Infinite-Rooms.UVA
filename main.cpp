#include <iostream>

using namespace std;

int main()
{
    long long s,d;
    while(scanf("%lld %lld", &s, &d)==2)
    {
        int i=s+1,c=s;
        while(true)
        {
            if(d<=s) { printf("%lld\n", c); break;}
            s+=i;
            i++;
            c++;
        }
    }
    return 0;
}
