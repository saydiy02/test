# include <iostream>
# include <cstdlib>
using namespace std;
int main ()
{
	int n1,n2,nPrime,i;
	
	cout<< "Enter the minimum number: ";
	cin>> n1;
	cout <<"Enter the maximum number: ";
	cin>>n2;
	int random = n1+(rand()% n2);
	cout <<"Random number between "<<n1<<" and "<<n2<<" : "<<random;
	cout <<endl;
	nPrime = 1;
	if (random <=1)
	{
		nPrime = 0;
	}
	for(i=2; i<=random/2; i++)
	{
		if (random % i == 0)
		{
			nPrime=0;
			break;
		}
	}
	if (nPrime==1)
	{
		cout << random << " is a prime number";
	}
	else
	{
		cout << random << " is not a prime number";
	}
}