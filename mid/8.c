#include <stdio.h>

int main(void){
	//array
	int a[][5] =   {{1,2,3,4,5},
			{6,7,8,9,10},
			{11,12,13,14,15},
			{16,17,18,19,20},
			{21,22,23,24,25}};

	//row sum, row average, total sum
	double r_sum,  r_avg, t_sum  =0;
	//column sum, column average
	double c_sum[7], c_avg[7]={0};
	

	int i,j;

	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			r_sum+=a[i][j];		//calc sum
			r_avg=r_sum/5;	//calc row avg
			c_sum[i]+=a[j][i];	//calc column sum
			c_avg[i]=c_sum[i]/5;	//calc column avg
			printf("%7.2f",(double)( a[i][j]));
			
		}
		printf("%7.2f %7.2f", r_sum, r_avg);
		t_sum+=r_sum;	//calc total sum
		r_sum=0;	//initiallize


		printf("\n");	


	}
	//print
	for (i=0; i<5; i++)
		printf("%7.2f", c_sum[i]);
	printf("%7.2f\n", t_sum);
	for(i=0; i<5; i++)
		printf("%7.2f", c_avg[i]);
 	printf("        %7.2f\n", t_sum/25);
	
	

		

	return 0;
}
