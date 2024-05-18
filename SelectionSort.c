/*

    Enter the number of elements: 5

    Enter the elements: 4 3 2 1 5

    1 2 3 4 5 



*/



#include <stdio.h>
#define MAX 20
int main() {
    
    int a[MAX],t,n;
    
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    printf("\nEnter the elements: ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
    for(int i=0; i<n-1; i++){
        
        for(int j=i+1; j<n; j++){
            
            
            if(a[i] > a[j]){
                
                t = a[i];
                a[i] = a[j];
                a[j] = t;
                
                
            }
            
            
        }
    }
    
    printf("\n");
     for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    
    

    return 0;
}
