#include <stdio.h>

int main() {
	//아스키코드:컴퓨터가 여러 정보를 인식할 수 있게끔
	//문자 및 특수기호를 숫자와 일대일대응 시켜 표현하게끔 한 약속
	char c = 'A';//문자형 변수 c에 'A'정보 저장
	printf("%c\n", c);//문자형 그대로 A가 나옴
	printf("%d\n", c);//아스키코드로 변환되어 숫자인 65가 나옴
}