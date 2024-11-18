// 문제 설명: 임이의 숫자를 입력받아 홀수면 o, 짝수면 x를 이용해 사각형을 그리시오
// #include <stdio.h>

// int main(void){
//     int n;
//     char ch;

//     scanf("%d", &n);// 수 입력
// // 홀수면 o 짝수면 x를 ch에 대입(if 구문)
//     if (n % 2 == 1){
//         ch = 'o';
//     }
//     else {
//         ch = 'x';
//     }
// // 속이빈 사각형 출력
//     for (int i = 1; i <= n; i++){
//         for(int j = 1; j<= n; j++){
//             if (i == 1 || i == n || j ==1 || j == n){
//                 printf("%c", ch);
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     int n;
//     char ch;

//     scanf("%d", &n);// 수 입력
// // 홀수면 o 짝수면 x를 ch에 대입(삼항 연산자)
//     ch = (n % 2 == 1) ? 'o' : 'x';
// // 속이빈 사각형 출력
//     for (int i = 1; i <= n; i++){
//         for(int j = 1; j<= n; j++){
//             if (i == 1 || i == n || j ==1 || j == n){
//                 printf("%c", ch);
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 문제 번호: 10871
// 문제 설명: X보다 작은 수

// #include <stdio.h>

// int main() {
//     int n, m, num;

//     scanf("%d %d", &n, &m); // 수열의 크기, 기준 값 입력
// // 수열 입력, 크기 비교
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &num);
//         if (num < m) {
//             printf("%d ", num);
//         }
//     }

//     return 0;
// }
