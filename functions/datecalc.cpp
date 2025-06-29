
#include<stdio.h>


// struct DATECALC{
//     int day;
//     int month;
//     int year;
// };

// int isLeapYear(int y) {
//     if (y % 4 == 0) {
//         if (y % 100 == 0) {
//             if (y % 400 == 0)
//                 return 1;
//             else
//                 return 0;  
//         }
//         return 1; 
//     }
//     return 0;
// }


// int daysinmonth(int n, int y){
//     int A[12]={31,0,31,30,31,30,31,31,30,31,30,31};
//     if(isLeapYear(y)){
//         A[1] = 28;
//     }
    
// }


// int addday(int d){
//     if(d>daysinmonth)
//     return 0;
// }

// int main(){
//     int ad, am, ay;
//     struct DATECALC d;
//     printf("Enter the date: (DD-MM-YYYY): "); scanf("%d %d %d",&d.day, &d.month, &d.year);
//     printf("NO of days to add: "); scanf("%d", &ad);
//     printf("No of months to add: "); scanf("%d", &am);
//     printf("No of years to add: "); scanf("%d", &ay);


//     return 0;
// }


void matmul(int A[][10], int B[][10], int C[10][10], int r1, int c2){
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            C[i][j] = 0;
            for(int k = 0; k<r1; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
        
    }
}

int main(){
    int r1, c1, r2, c2, r3,c3;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter size of r and c of A: "); scanf("%d %d",&r1, &c1);
    printf("Enter size of r and c of B: "); scanf("%d %d",&r2, &c2);

    printf("Enter elems of a");
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c1; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    printf("Enter elems of B");
    for(int i = 0; i<r2; i++){
        for(int j = 0; j<c2; j++){
            scanf("%d", &B[i][j]);
        }
    }
    matmul(A,B,C,r1,c2);
    printf("resultant: ");
    for(int i = 0; i<r2; i++){
        for(int j = 0; j<c1; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}