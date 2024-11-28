// 문제 번호: 11654
// 문제 설명: 아스키 코드

// #include <stdio.h>

// int main(void)
// {
//     char ch;
    
//     scanf("%c", &ch);
    
//     printf("%d", ch);

//     return 0;
// }

// 문제 번호: 1978
// 문제 설명: 소수 찾기

// #include <stdio.h>

// int main(void) {
//     int a, count = 0;

//     scanf("%d", &a); // 입력받을 수의 개수

//     for(int i = 0; i < a; i++) {
//         int num;
//         scanf("%d", &num);
// // 1보다 큰 소수 판별하기
//         if(num > 1) {
//             int prime = 1;

//             for(int j = 2; j < num; j++) { // 2부터 num-1까지 나눠서 소수 판별하기
//                 if(num % j == 0) { // 나누어 떨어지면 소수가 아님
//                     prime = 0; // 소수가 아님을 표시한다
//                     break;
//                 }
//             }
//             if(prime) {
//                 count++; // 소수이면 카운트 증가 
//             }
//         }
//     }

//     printf("%d\n", count); // 소수의 개수 출력

//     return 0;
// }

