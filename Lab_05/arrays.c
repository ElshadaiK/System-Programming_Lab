#include <stdio.h>
#include <stdbool.h>
#define ARRAYSIZE 10;
void swap(int *ptr1, int *ptr2);
void sort(int arr[], int n);
void repeated();
void rowColCount();
int main() {
    // 1
    int j = ARRAYSIZE;
    
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};

    float maxage = age[0];
    int person;

    // for (person=1; person < ARRAYSIZE) {
        
    //     if (age[person] > maxage ) maxage=age[person];

    //     person++;

    // }

    // 2
    // float age[10];
    // for(int count = 0; count < ARRAYSIZE){
    //     printf("Enter %d array element: ", count);
    //     scanf("%f", &age[count]);
    //     count++;
    // }

    // 3
    for (person=j-1; person >= 0; person--) {
        
        if (age[person] > maxage ) maxage=age[person];

        
    }

    // 4
    float average = 0;
    // for (int i=0; i <= ARRAYSIZE) {
    //     average += age[i];
    //     i++;
    // }
    

    // 5
    int i = 0;
    while (i< j)
    {
        average += age[i];
        i++;
    }
    average = average/ARRAYSIZE;
    

    // 6
    swap(&age[2], &age[7]);
    
    printf("%d\n", age[2]);

    // Sort
    sort(age, j);

    // Repeated
    repeated();

    // Row and column sums
    rowColCount();


    printf("\nThe maximum age is = %d \n", age[j-1]) ;
    printf("\nThe average age is = %f \n", average) ;

    return 0;
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
void printer(int arr[]){
    printf("Digit: \t\t\t");
    for(int loop = 0; loop < 10; loop++) printf("%d ", loop);
    
    printf("\nOccurances: \t\t");
    for(int count = 0; count < 10; count++) printf("%d ", arr[count]);
    
}
void repeated(){
    int n;
    printf("Enter the digit element: ");
    scanf("%d", &n);
    int digit_seen[10] = { 0 };
    int rem;
    while(n > 0){
        rem = n%10;
        digit_seen[rem] += 1;
        // if (digit_seen[rem]){
        //     printf("Last repeated digit is %d", rem);
        //     return;
        // }
        // else{
        //     digit_seen[rem] += 1;
        // }
        n /= 10;
    }
    // printf("No digit repeated");
    printer(digit_seen);
    printf("\n");
    return;
}
void rowColCount(){
    int disp[2][3];
    int i, j;
    int row[2];
    int col[3];
    for(i=0; i<2; i++) {
        int rSum = 0;
        int cSum = 0;
        for(j=0;j<3;j++) {
            printf("Enter value for disp[%d][%d]:", i, j);
            scanf("%d", &disp[i][j]);
            row[i] += disp[i][j];
            col[j] += disp[i][j];
        }      
    }
    printf("Two Dimensional array elements:\n");
    for(i=0; i<2; i++) {
        printf("Row %d => \t\t", i);
        for(j=0;j<3;j++) {
            printf("%d \t", disp[i][j]);
            if(j==2){
            printf("\t = %d \n", row[i]);
            }
        }
    }
    printf("\nCol sum: \t\t");
    for(j=0; j<3; j++) {
        printf("%d \t", col[j]);

    }
    printf("\n");
}