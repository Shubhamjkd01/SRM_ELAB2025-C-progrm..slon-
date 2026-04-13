#include<stdio.h>
int a[1000][1000],p[1001][1001];

int rectsum(int x1,int y1,int x2,int y2){
    return p[x2][y2]-p[x1][y2]-p[x2][y1]+p[x1][y1];
}

int bestrect(int n,int h,int w,int ones){
    int i,j,best=0,cur;
    for(i=0;i+h<=n;i++){
        for(j=0;j+w<=n;j++){
            cur=rectsum(i,j,i+h,j+w);
            if(cur>best)best=cur;
        }
    }
    return ones-best;
}

int main(){
    int t,n,i,j,ones,ans,h,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ones=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                if(a[i][j]==1)ones++;
            }
        }
        if(ones==0){
            printf("0\n");
            continue;
        }
        for(i=0;i<=n;i++){
            p[i][0]=0;
            p[0][i]=0;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                p[i][j]=a[i-1][j-1]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
            }
        }
        ans=n*n+1;
        i=1;
        while(i*i<=ones){
            if(ones%i){
                i++;
                continue;
            }
            h=i;
            w=ones/i;
            if(h<=n&&w<=n){
                j=bestrect(n,h,w,ones);
                if(j<ans)ans=j;
            }
            if(h!=w&&w<=n&&h<=n){
                j=bestrect(n,w,h,ones);
                if(j<ans)ans=j;
            }
            i++;
        }
        if(ans==n*n+1)printf("Invalid\n");
        else printf("%d\n",ans);
    }
    return 0;
}
