# include <bits/stdc++.h>
using namespace std;
// not solved yet fully 
int is_prime(int a)
{
    int flag = 1;
    for(int j = 2 ; j<a/2; j++)
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
    int t;
    cin>>t;
    for(int i = 0 ; i< t ; i++)
    {
        int a;
        cin>>a;
        vector <int> arr(a);
        int count = 0,count_prime = 0;
        for(int j = 0; j<a ; j++)
        {
            cin>>arr[j];
            if(arr[j]==1)
            {
                count++;
            }
            else if (is_prime(arr[j])==1)
            {
                count_prime++;
            }
        }
        if(count>=2 && count_prime>=1)
        {
            cout<<count_prime<<'\n';
        }
        else
        {
            cout<<0<<'\n';
        }

    }
}