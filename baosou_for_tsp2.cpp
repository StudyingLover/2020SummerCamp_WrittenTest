#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <string.h>
#include <cassert>   // assert()
#include <cmath>     // abs()
#include <iomanip>   // setiosflags(), setprecision()
using namespace std;
int waitsearch[14][2]
={
0,2,
0,0,
0,7,
1,4,
1,6,
2,1,
3,3,
3,6,
4,2,
5,4,
5,6,
6,2,
7,4,
7,7
};

int ansline[14][2]=
{
	0,2,
	0,0,
	0,7,
	1,4,
	1,6,
	2,1,
	3,3,
	3,6,
	4,2,
	5,4,
	5,6,
	6,2,
	7,4,
	7,7
};

int map[8][8]=
{
	1,0,2,0,0,0,0,2,
	0,0,0,0,3,0,1,0,
	0,1,0,0,0,0,0,0,
	0,0,0,1,0,0,2,0,
	0,0,2,0,0,0,0,0,
	0,0,0,0,1,0,3,0,
	0,0,3,0,0,0,0,0,
	0,0,0,0,2,0,0,1
};
bool maptag[8][8]=
{
	0,1,0,1,1,1,1,0,
	1,1,1,1,0,1,0,1,
	1,0,1,1,1,1,1,1,
	1,1,1,0,1,1,0,1,
	1,1,0,1,1,1,1,1,
	1,1,1,1,0,1,0,1,
	1,1,0,1,1,1,1,1,
	1,1,1,1,0,1,1,0
};

int check()
{
		
	for(int p=0;p<8;p++)
	{
		for(int q=0;q<8;q++)
		{
			if(maptag[p][q]==0)
			{
				return true;
			}
		}
	}
	return false;
}

struct data{
	int x;
	int y;
	int step;
};

int distance(int x1, int y1, int x2,int  y2)
{
	
    int distance = abs(x1-x2) + abs(y1-y2);
    return distance;
}


bool book[310][310];
int bfs(int x1,int y1,int x2,int y2)
{
	int i;
	int next[4][2]={1,0,0,1,-1,0,0,-1};
	               
	data A,B;
	queue<data>q;
	A.x=x1;
	A.y=y1;
	A.step=0;
	q.push(A);
	book[A.x][A.y]=1;
	while(!q.empty())
	{
		A=q.front();
		q.pop();
		if(A.x==x2&&A.y==y2)
			return A.step;
		for(i=0;i<4;i++)
		{
			B.x=A.x+next[i][0];
			B.y=A.y+next[i][1];
			B.step=A.step+1;
			if(B.x<0||B.x>300||B.y<0||B.y>300||book[B.x][B.y])
				continue;
			q.push(B);
			book[B.x][B.y]=1;
		}
	} 
}

void swap(int* p,int* q)
{
 int temp;
 temp = *p;
 *p = *q;
 *q = temp;
}


int main()
{
	
	
	double ans =0.000000000;

	int i,j;
	

    srand(1);
    
    ans+=distance(7,0,waitsearch[0][0],waitsearch[0][1]);
    //printf("ans=%f\n",ans);
	for (int yy=0;yy<13;yy++)
    {
    	//printf("distance=%d\n",distance(waitsearch[yy][0],waitsearch[yy][1],waitsearch[yy+1][0],waitsearch[yy+1][1]));
    
		ans+=distance(waitsearch[yy][0],waitsearch[yy][1],waitsearch[yy+1][0],waitsearch[yy+1][1])/(double)map[waitsearch[yy][0]][waitsearch[yy][1]];
		//printf("ans=%f\n",ans);
		//printf("realdistance=%f\n",(double)distance(waitsearch[yy][0],waitsearch[yy][1],waitsearch[yy+1][0],waitsearch[yy+1][1])/(double)map[waitsearch[yy][0]][waitsearch[yy][1]]);
	}
	//printf("%f\n",ans);
	double ans1=0;
	
    for(i=0; i<5; i++)

    {
    	int bbb=1;
    	while(bbb<=10)
    	{
		
    		int temp1=rand()%14;
    		int temp2=rand()%14;

		//printf("%d  %d\n",temp1,temp2);
		
			int temp3=waitsearch[temp1][0];
	    	waitsearch[temp1][0]=waitsearch[temp2][0];
	    	waitsearch[temp2][0]=temp3;
		
			int temp4=waitsearch[temp1][1];
			waitsearch[temp1][1]=waitsearch[temp2][1];
			waitsearch[temp2][1]=temp4;
			bbb+=1;
		/*for(int rr=0;rr<14;rr++)
			{
				printf("%d    ",waitsearch[rr][0]);
				printf("%d \n",waitsearch[rr][1]);
				
		    }
		printf("\n");*/
		}
		//ans1=0;
		ans1+=(double)distance(7,0,waitsearch[0][0],waitsearch[0][1]);
		//printf("ans1=%f   %d\n",ans1,i);
        //printf("%d\n",rand()%14);
		for (int y=0;y<13;y++)
    		{
    			
				ans1+=distance(waitsearch[y][0],waitsearch[y][1],waitsearch[y+1][0],waitsearch[y+1][1])/(double)map[waitsearch[y][0]][waitsearch[y][1]];
			}
			
		if(ans1<ans)
		{
			ans=ans1;
			for(int rr=0;rr<14;rr++)
				{
			
				ansline[rr][0]=waitsearch[rr][0];
				ansline[rr][1]=waitsearch[rr][1];
			
				}
		}
		
		//printf("ans1=%f\n",ans1);	
		//printf("%d,   %f\n",i,ans);
    }
	printf("%s",ans);
	/*for(int rr=0;rr<14;rr++)
		{
			
				printf("%d    ",waitsearch[rr][0]);
				printf("%d \n",waitsearch[rr][1]);
			
		}*/
	return 0;
} 
