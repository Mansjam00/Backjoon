// 문제 설명 : 구구단

// #include <stdio.h>

// int main(void){
//     for(int i = 1; i <= 9; i++){// 1에서 9까지 곱하는수 
//         for(int j = 2; j <= 9; j++){ // 2단에서 9단까지 수
//             printf("%d * %d = %d\t", j, i, j*i); // 출력
//         }
//         printf("\n"); //개행
//     }
//     return 0;
// }

// 백준 문제 번호: 2747 
// 문제 설명: 피보나치 수

// #include <stdio.h>

// int main()
// {
//     int a = 0, b = 1, n;

//     scanf("%d", &n);// 몇번째 수를 출력하는지 입력받기

//     if (n == 0) { // 입력 받은 수가 0일땐 0출력
//         printf("%d", a);
//     }
//     else if (n == 1) { // 입력 받은 수가 1일때 일때 1출력
//         printf("%d", b);
//     }
//     else {
//         for (int i = 2; i <= n; i++) { // 피보나치 수 작동          
//             int next = a + b;
//             a = b;
//             b = next;
//         }
//         printf("%d", b); // 수 출력
//     }
//     return 0;
// }
