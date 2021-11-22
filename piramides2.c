#include<stdio.h>




int main(){

        int i,j;
        int n;
        scanf("%d",&n);
             
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++)
                    printf(" ");
                    printf("\n");
                      for(j=1;j<=i;j++)
                        printf("%3.2d",i);
                        printf("\n");

                    }
              printf("\n");

              for(i=1;i<=n;i++){
                for(j=1;j<=n;j++)
                    printf(" ");
                    printf("\n");
                      for(j=1;j<=i;j++)
                        printf("%3.2d",j);
                        printf("\n"); 
                    }
                    
			printf("\n"); 
return 0;
}
