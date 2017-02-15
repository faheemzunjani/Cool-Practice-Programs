#include <stdio.h>
#include <stdlib.h>
#define SIZE 1001
 
int main(void){
    int i, j;
    int n, x1, x2, y1, y2, cost = 0;
    long long total_cost = 0;
    int arr[SIZE][SIZE] = {0};

        scanf("%d", &n);
 
        while(n--){
 
            scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
            scanf("%d", &cost);
 
            for(i = x1; i <= x2; i++){
                for(j = y1; j <= y2; j++){
                    if(arr[i][j] == 0)
                        arr[i][j] += cost;
 
                    else if(arr[i][j] > 0)
                        arr[i][j] = (-1)*(arr[i][j] + cost);
 
                    else if(arr[i][j] < 0)
                        arr[i][j] = arr[i][j] - cost;
                }
            }
        }
 
        for(i = 1; i < SIZE; i++){
            for(j = 1; j < SIZE; j++){
                if(arr[i][j] < 0)
                    total_cost += arr[i][j];
            }
        }
    
        printf("%lld\n", (-1) * total_cost);
 
    return 0;
}