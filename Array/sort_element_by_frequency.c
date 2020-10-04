#include <stdio.h>
  #define MAX 256

  int main() {
        int input[MAX][2], output[MAX][2];
        int i, j, k = 0, n, temp, count;

        /* get the number of elements from the user */
        printf("Enter the number of elements:");
        scanf("%d", &n);

        /* get the array entries from the user */
        printf("Enter your array entries:\n");
        for (i = 0; i < n; i++) {
                printf("Data[%d]: ", i);
                scanf("%d", &input[i][0]);
                input[i][1] = 0;
        }


        /* store the unique elements and its frequency in output array */
        for (i = 0; i < n; i++) {
                if (input[i][1])
                        continue;
                count = 1;
                for (j = i + 1; j < n; j++) {
                        if (input[i][0] == input[j][0]) {
                                input[j][1] = 1;
                                count++;
                        }
                }

                output[k][0] = input[i][0];
                output[k][1] = count;
                k++;
        }

        n = k;

        /* print the data and its frequency in  output array */
        printf("Array Elements and its frequency:\n");
        printf(" Data   Frequency\n");
        for (i = 0; i < n; i++) {
                printf("   %d     %d \n", output[i][0], output[i][1]);
        }


        /* sort the data in output array based on frequencies */
        for (i = 0; i < n - 1; i++) {
                temp = output[i][1];
                for (j = i + 1; j < n; j++) {
                        if (temp < output[j][1]) {
                                temp = output[j][1];
                                output[j][1] = output[i][1];
                                output[i][1] = temp;

                                temp = output[j][0];
                                output[j][0] = output[i][0];
                                output[i][0] = temp;
                        }
                }
        }

        /* print the sorted data in output array */
        printf("\nSorted Array Elements based on their frequency:\n");
        printf(" Data   Frequency\n");
        for (i = 0; i < n; i++) {
                printf("   %d    %d    \n", output[i][0], output[i][1]);
        }
        return 0;
  }