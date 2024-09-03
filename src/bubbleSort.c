#include <stdio.h>

void swap_position(int *n1, int *n2){
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void bubbleSort(int input_vector[], int n){
	int i, j;
	for(i=0; i < n-1; i++){
		for(j=0; j < n-i-1; j++){
			if(input_vector[j] < input_vector[j+1])
				swap_position(&input_vector[j], &input_vector[j+1]);
		}
	}
}

void printArray(int input_vector[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d ", input_vector[i]);
	}
	printf("\nEnd of sorting, greetings. \n");
}

int main(){
	int input_vector[] = {98, 87, 75, 12, 1, 5, 2};
	int n = sizeof(input_vector)/sizeof(input_vector[0]);

	bubbleSort(input_vector, n);
	printf("Sorted array = ");
	printArray(input_vector, n);
	printf("\n");
	
	return 0;
}