#include <stdio.h> //stadard input output.headerfilevoid main() //void=비어있다, void main()=위의 함수에서 리턴값이 없다 {
    freopen("input.txt","r",stdin); // freopen=파일을 다시 오픈 하시오 , r=reader, stain=standard input    freopen("output.txt","w",stdout); //freopen=파일을 다시 오픈 하시오 , w=writer , stdout=standard output 
    int A, B; //A, B 를 정수형으로 선언한다 
    scanf("%d %d", &A, &B); //A, B 를 입력 
    printf("%d %d", A/B, A % B); // A/B한 값과 나머지를 그한다 }
