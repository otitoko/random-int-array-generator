#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int* createRandomArray(int array_size);


int main(){
	srand(time(NULL));
	
	int array_length;

	printf("Enter array size: ");
	scanf("%d", &array_length);

	int* arr = createRandomArray(array_length);

	

	for(int j = 0; j < array_length; j++){
		printf("%d\n",arr[j]);
	}

	return 0;
}

int* createRandomArray(int array_size) {
    int* array = (int*)malloc(array_size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % 101;
    }

    return array;
}
