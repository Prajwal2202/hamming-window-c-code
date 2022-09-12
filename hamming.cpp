



#include <stdio.h>
#define len 150
#define order 9
extern float h1[];
extern float x[];
float y[len]={0};
void main()

{int i,j,m;
float x_buff[order]={0};
for(i=0;i<len;i++)
{
y[i]=0;
x_buff[0]=x[i];
for(j=0;j<=order;j++)
{
y[i]+=h1[j]*x_buff[j];
}
for(j=order;j>0;j--)
x_buff[j]=x_buff[j-1];
}
m=0;
}
