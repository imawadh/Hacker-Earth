# include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int product = 1;
	for(int i = 0 ; i<n ; i++)
	{
		cin>>arr[i];
		product*=arr[i];
	}
	cout<<product;
    // q = no.of queries
    int q;
    cin>>q;
    int q_arr[q];
    int number_to_append = 0;
    std::vector <int> zero_count;
    for(int i = 0 ; i< q; i++)
    {
        cin>>q_arr[i];
        int product1 = product;

        while(product1>=q_arr[i])
        {
            number_to_append = product1%arr[i];
            product1/=q_arr[i];
            
            
        }

    }

}
