#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;  
	int factorial = 1;  //Reading input from STDIN
	for(int i =  1; i<=num ; i++)
	{
		factorial*=i;
	}
	cout<<factorial<<endl;
	}