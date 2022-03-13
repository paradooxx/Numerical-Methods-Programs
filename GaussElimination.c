#include <stdio.h>

int main()
{
    const int n = 3;;
    float a[5][5], x[5], sum = 0.0f, C;
    printf(" Enter the matrix: ");
     for(int i=1; i<=n; i++) {
      for(int j=1; j<=(n+1); j++) {
         scanf("%f", &a[i][j]);
      }
   }
    for(int j=1; j<=n; j++) {
      for(int i=1; i<=n; i++) {
         if(i!=j) {
            C=a[i][j]/a[j][j];
            for(int k=1; k<=n+1; k++) { 
               a[i][k]=a[i][k]-C*a[j][k];
            }
         }
      }
   }
    for(int i=1; i<=n; i++) {
      x[i]=a[i][n+1]/a[i][i];
      printf("Result: %f", x[i]);
   }
    return 0;
}
