#include <iostream>
#include <cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string distict(string ss)
	{
	
int lls;string tempss;int i,j;
lls=ss.length();

		for( i=0;i<lls;i++)
	{
		for( j=0;j<i;j++)
		{
			if(ss[i]==ss[j])
			{
				break;
			}
			
		}
		if(i==j)
		{
			tempss+=ss[i];
		}
	}
	return tempss;
}
	string distinct_common(string aaa0, string aaa1)
	{
		int ll1;string temp11;int i,j;
		int ll2;
		ll1=aaa0.length();
		ll2=aaa1.length();
		for(i=0;i<ll1;i++)
		{
			for(j=0;j<ll2;j++)
			{
				if(aaa0[i]==aaa1[j])
				{
					temp11+=aaa0[i];
				}
			}
		}
		cout<<temp11<<endl;
		return temp11;
	}
string common(string aa0, string aa1)
{
	int l1;string temp1;
	int l2;string temp2;
	l1=aa0.length();int i,j;
	l2=aa1.length();
	for( i=0;i<l1;i++)
	{
		for( j=0;j<i;j++)
		{
			if(aa0[i]==aa0[j])
			{
				break;
			}
			
		}
		if(i==j)
		{
			temp1+=aa0[i];
		}
	}
		for( i=0;i<l2;i++)
	{
		for( j=0;j<i;j++)
		{
			if(aa1[i]==aa1[j])
			{
				break;
			}
			
		}
		if(i==j)
		{
			temp2+=aa1[i];
		}
	}
	cout<<temp1<<" "<<temp2<<endl;
	string cc;
 cc=	distinct_common(temp1,temp2);
 return cc;
	}

int main()
{
int t;
cin>>t;
for(int i=0; i<t;i++)
{
	int n;
	cin>>n;
	string a0;
	cin>>a0;
	if(n==1)
	{
		string result;
		result=distict(a0);
		cout<<result.length()<<endl;
	}
	else
	{
	
	for(int i=0;i<n-1;i++)
	{
		string a1;
		cin>>a1;
	   a0=	common(a0,a1);
	}
	cout<<a0.length();
    }
}
   
	return 0;
}
