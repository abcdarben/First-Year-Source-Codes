#include <stdio.h>

main() {

	int d, mil, rt;
	
	rt=20; mil=50;
	
	printf("DAY\t\tRATE\t\tMILES");
	
	for(d=1; mil<200; d++) {
	
		mil = (mil + rt) - 2;
		
		printf("\n %d\t\t%d\t\t%d", d, rt, mil);
		
		rt=rt-1;
	}
	
	d = d - 1;
	
	if(d < 13)
		printf("\n\nBareng reaches civilization on day %d.", d);
	else {
		printf("\n\nBareng dies on day %d.", d);
	}
	
	printf("\n\nEnd of Program!");
	
	return 0;

}