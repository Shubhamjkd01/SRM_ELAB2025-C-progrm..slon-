#include<stdio.h>
int a[1000][1000],p[1001][1001];
int s(int x1,int y1,int x2,int y2){return p[x2][y2]-p[x1][y2]-p[x2][y1]+p[x1][y1];}
int g(int n,int h,int w,int o){int i,j,b=0,c;for(i=0;i+h<=n;i++)for(j=0;j+w<=n;j++)if((c=s(i,j,i+h,j+w))>b)b=c;return o-b;}
int main(){int t,n,i,j,o,m,h,w,z;scanf("%d",&t);while(t--){scanf("%d",&n);o=0;for(i=0;i<n;i++)for(j=0;j<n;j++){scanf("%d",&a[i][j]);if(a[i][j]==1)o++;}if(!o){printf("0\n");continue;}for(i=0;i<=n;i++)p[i][0]=p[0][i]=0;for(i=1;i<=n;i++)for(j=1;j<=n;j++)p[i][j]=a[i-1][j-1]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];m=n*n+1;i=1;while(i*i<=o){if(o%i){i++;continue;}h=i;w=o/i;if(h<=n&&w<=n){z=g(n,h,w,o);if(z<m)m=z;}if(h!=w&&w<=n){z=g(n,w,h,o);if(z<m)m=z;}i++;}if(m==n*n+1)printf("Invalid\n");else printf("%d\n",m);}return 0;}
