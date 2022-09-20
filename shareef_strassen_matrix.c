3.	#include<stdio.h>
4.	int main(){
5.	  int a[2][2], b[2][2], c[2][2], i, j;
6.	  int m1, m2, m3, m4 , m5, m6, m7;
7.	 
8.	  printf("Enter the 4 elements of first matrix: ");
9.	  for(i = 0;i < 2; i++)
10.	      for(j = 0;j < 2; j++)
11.	           scanf("%d", &a[i][j]);
12.	 
13.	  printf("Enter the 4 elements of second matrix: ");
14.	  for(i = 0; i < 2; i++)
15.	      for(j = 0;j < 2; j++)
16.	           scanf("%d", &b[i][j]);
17.	 
18.	  printf("\nThe first matrix is\n");
19.	  for(i = 0; i < 2; i++){
20.	      printf("\n");
21.	      for(j = 0; j < 2; j++)
22.	           printf("%d\t", a[i][j]);
23.	  }
24.	 
25.	  printf("\nThe second matrix is\n");
26.	  for(i = 0;i < 2; i++){
27.	      printf("\n");
28.	      for(j = 0;j < 2; j++)
29.	           printf("%d\t", b[i][j]);
30.	  }
31.	 
32.	  m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
33.	  m2= (a[1][0] + a[1][1]) * b[0][0];
34.	  m3= a[0][0] * (b[0][1] - b[1][1]);
35.	  m4= a[1][1] * (b[1][0] - b[0][0]);
36.	  m5= (a[0][0] + a[0][1]) * b[1][1];
37.	  m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
38.	  m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
39.	 
40.	  c[0][0] = m1 + m4- m5 + m7;
41.	  c[0][1] = m3 + m5;
42.	  c[1][0] = m2 + m4;
43.	  c[1][1] = m1 - m2 + m3 + m6;
44.	 
45.	   printf("\nAfter multiplication using Strassen's algorithm \n");
46.	   for(i = 0; i < 2 ; i++){
47.	      printf("\n");
48.	      for(j = 0;j < 2; j++)
49.	           printf("%d\t", c[i][j]);
50.	   }
51.	 
52.	   return 0;
53.	}

