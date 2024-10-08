// 백준 문제 번호: 2442
// 문제 설명: 별 찍기

// #include <stdio.h>

// int main(void){
//     int num;
//     int i, j; 

//     scanf("%d", &num); // 높이 입력

//     for(i=0; i < num; i++){ //  입력 받은 높이 보다 작게 0부터 증가
//         for(j = num-1; j > i; j--){// 입력받은 높이보다 -1해서 그 값이 위에 받은 i 값보다 크게해서 감소
//         printf(" ");// 공백 출력
//     }
// // 피라미드 생성
//     for(j = 0; j < 2 * i+1; j++){// 0부터 증가 받은 i 값에 더하기 1한거에 2배보다 작게해서 증가 
//         printf("*");
//     }
//         printf("\n"); // 개행처리
//     }
//     return 0;
// }

// 백준 문제 번호: 2444
// 문제 설명: 별 찍기

// #include <stdio.h>

// int main(void)
// {// 피라미드 출력
//     int num;
//     scanf("%d",&num);
//     for(int i=0; i<num; i++)
//     {
//         for(int k=i; k<(num-1); k++)
//         {
//             printf(" ");
//         }
//         for(int k=0; k<=(i*2); k++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }
//     // 역 피라미드 출력
//     for(int i=(num-2); i>=0; i--)
//     {
//         for(int k=i; k<(num-1); k++)
//         {
//             printf(" ");
//         }
//         for(int k=0; k<=(i*2); k++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }
//     return 0;
// }