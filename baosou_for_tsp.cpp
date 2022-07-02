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


int distance(int x1, int y1, int x2,int  y2)
{
	
    int distance = abs(x1-x2) + abs(y1-y2);
    return distance;
}



int main()
{
	
	
	int ans =0;

	int i,j;
	

    srand(1);
    
    ans+=distance(7,0,waitsearch[0][0],waitsearch[0][1]);
	for (int yy=0;yy<13;yy++)
    {
    	//printf("%d\n",distance(waitsearch[yy][0],waitsearch[yy][1],waitsearch[yy+1][0],waitsearch[yy+1][1]));
    
		ans+=distance(waitsearch[yy][0],waitsearch[yy][1],waitsearch[yy+1][0],waitsearch[yy+1][1]);
		//printf("%d\n",ans);
	}
	//printf("%d\n",ans);
	int ans1=0;
	
    for(i=0; i<90000000; i++)

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
		//for(int rr=0;rr<14;rr++)
		//{
			
				//printf("%d    ",waitsearch[rr][0]);
				//printf("%d \n",waitsearch[rr][1]);
			
		//}
		
		}
		ans1=0;
		ans1+=distance(7,0,waitsearch[0][0],waitsearch[0][1]);
        //printf("%d\n",rand()%14);
		for (int y=0;y<13;y++)
    		{
    			
				ans1+=distance(waitsearch[y][0],waitsearch[y][1],waitsearch[y+1][0],waitsearch[y+1][1]);
				
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
		/*for(int rr=0;rr<14;rr++)
			{
			
			printf("%d",ansline[rr][0]);
			printf("%d",ansline[rr][0]);
			
			}*/	
		//printf("%d,   %d\n",i,ans);
		/*for(int rr=0;rr<14;rr++)
		{
			
				printf("%d    ",ansline[rr][0]);
				printf("%d \n",ansline[rr][1]);
				printf("\n") ;
			
		}*/
    }
	printf("%d\n",ans);
	for(int rr=0;rr<14;rr++)
		{
			
			printf("%d    ",ansline[rr][0]);
			printf("%d \n",ansline[rr][1]);
			printf("\n") ;
			
		}
	
	return 0;
} 
