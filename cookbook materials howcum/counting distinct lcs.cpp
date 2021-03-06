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

string a,b;
int len1,len2,len;

int dp[1010][1010];

int LCS(int i,int j)
{
    if(i==len1 || j==len2)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];

    int r1=0,r2=0;

    if(a[i]==b[j])
    {
        r1=1+LCS(i+1,j+1);
    }
    else
    {
        r1= max(LCS(i+1,j),LCS(i,j+1));
    }
    return dp[i][j]=r1;
}

void call()
{
    int dp2[1010][1010];
    int nexta[len1+1][27];
    int nextb[len2][27];

    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(a[i]-97==j)
            {
                nexta[i][]
            }
        }
    }
}

int main()
{
        //READ("in.txt");
    //WRITE("out.txt");
    while(cin>>a>>b)
    {
        len1=a.size();
        len2=b.size();
        CLR(dp,-1);

        len=LCS(0,0);
        debug(len);
    }
    return 0;
}


//10
//8 1 9 8 3 4 6 1 5 2


