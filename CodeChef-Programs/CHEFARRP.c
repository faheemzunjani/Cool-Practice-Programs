#include<stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    int n, i, sum, product, j;
    while(t--){
        int count = 0;
        scanf("%d", &n);
        int a[50];
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(i = 0 ; i < n; i++){
            sum =0;
            product = 1;
            for(j = i; j < n ; j++){
                sum += a[j];
                product *= a[j];
                if(sum == product){
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
} 