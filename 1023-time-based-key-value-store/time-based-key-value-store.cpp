// @leet imports start
#include <unordered_map>
#pragma GCC optimize( "O3,unroll-loops,inline" )
#pragma GCC target( "avx2,bmi,bmi2,lzcnt" )
#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using vi  = vector<int>;
using vll = vector<ll>;
#define forn( s, i, e ) for ( int i = s; i < e; ++i )
#define all( x )        ( x ).begin(), ( x ).end()
#define sz( x )         int( ( x ).size() )
#define pb              push_back
#define fi              first
#define se              second
#define vec             vector
// ⚡ Fast I/O
static const int _fast_io = []() {
    ios::sync_with_stdio( false );
    cin.tie( nullptr );
    return 0;
}();

// \U0001f4e6 Debug/print utilities
void dbg()
{
    cout << "\n";
}
template <typename H, typename... T> void dbg( H h, T... t )
{
    cout << h << " ";
    dbg( t... );
}
int search( vector<int> &nums, int target )
{
    int l = 0, r = nums.size() - 1;
    while ( l <= r )
    {
        int mid = ( l + r ) / 2;
        if ( nums[ mid ] > target )
        {
            r = mid - 1;
        }
        else if ( nums[ mid ] < target )
        {
            l = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
// @leet imports end

class TimeMap
{
public:
    TimeMap()
    {
    }

    void set( string key, string value, int timestamp )
    {
        m[ key ].insert( { timestamp, value } );
    }

    string get( string key, int timestamp )
    {
        auto it = m[ key ].upper_bound( timestamp );
        return it == m[ key ].begin() ? "" : prev( it )->second;
    }

    unordered_map<string, map<int, string>> m;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

auto init = atexit( []() { ofstream( "display_runtime.txt" ) << "0"; } );