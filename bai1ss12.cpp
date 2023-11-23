#include <stdio.h>
	int minus(int a, int b){
        if(a>b){
		  return a-b;
     	}else{
		  return b-a;
    	}
	}
	int minus1(int b, int c){

	    if(b>c){
		  return  b-c;
	    }else{
		  return  c-b;
	    }
	}
 	int minus2(int a, int c){
	
	    if(a>c){
		  return  a-c;
	    }else{
		  return  c-a;
	    }
    }
	int sum(int a, int b){
	return b+a;
	}
	int sum1(int b, int c){
	return  b+c;
	}
 	int sum2(int a, int c){
	return  a+c;
    }
        
int main(){
	int a, b, c;
	printf("nhap vao 3 so");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b){
	    printf("cap 1: %d-%d = %d\n  ", a,b,minus(a,b));
    } else{
    	printf("Cap 1: %d-%d = %d\n",b,a,minus(a,b));
	}
	if(b>c){
		printf("cap 2: %d-%d = %d\n", b,c,minus1(b,c));
	}else{
		printf("cap 2: %d-%d = %d\n", c,b,minus1(b,c));
	}
	if(a>c){
		printf("cap 3: %d-%d = %d\n", a,c,minus2(a,c));
	}else{
		printf("cap 3: %d-%d = %d \n", c,a,minus2(a,c));
	}
    printf("cap 1: %d+%d = %d \n", a,b,sum(a,b));
    printf("cap 2: %d+%d = %d \n", b,c,sum1(b,c));
    printf("cap 3: %d+%d = %d \n", a,c,sum2(a,c)); 
}



