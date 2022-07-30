#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define N 1000
int main(){
	float x,y,displacement[N];
	int thita;
	float max=0, average=0;
	srand(time(0));
	for(int j=0; j<N; j++){
		x=y=0;
		for(int i=0; i<N;i++){
			thita = rand()%361;
			x+=cos(thita);
			y+=sin(thita);
		}
		displacement[j] = sqrt(x*x+y*y);
		max = (max > displacement[j]) ? max:displacement[j];
		average += displacement[j]; 
		printf("%.2f ",displacement[j]);
	}
	printf("\nMaximum displacement is %.2f", max);
	printf("\nAverage displacement is %.2f",average/1000);
	getchar();
	return 0;
}
