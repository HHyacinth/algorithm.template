#include<bits/stdc++.h>
using namespace std;

inline bool scan_lf(double &num)
{
    char in;
    double Dec=0.1;
    bool IsN=false;
    bool IsD=false;

    in=getchar();
    if(in==EOF)
        return false;

    while(in != '-' && in != '.' && (in < '0' || in > '9'))
        in=getchar();

    if(in=='-')
    {
        IsN=true;
        num=0;
    }
    else if(in == '.')
    {
        IsD=true;
        num=0;
    }
    else
        num=in-'0';

    if(!IsD)
    {
        while(in=getchar(),in >= '0' && in <= '9')
            num=num*10+(in-'0');
    }
    if(in != '.')
    {
        if(IsN)
            num=-num;
        return true;
    }
    else
    {
        while(in=getchar(),in >= '0' && in <= '9')
        {
            num += Dec*(in-'0');
            Dec *= 0.1;
        }
    }
    if(IsN)
        num=-num;
    return true;
}

int main()
{
    double x;
    scan_lf(x);
    cout<<x<<endl;
}
