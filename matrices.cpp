/* Algorithm to Add Two Matrices
Step 1: Input m1 and m2
Step 2: If the number of rows and number of columns of m1 and m2 are equal then execute step 3 else addition not possible 
Step 3: for i=1 to rows[m1] 
for j=1 to columns [m1]
 Input m1 [i,j] 
 Input m2 [i,j]
 m3 [i,j]= m1 [i,j] + m2 [i,j]; 
step 4: Display matrix 3 [i,j]; */

 #include <stdio.h> 
 int main() {
 	int mat1[2][2], mat2[2][2], sum[2][2], i, j;
 	for(i=0;i<2;i++)
	{
 		for(j=0;j<2;j++) 
		 {
 			scanf("%d",&mat1[i][j]);
 		    scanf("%d",&mat2[i][j]);
 	        sum[i][j]=mat1[i][j]+mat2[i][j]; } }
 	for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++){
 		printf("%d\t",sum[i][j]);	
		}
 	printf("\n"); }	
    }
