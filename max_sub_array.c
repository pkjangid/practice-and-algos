#include<stdio.h>



int main()
{
	// Brute force approach 
    int num[] = {-3, 1, -8, 4, -1, 2, 1, -5, 5};
    int start, end, maxSumArray, currentArraySum, n;
    
    maxSumArray = 0;
    start = 0;
    end = 0;
    n = sizeof(num) / sizeof(int);

    for (int i = 0; i < n; i++ ) {
    	currentArraySum = 0;
    	for (int j = i; j < n; j++) {
    		currentArraySum = currentArraySum + num[j];

    		if (maxSumArray < currentArraySum) {
    			maxSumArray = currentArraySum;
    			start = i;
    			end = j;
    		}
    	}
    }

    printf("\nFound maximun sub array with Brute Force between %d and %d\n", start, end);

	// kadane's Algorithm
    for (int i = 0; i < n; i++) {
    	if (num[i] > currentArraySum + num[i]) {
    		currentArraySum = num[i];
    		start = i;
    	} else {
    		currentArraySum = currentArraySum + num[i]; 
    	}

    	if (currentArraySum > maxSumArray) {
    		maxSumArray = currentArraySum;
    		end = i;
    	}
    }

    printf("Found maximun sub array with kadane's between %d and %d\n\n", start, end);
	return 0;
}