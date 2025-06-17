#include<iostream>
#include<vector>
using namespace std;

class disjoint_set{
    vector<int> rank,parent,size;
    public:
    disjoint_set(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findPar(int node){
        if(node==parent[node]) return node;

        return parent[node]=findPar(parent[node]);
    }


    void union_byrank(int u,int v){
        int up_u=findPar(u);
        int up_v=findPar(v);
        if(up_u==up_v) return;
        if(rank[up_u]<rank[up_v]){
            parent[up_u]=up_v;
        }
        else if(rank[up_u]>rank[up_v]){
            parent[up_v]=up_u;
        }
        else{
            parent[up_v]=up_u;
            rank[up_u]++;
        }
    }

    void union_bysize(int u,int v){
        int up_u=findPar(u);
        int up_v=findPar(v);
        if(up_u==up_v) return;
        if(size[up_u]>size[up_v]){
            parent[up_v]=up_u;
            size[up_u]+=size[up_v];
        }
        else if(size[up_u]<size[up_v]){
            parent[up_u]=up_v;
            size[up_v]+=size[up_u];
        }
        else{
            parent[up_u]=up_v;
            size[up_v]+=size[up_u];
        }
    }
};
int main(){
    disjoint_set ds1(7);
    ds1.union_byrank(1,2);
    ds1.union_byrank(2,3);
    ds1.union_byrank(4,5);
    if(ds1.findPar(1)==ds1.findPar(5)){
        cout<<"In same component"<<endl;
    }
    else cout<<"in different component" <<endl;
    ds1.union_byrank(6,7);
    ds1.union_byrank(5,6);    
    ds1.union_byrank(3,7);    

    if(ds1.findPar(1)==ds1.findPar(5)){
        cout<<"In same component"<<endl;
    }
    else cout<<"in different component" <<endl;


    disjoint_set ds2(7);
    ds2.union_bysize(1,2);
    ds2.union_bysize(2,3);
    ds2.union_bysize(4,5);
    if(ds2.findPar(1)==ds2.findPar(5)){
        cout<<"In same component"<<endl;
    }
    else cout<<"in different component" <<endl;
    ds2.union_bysize(6,7);
    ds2.union_bysize(5,6);    
    ds2.union_bysize(3,7);    

    if(ds2.findPar(1)==ds2.findPar(5)){
        cout<<"In same component"<<endl;
    }
    else cout<<"in different component" <<endl;
    return 0;
}