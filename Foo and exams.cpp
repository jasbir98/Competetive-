
// Problem link : https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/foo-and-exams-4/
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); ++i)
#define mod 1000000007
#define bigger(a,b) (a>b?a:b)
#define smaller(a,b) (a<b?a:b)
#define mem(A,g) memset(A,g,sizeof(A))
#define gc getchar_unlocked
#define positive(a) (bigger(a,-a))
#define INF std::numeric_limits<int>::max();

  

bool calculate_value(long long a,unsigned long long b,unsigned long long c,unsigned long long d,unsigned long long t,unsigned long long k)
{
	long long cube = (unsigned long long)(t*t*t);
	long long square = (unsigned long long)(t*t);
	long long answer = ( unsigned long long )(a*cube) + (unsigned long long )(b*square) + (unsigned long long )(c*t)+d;
	if(answer>k)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}
int main() {
/* For file input and output 
freopen("input_file_name.in","r",stdin);
freopen("output_file_name.out","w",stdout);
*/
ios_base::sync_with_stdio(false); cin.tie(0);
int test;
cin>>test;
while(test--)
{
	unsigned long long a,b,c,d,k;
	cin>>a>>b>>c>>d>>k;
	unsigned long long x = 0;
	for(int i=1000000;i>=1;i/=2)
	{
		while(!calculate_value(a,b,c,d,i+x,k))
		{
			x+=i;
		}
	}
	unsigned long long answer = x;
	cout<<answer<<"\n";
}
return 0;
}
