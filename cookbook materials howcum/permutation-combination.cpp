#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;


const double EPS = 1e-9;
const int INF = 0x7f7f7f7f;
#define PI 3.1415926535897932384626

#define    READ(f) 	         freopen(f, "r", stdin)
#define    WRITE(f)   	     freopen(f, "w", stdout)
//
//#define    vi 	 vector < int >
//#define    vii 	 vector < vector < int > >

//typedef pair <int,int>pii;

#define CLR(n, v) memset(n, v, sizeof( n ))

#define ff first
#define ss second

#define ll long long int

//******************DELETE****************
#define howcum
#ifdef howcum
     #define debug(args...) {dbg,args; cerr<<endl;}
#else
    #define debug(args...)  // Just strip off all debug tokens
#endif

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cerr<<v<<" ";
        return *this;
    }
}dbg;
//******************DELETE****************

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T _swap(T &a, T &b) { a=a^b;b=a^b;a=a^b;}
template< class T > T gcd(T a, T b) { return (b == 0 ? a : gcd(b, a % b)); }
template< class T > T lcm(T a, T b) { return (a / gcd(a, b) * b); }

typedef pair<int,int>ii;
typedef vector<ii>vii;
typedef vector<int>vi;



int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

int n,k;
ll dp_permu[31][31],dp_combi[31][31];

void permu()
{
    for(int i=0;i<=30;i++)
    {
        dp_permu[i][0]=1;
        dp_permu[i][1]=i;

        for(int j=2;j<=i;j++)
            dp_permu[i][j]=dp_permu[i][j-1]*(ll)(i-j+1);
    }
}

void combi()
{
    for(int i=0;i<31;i++)
    {
        dp_combi[i][0]=dp_combi[i][i]=1;
        for(int j=1;j<i;j++)
        {
            dp_combi[i][j]=dp_combi[i-1][j-1]+dp_combi[i-1][j];
        }
    }
}

int main()
{
        //READ("in.txt");
    //WRITE("out.txt");
    permu();
    combi();
    int T;
    scanf("%d",&T);
    for(int tc=1;tc<=T;tc++)
    {
        scanf("%d %d",&n,&k);
//
//        CLR(dp2,-1);
//        ll res=call(n,n,k);
        ll res=0;
        if(k<=n)
        res= dp_combi[n][k]*dp_permu[n][k];
        printf("Case %d: %lld\n",tc,res);
    }
    return 0;
}


//10
//8 1 9 8 3 4 6 1 5 2



