// 백준 문제 번호: 1330
// 문제 설명: 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

// #include <stdio.h>
// int main(void){
//     int a,b;

//     scanf("%d %d", &a, &b);
    
//     if (a>b)
//     {
//         printf(">\n");
//     }

//     else if (a<b)
//     {
//         printf("<\n");
//     }
//     else
//     {
//         printf("==\n");
//     }

//     return 0;
// }

// 백준 문제 번호: 2753
// 문제 설명: 윤년 계산 
//
// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d", &a);
//     printf("%d\n", ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) ? 1 : 0); 
//   	return 0;
// }

// #include <stdio.h>

// int main(void){
//     int a;
//     scanf("%d", &a);
//     if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
//         printf("1");
//     }

//     else{
//         printf("0");
//     }

//     return 0;
// }

// 백준 문제 번호: 9498
// 문제 설명: 시험 성적

// #include <stdio.h>

// int main(void){
//     int num1;
//     scanf("%d", &num1);
//     if (num1 > 89){
//         printf("A");
//     }
//     else if (num1 > 79){
//         printf("B");
//     }
//     else if (num1 > 69){
//         printf("C");
//     }
//     else if (num1 > 59){
//         printf("D");
//     }
//     else{
//         printf("F");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     int num1;
//     scanf("%d", &num1);

//     switch (num1/10) {
//         case 9:
//             printf("A");
//         break;
//         case 8:
//             printf("B");
//         break;
//         case 7:
//             printf("C");
//         break;
//         case 6:
//             printf("D");
//         break;
//         default:
//             printf("F");
//         break;
//     }
    
//     return 0;
// }