
/* AUTHOR:- SZERO763 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi pair<int,int>
#define ivec vector<int>
#define lvec vector<ll> 
#define pvec vector<pair<int,int>>
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define print(x) (cout << x << "\n");
#define _print(x, y)(cout << x << " " << y << "\n");
#define prints(x) (cout << x << " ");
#define get(x) (cin >> x);
#define _get(x, y)(cin >> x >> y);
#define repeat(i, x, n) for(int i = x; i < n; i++)
#define _repeat(i, n, x) for(int i = n; i >= x; i--)
#define endline cout << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";


const ll MOD = 1e9+7;
template<typename T> 
void printElement(vector<T> &a);
//cout << fixed << setprecision(6);

//__________________SOLUTION___________________________//

const int N = 2e5+5;


ll arr[N] = {0};


void solve(){
    int n;      cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2){
            arr[i] *= -1;
        }
    };

    map<ll,ll> vis;
    ll s = 0;
    vis[0] = 1;
    for(int i=0;i<n;i++){
        s += arr[i];
        if(vis[s]){
            YES;
            return;
        }
        vis[s]++;
    }

    NO;

}


//__________________MAIN FUNCTION_______________________//

int main(){
    Faster;

    int t = 1;             get(t);

    while(t--){
        solve();
    }


    return 0;
}




//_____________________LOCAL FUNCTION______________//


template<typename T> 
void printElement(vector<T> &a){
    for_each(a.begin(), a.end(), [](T v){
        cout << v << " ";
    });
    endline;
}