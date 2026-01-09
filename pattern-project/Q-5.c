#include<stdio.h>
#include<conio.h>
int main() {
	int i,j,space;
	
	for(i=5;i>=1;i--){
		for(space=1;space<i;space++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		for(j=4;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

//debug:
// i=5  5>=1  space=1  1<5  print:4 spaces  j=5  5<=5  print:5  j=4  4>=5 FALSE
// i=4  4>=1  space=1  1<4  print:3 spaces  j=4  4<=5  print:4 5  j=4  4>=4  print:4
// i=3  3>=1  space=1  1<3  print:2 spaces  j=3  3<=5  print:3 4 5  j=4  4>=3  print:4 3
// i=2  2>=1  space=1  1<2  print:1 space   j=2  2<=5  print:2 3 4 5  j=4  4>=2  print:4 3 2
// i=1  1>=1  space loop false  j=1  1<=5  print:1 2 3 4 5  j=4  4>=1  print:4 3 2 1
