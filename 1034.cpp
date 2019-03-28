#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
 	int sum = 0;
	for(int i=0;i<=n/50;++i){
		
		sum += (n - 50 * i)/20 +1;
	}
	printf("%d\n", sum);

	return 0;
}
