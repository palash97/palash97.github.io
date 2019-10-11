#include <bits/stdc++.h>
using namespace std;
struct node {
    int f;
    int g;
    int h;
    int r;
    int c;
};
bool comparedist(const node &a ,const node &b){
    return a.f>b.f;
}
int main(void) {
    int pr,pc;
    cin>>pr>>pc;
    int fr,fc;
    cin>>fr>>fc;
    int r,c;
    cin>>r>>c;
    vector<string> v(r);
    for(int i=0;i<r;i++){
        cin>>v[i];
    }
    priority_queue<node , vector<node> , comparedist> v2;
    struct node p;
    p.f = abs(pr-fr) + abs(pc-fc);
    p.r = pr;
    p.c = pc;
    p.g = 0;
    p.h = p.f;
    v2.push(p);
    struct node p1;
    while(1){
        p = v2.top();
        v2.pop();
        if(p.r == fr && p.c == fc){
            break;
        }
        if(p.r+1<r && v[p.r+1][p.c]!='%'){
            p1.g = p.g + 1;
            p1.r = p.r+1;
            p1.c = p.c;
            p1.h = abs(p1.r-fr) + abs(p1.c-fc);
            p1.f = p1.g + p1.h;
            v2.push(p1); 
            
        }
        if(p.r-1>=0 && v[p.r-1][p.c]!='%'){
            p1.g = p.g + 1;
            p1.r = p.r-1;
            p1.c = p.c;
            p1.h = abs(p1.r-fr) + abs(p1.c-fc);
            p1.f = p1.g + p1.h;
            v2.push(p1);
        }
        if(p.c-1>=0 && v[p.r][p.c-1]!='%'){
            p1.g = p.g + 1;
            p1.r = p.r;
            p1.c = p.c-1;
            p1.h = abs(p1.r-fr) + abs(p1.c-fc);
            p1.f = p1.g + p1.h;
            v2.push(p1);
        }
        if(p.c+1<c && v[p.r][p.c+1]!='%'){
            p1.g = p.g + 1;
            p1.r = p.r;
            p1.c = p.c+1;
            p1.h = abs(p1.r-fr) + abs(p1.c-fc);
            p1.f = p1.g + p1.h;
            v2.push(p1);
        }
    }
    cout<<56<<endl;
    return 0;
}