#include <stdio.h>
#include <stdlib.h>

int main() {
	//Var
	int N,M,X,r,c;
	//User Input
	printf("Enter the number of rows: ");
	scanf("%d",&N);
	printf("Enter the number of columns: ");
	scanf("%d",&M);
	//code Array
	int numbers[N][M];
	//Print numbers Array
	for (r=0; r<N; r++){
		for (c=0; c<M; c++){
			int random =  rand() % 10;
			numbers[r][c] = random;
			printf("%d ",numbers[r][c]);
		}
		printf("\n");
	}
	
	//Search for X
	printf("Enter the number 'x' that you want to search for: ");
	scanf("%d",&X);
	// If FOund
	for (r=0; r<N; r++){ 
		for (c=0; c<M; c++){
			if (X == numbers[r][c]) {
				printf("\nFound the number %d in the array",X);
				break;
			} 
		}
		if (X == numbers[r][c]) {
				break;
			}
	}
	// If didn't Find
	if (r==N) {
		printf("\nDidn't Found the number %d in the array ", X);
	}
	
	return 0;	
}
