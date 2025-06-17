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