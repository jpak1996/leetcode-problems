#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
 * Complete the function below.
 */
int reductionCost(int num_size, int* num) {

	if(num_size==1) {
		return num[0];
	}
	else {
		
		int newArray[num_size-1];
		newArray[0] = num[0]+num[1];
		for(int i=1; i<num_size-1; i++) {
			newArray[i] = num[i+1];
			
		}
		num = newArray;
		return reductionCost(num_size - 1, num);
	}
}

int main()
{
    printf("Size of array:");
    int size;
    scanf("%d",&size);
    printf("Numbers in array:");
    int i=0;
    int array[size];
    while(i<size) {
        scanf("%d",&array[i]);
        i+=1;
    }
    int res = reductionCost(size,array);
    printf("%d\n",res);
}
