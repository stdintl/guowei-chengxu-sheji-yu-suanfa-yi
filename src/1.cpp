#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 

struct node{
    string y;
    string gai;
};

bool sortnode(node a,node b){
    return a.gai>b.gai;
}

void solve(){
    int n;
    cin>>n;
    vector<node>a(n);
    int maxa=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a[i].y=s;
        if(s.size()>maxa){
            maxa=s.size();
        }
    }
    for(int i=0;i<n;i++){
        int k=maxa-a[i].y.size();
        string s1=a[i].y;
        for(int i=0;i<k;i++){
            s1+=a[i].y[0];
        }
        a[i].gai=s1;
    }
    sort(a.begin(),a.end(),sortnode);
    if(a[0].y[0]=='0'){
        cout<<"0"<<endl;
    }else{
        for(int i=0;i<n;i++){
            cout<<a[i].y;
        }
        cout<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    while(t--){
        solve();
        //TODO
    }
}