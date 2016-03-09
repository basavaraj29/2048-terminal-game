#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int q=0,pts=0;
typedef struct
{
int x;
int y;
} pt;
void gen(int p[4][4])
{
int i,j,k;
pt a[17];
for(k=0,i=0;i<4;i++) for(j=0;j<4;j++) if(p[i][j]==0) {a[k].x=i;a[k].y=j;k++;};
if(k!=0){
 a[16].x=rand()%k;
 p[a[a[16].x].x][a[a[16].x].y]=2;
 for(i=0;i<4;i++) {for(j=0;j<4;j++) {if(p[i][j]!=0)printf("%d\t",p[i][j]);else printf("..\t");}printf("\n\n");};}
 else {printf("Game over\nstart new game\n");
  for(i=0;i<4;i++) for(j=0;j<4;j++) p[i][j]=0;
    gen(p);}
  }
  void up(int p[4][4])
  {
     int i,j,b[4][4],k=0;
     for(i=0;i<4;i++) for(j=0;j<4;j++) b[i][j]=p[i][j];
for(j=0;j<4;j++) for(i=0;i<3;i++) if(p[i][j]==0) {p[i][j]=p[i+1][j];p[i+1][j]=0;};
for(j=0;j<4;j++) for(i=0;i<3;i++) if(p[i][j]==0) {p[i][j]=p[i+1][j];p[i+1][j]=0;};
for(j=0;j<4;j++) for(i=0;i<3;i++) if(p[i][j]==0) {p[i][j]=p[i+1][j];p[i+1][j]=0;};
for(j=0;j<4;j++) for(i=0;i<3;i++) if(p[i][j]==p[i+1][j]) {p[i][j]+=p[i+1][j];p[i+1][j]=0;pts+=p[i][j];}
 for(j=0;j<4;j++) for(i=0;i<3;i++) if(p[i][j]==0) {p[i][j]=p[i+1][j];p[i+1][j]=0;};
 for(j=0;j<4;j++) for(i=2;i<3;i++) if(p[i][j]==p[i+1][j]) {p[i][j]+=p[i+1][j];p[i+1][j]=0;pts+=p[i][j];}
  for(j=0;j<4;j++) for(i=0;i<3;i++) if(p[i][j]==0) {p[i][j]=p[i+1][j];p[i+1][j]=0;};
  for(i=0;i<4;i++) for(j=0;j<4;j++) if(p[i][j]!=b[i][j]) k++;
 if(k!=0) gen(p);
 else {printf("Move not possible\n");q++;}
  }
void down(int p[4][4])
{
 int i,j,b[4][4],k=0;
 for(i=0;i<4;i++) for(j=0;j<4;j++) b[i][j]=p[i][j];
for(j=0;j<4;j++) for(i=3;i>0;i--) if(p[i][j]==0) {p[i][j]=p[i-1][j];p[i-1][j]=0;};
for(j=0;j<4;j++) for(i=3;i>0;i--) if(p[i][j]==0) {p[i][j]=p[i-1][j];p[i-1][j]=0;};
for(j=0;j<4;j++) for(i=3;i>0;i--) if(p[i][j]==0) {p[i][j]=p[i-1][j];p[i-1][j]=0;};
for(j=0;j<4;j++) for(i=3;i>0;i--) if(p[i][j]==p[i-1][j]) {p[i][j]+=p[i-1][j];p[i-1][j]=0;pts+=p[i][j];}
 for(j=0;j<4;j++) for(i=3;i>0;i--) if(p[i][j]==0) {p[i][j]=p[i-1][j];p[i-1][j]=0;};
 for(j=0;j<4;j++) for(i=1;i>0;i--) if(p[i][j]==p[i-1][j]) {p[i][j]+=p[i-1][j];p[i-1][j]=0;pts+=p[i][j];}
  for(j=0;j<4;j++) for(i=3;i>0;i--) if(p[i][j]==0) {p[i][j]=p[i-1][j];p[i-1][j]=0;};
for(i=0;i<4;i++) for(j=0;j<4;j++) if(p[i][j]!=b[i][j]) k++;
 if(k!=0) gen(p);
 else {q++;printf("Move not possible\n");}
}
void right(int p[4][4])
{
    int i,j,b[4][4],k=0;
     for(i=0;i<4;i++) for(j=0;j<4;j++) b[i][j]=p[i][j];
for(i=0;i<4;i++) for(j=3;j>0;j--) if(p[i][j]==0) {p[i][j]=p[i][j-1];p[i][j-1]=0;};
for(i=0;i<4;i++) for(j=3;j>0;j--) if(p[i][j]==0) {p[i][j]=p[i][j-1];p[i][j-1]=0;};
for(i=0;i<4;i++) for(j=3;j>0;j--) if(p[i][j]==0) {p[i][j]=p[i][j-1];p[i][j-1]=0;};
for(i=0;i<4;i++) for(j=3;j>0;j--) if(p[i][j]==p[i][j-1]) {p[i][j]+=p[i][j-1];p[i][j-1]=0;pts+=p[i][j];}
for(i=0;i<4;i++) for(j=3;j>0;j--) if(p[i][j]==0) {p[i][j]=p[i][j-1];p[i][j-1]=0;};
for(i=0;i<4;i++) for(j=1;j>0;j--) if(p[i][j]==p[i][j-1]) {p[i][j]+=p[i][j-1];p[i][j-1]=0;pts+=p[i][j];}
for(i=0;i<4;i++) for(j=3;j>0;j--) if(p[i][j]==0) {p[i][j]=p[i][j-1];p[i][j-1]=0;};
  for(i=0;i<4;i++) for(j=0;j<4;j++) if(p[i][j]!=b[i][j]) k++;
 if(k!=0) gen(p);
 else {q++;printf("Move not possible\n");}
}
void left(int p[4][4])
{
    int i,j,k=0,b[4][4];
     for(i=0;i<4;i++) for(j=0;j<4;j++) b[i][j]=p[i][j];
for(i=0;i<4;i++) for(j=0;j<3;j++) if(p[i][j]==0) {p[i][j]=p[i][j+1];p[i][j+1]=0;};
for(i=0;i<4;i++) for(j=0;j<3;j++) if(p[i][j]==0) {p[i][j]=p[i][j+1];p[i][j+1]=0;};
for(i=0;i<4;i++) for(j=0;j<3;j++) if(p[i][j]==0) {p[i][j]=p[i][j+1];p[i][j+1]=0;};
for(i=0;i<4;i++) for(j=0;j<3;j++) if(p[i][j]==p[i][j+1]) {p[i][j]+=p[i][j+1];p[i][j+1]=0;pts+=p[i][j];}
for(i=0;i<4;i++) for(j=0;j<3;j++) if(p[i][j]==0) {p[i][j]=p[i][j+1];p[i][j+1]=0;};
for(i=0;i<4;i++) for(j=2;j<3;j++) if(p[i][j]==p[i][j+1]) {p[i][j]+=p[i][j+1];p[i][j+1]=0;pts+=p[i][j];}
for(i=0;i<4;i++) for(j=0;j<3;j++) if(p[i][j]==0) {p[i][j]=p[i][j+1];p[i][j+1]=0;};
    for(i=0;i<4;i++) for(j=0;j<4;j++) if(p[i][j]!=b[i][j]) k++;
 if(k!=0) gen(p);
 else {q++;printf("Move not possible\n");}
}
  int main()
  {
      pt a[17];
  int p[4][4],i,j,k,t,f;
  for(i=0;i<4;i++) for(j=0;j<4;j++) p[i][j]=0;
    gen(p);
  for(i=0,j=0;;)
  {for(f=0,i=0;i<4;i++) for(j=0;j<4;j++) if(p[i][j]==2048) {f++;printf("You won\n");break;}; if(f==1) break;
    for(t=0,i=0;i<4;i++) for(j=0;j<4;j++) if(p[i][j]==0) {a[t].x=i;a[t].y=j;t++;};
    for(j=0;j<4;j++) for(i=0;i<3;i++) if(p[i][j]==p[i+1][j]) t++;
    for(j=0;j<4;j++) for(i=3;i>0;i--) if(p[i][j]==p[i-1][j]) t++;
    for(i=0;i<4;i++) for(j=3;j>0;j--) if(p[i][j]==p[i][j-1]) t++;
    for(i=0;i<4;i++) for(j=0;j<3;j++) if(p[i][j]==p[i][j+1]) t++;
    if(t>0){
            printf("Score:%d\n",pts);
    printf("\nEnter the direction you want to slide\n5->up\t2->down\t3->right\t1->left\t\n");
 scanf("%d",&k);
 if(k==5) up(p);
if(k==2) down(p);
if(k==3) right(p);
if(k==1) left(p);
  }
  else {printf("Game over\nYou lost\n");break;}
  }
return 0;
  }
