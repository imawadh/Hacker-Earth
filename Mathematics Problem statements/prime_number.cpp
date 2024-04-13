# include <bits/stdc++.h>
using namespace std;
int is_prime(int a)
{
    int flag = 1;
    for(int j = 2 ; j<=a/2; j++)
    {
        if(a%j==0)
        {
            flag =0;
            break;
        }
    }
    if(flag == 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int q;
    cin>>q;
    int c = is_prime(q);
    cout<<c;   
}