/* In a magical room, there are R*C buckets arranged as a matrix. The maximum capacity of each bucket is M. 
Every second, exactly one ball falls into each bucket in the first row. If a bucket overflows, the overflowing balls will double and fall into the bucket below it at the same time). 
The number of balls in each bucket and the value of M are passed as the input. The program must print the number of seconds it takes to fill all buckets as the output.
Boundary Condition(s):
2<=R, C<=25
1<=M, Number of balls in each bucket <= 1000
Input Format:
The first line contains R and C separated by a space.
The next R lines, each contains C integer values separated by a space.
The (R+2)nd line contains M.
Output Format:
The first line contains the number of seconds it takes to fill all buckets.
Example Input/Output 1:
Input:
4 5
3 5 1 3 2
1 2 4 4 2
2 4 3 5 3
2 3 4 2 1
5
Output:
6
Explanation:
After 1 second, the number of balls in the 4'5 buckets become
4* 5 2* 4* 3*
1 4* 4 4 2
2 4 3 5 3
2 3 4 2 1
After 2 seconds, the number of balls in the 4*5 buckets become
5* 5 3* 5 4
1 5* 4 4 2
2 5* 3 5 3 
2 5* 4 2 1
After 3 seconds, the number of balls in the 4*5 buckets become
5 5 4* 5 5
3* 5 4 5* 2
2 5 3 5* 3
2 5 4 5* 1
After 4 seconds, the number of balls in the 4*5 buckets become
5 5 5* 5 5
5* 5 4 5 4
2 5 3 5 3
2 5 4 5 1
After 5 seconds, the number of balls in the 4*5 buckets become
5 5 5 5 5
5 5 5* 5 5 
5* 5 5* 5 5*
4* 5 4 5 1
After 6 seconds, the number of balls in the 4*5 buckets become
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
It takes 6 seconds to fill all buckets. So 6 is printed as the output.
Example Input/Output 2:
Input:
3 4
6 5 7 2
6 3 6 5
8 9 5 7
10
Output: 12
*/
#include <stdio.h>
#define MAX 25

void main() {
    int R, C, M, buckets[MAX][MAX], overflow, filled, seconds;
    scanf("%d %d", &R, &C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d",&buckets[i][j]);
        }
    }
    scanf("%d", &M);

    seconds = 0, filled = 0;

    while (filled < R*C) {
        for (int i = 0; i < C; i++) {
            buckets[0][i]++;
        }
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (buckets[i][j] > M) {
                    overflow = buckets[i][j] - M;
                    buckets[i][j] = M;
                    if (i + 1 < R) {
                        buckets[i][j] += 2 * overflow;
                    }
                }
            }
        }

        filled = 0;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (buckets[i][j] == M) {
                    filled++;
                }
            }
        }

        seconds++;
    }

    printf("%d", seconds);
}