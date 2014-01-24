
 
#include <stdio.h>

int main (int argc, const char * argv[]) {
	
	long numOfStudents;
	

	double total;
	

	double exchange;
	

	double equalizedAmount;
	
	
	double diff;
	

	double negativeSum;
	

	double positiveSum;
	
	
	int i;
	
	while(scanf("%ld", &numOfStudents) != EOF) {
				
		/* 0, ends the program */
		if (!numOfStudents) {
			return 0;
		}
		
		/* keeps the amount of money spent by each student */
		double amountSpent[numOfStudents];		
		
		/* clean */
		total = 0;
		negativeSum = 0;
		positiveSum = 0;
				
		for (i = 0; i < numOfStudents; i++) {
			scanf("%lf\n", &amountSpent[i]);
			total += amountSpent[i];
		}
				
		equalizedAmount = total / numOfStudents;
		
		for (i = 0; i < numOfStudents; i++) {
			/* to ensure 0.01 precision */
			diff = (double) (long) ((amountSpent[i] - equalizedAmount) * 100.0) / 100.0;
			
			if (diff < 0) {
				negativeSum += diff;
			} else { 
				positiveSum += diff;
			}
		}

		/* when the total amount is even, these sums do not differ. otherwise, they differ in one cent */
		exchange = (-negativeSum > positiveSum) ? -negativeSum : positiveSum;
						
		/* output result */
		printf("$%.2lf\n", exchange);
	}

    return 0;
}
