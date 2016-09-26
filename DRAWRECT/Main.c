#include <stdio.h>

int main()
{
	int loop;
	int i = 0;
	int left[3]={0,};
	int right[3]={0,};
	int CheckLeft=0;
	int CheckRight=0;

	scanf("%d", &loop);
	
	while(loop--)
	{
		scanf("%d %d",&left[0], &right[0]);
		scanf("%d %d", &left[1], &right[1]);
		scanf("%d %d", &left[2], &right[2]);

		CheckLeft=left[0];
		if(CheckLeft==left[1])CheckLeft=left[2];
		else if(CheckLeft==left[2])CheckLeft=left[1];

		CheckRight=right[0];
		if(CheckRight==right[1])CheckRight=right[2];
		else if(CheckRight==right[2])CheckRight=right[1];

		printf("%d %d\n",CheckLeft,CheckRight);
	}

	return 0;
}
