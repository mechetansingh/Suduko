#include<iostream>
using namespace std;
#define n 9
void input(int sud[n][n],int i,int j)
{
  int x,y,z=1,a,b=1,c,d,e,f=1,num;
  x=j;
  y=i;
  printf("\nEnter the number Location(%d,%d)\n",i,j);
  scanf("%d",&num);
  for(a=0;a<n;a++)
    {
      if(num==sud[a][x])
        z=0;
        break;
    }
  for(a=0;a<n;a++)
    {
      if(num==sud[y][a])
        b=0;
        break;
    }
  c=i-i%3;
  d=j-j%3; // For 3x3 matrix
  for(a=0;a<3;a++)
  {
    for(e=0;e<3;e++)
    if(sud[a+c][e+d]==num)
    f=0;
  }
  if(z!=0&&b!=0&&f!=0)
      sud[i][j]=num;
  else
  {
  printf("\nYou Enterd Wrong Number,Try Again\n");
  input(sud,i,j);
  }
}
int main()
{
  int i,j;
  int sud[n][n]={ { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                  { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                  { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                  { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                  { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                  { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                  { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                  { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                  { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
  printf("\t\t\t\t\t\tWELCOME\n");
  printf("\t\t\t\tIn this program you will solve SUDUKO,Excited?\n");
  printf("\t\t\t\t\t\tLets Begin\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(sud[i][j]==0)
      {
        input(sud,i,j);
      }
    }
  }
  printf("\nCongratulations! You Just Completed it.\n");
  for(i=0;i<n;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d ",sud[i][j]);
  }
  return 0;
}
