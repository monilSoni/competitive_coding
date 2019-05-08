
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

int main(){
    int n;
    scanf("%d", &n);
    vector<string> paper(n);
    for(int i=0; i<n; i++) cin >> paper[i];

    char diag = paper[0][0], non_diag = paper[0][1];
    if(diag == non_diag){
        printf("NO\n");
        return 0;
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            if(i == j || i+j == n-1){
                if(paper[i][j] != diag){
                    printf("NO\n");
                    return 0;
                }
            }else{
                if(paper[i][j] != non_diag){
                    printf("NO\n");
                    return 0;
                }
            }
        }

    printf("YES\n");
    return 0;
}
