/*
There are R robots in R rows (ie. one robot in each row). There are 2 types of robots which are given below.
Type 1: The robots start moving towards the East. Once it reaches the end of the row, it again starts moving towards the West.
Similarly, the type 1 robots move in the direction East-West alternatively.
Type 2: The robots start moving towards the West. Once it reaches the end of the row, it again starts moving towards the East.
Similarly, the type 2 robots move in the direction West-East alternatively.
The speed of each robot is 1 metre per second. The length of each row is C meters. The initial state of the robot is passed as the 
input. The program must print the state of the robots after T seconds.

Boundary Condition(s):
2 <= R, C <= 50
1 <= T <= 10^4

Input Format:
The first line contains R and C separated by space.
The next R lines, each contains C integers separated by a space
The (R+2)nd line contains T

Output Format:
The first R lines, each contains C integers separated by a space

Example Input / Output 1:
Input:
5 6
0 0 0 0 1 0
0 0 2 0 0 0 
0 0 0 2 0 0
1 0 0 0 0 0
0 0 0 0 0 2
3

Output:
0 0 0 1 0 0
0 2 0 0 0 0
2 0 0 0 0 0
0 0 0 1 0 0
0 0 2 0 0 0

Explanation:
Here R = 5, C = 6 and T = 3
0 indicates empty space.
1 indicates the position of the type 1 robot
2 indicates the position of the type 2 robot
After 1 second, the state of robots is given below.
0 0 0 0 0 1
0 2 0 0 0 0
0 0 2 0 0 0
0 1 0 0 0 0
0 0 0 0 2 0
After 2 seconds, the state of robots is given below.
0 0 0 0 1 0
2 0 0 0 0 0
0 2 0 0 0 0
0 0 1 0 0 0
0 0 0 2 0 0
After 3 seconds, the state of robots is given below.
0 0 0 1 0 0
0 2 0 0 0 0
2 0 0 0 0 0
0 0 0 1 0 0
0 0 2 0 0 0

Example Input / Output 2:
Input:
4 4
1 0 0 0
0 1 0 0
0 0 2 0
0 0 0 2
5

Output:
0 1 0 0
1 0 0 0
0 0 0 2
0 0 2 0
*/