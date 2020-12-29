#include<bits/stdc++.h>
using namespace std;
#define MX 1000
int factorial(int n);
int multiply(int x,int res[],int res_size);

//for short number<20;
//1st way:
int factorial(int n)
{
	int ans=1;
	for(int i=1;i<=n;i++)
		ans*=i;
	return ans;
}
//2nd way:
int factorial(int n)
{
	int ans=1;
	while(n)
	{
		ans*=n--;
	}
	return ans;
}
//3rd way:
int factorial(int n)
{
	int ans;
	for(ans=1;n;ans*=n--)
		return ans;
}
//4th way:
int factorial(int n)
{
	return n?n*factorial(n-1):1//non zero holey 1str er ta...zero hole 2nd ta...
}
//using recursion:
int factorial(int n)
{
	if(n==1)return 1;
	else 
		return n*factorial(n-1);
}

int main()
{
	int n;
	cin>>n;
	factorial(n);
	//cout<<"The factorial value of "<<n<<" is = "<<factorial(n);
}


//Big numbers factorial using array:
//gfg;
int factorial(int n)
{
 int res[MX];
 res[0]=1;
 int res_size=1;
 for(int x=2;x<=n;x++)
 	res_size=multiply(x,res,res_size);

   cout<<"The Factorial of "<<n<<" is = ";
   for(int i=res_size;i>=0;i--)
   	cout<<res[i];
}
int multiply(int x,int res[],int res_size)
{
   int carry=0;
   for(int i=0;i<res_size;i++)
   	{
        int prod=res[i]*x+carry;
        res[i]=prod%10;//right most digit ta..
        carry=prod/10;//baki shob..
   	}
   	while(carry)
   	{
   		res[res_size]=carry%10;
   		carry=carry/10;
   		res_size++;
   	}
   	return res_size;
}