#include <stdio.h>
2	
3	int row_sum(int row, int cols)
4	{
5	    int c;
6	    int sum = 0;
7	
8	    for (c = 1; c <= cols; c++)
9	        sum += row * c;
10	
11	    return sum;
12	}
13	
14	int total_sum(int rows, int cols)
15	{
16	    int r;
17	    int total = 0;
18	    int current = 0;
19	
20	    for (r = 1; r <= rows; r++)
21	    {
22	        total += row_sum(r, cols);
23	        current += total;
24	    }
25	
26	    return total;
27	}
28	
29	/* -- DO NOT Modify the code below this line -- */
30	
31	int main(void)
32	{
33	    printf("%d\n", total_sum(3, 3));
34	    return 0;
35	}