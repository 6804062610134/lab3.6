#include <stdio.h>


int main(){ 
int score;
scanf("%d",&score);
if (score>100){
	printf("Error\n");
}
else if (score>=87){
	printf("A\n");}
else if (score>=79){
    printf("B\n");}
else if (score>=71){
	printf("C:B lack of point to %d\n ",79-score);}
else if (score>=63) {
		printf("D\n");
	}
else if (score<0){
	printf("Error\n");
}

 else{
	printf("F\n");
}



return 0;
}
