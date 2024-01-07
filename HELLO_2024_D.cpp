
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



void solve(){
    int n;        cin>>n;
    ivec  a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ivec v;
    v.push_back(a[0]);

    for(int i = 1;i<n;i++){
        while(v.size()>1&&a[i]<v.back() && v.back()-1 == v[v.size()-2]){
            v.pop_back();
        }

        if(a[i]>v.back()){
            v.push_back(a[i]);
        }
        else if(a[i] == v.back()-1){
            v[v.size()-1] = a[i];
        }
        else if(a[i]==v.back()){
            if(a[i] == 0){
                NO;
                return;
            }
        }
        else {
            NO;
            return;
        }
    }
    while(v.size()>1&&v.back()-1 == v[v.size()-2]){
        v.pop_back();
    }

    if(v.size() == 1 && v[0] == 0){
        YES;
    }else{
        NO;
    }

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