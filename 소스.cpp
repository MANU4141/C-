

// 주석
// 설명 역할, 코드로 인식되지 않는다

int main() {
	
	// 자료형 (크기 단위 : byte), (1 byte = 8 bit),
	// (2**10 byte = 1kb), (2**10 kb = 1mb)... 1gb, 1tb
	// 정수형 : char(1), short(2), int(4), long(4), longlong(8)
	// 실수형 : float(4), double(8)
	// 정수형 실수형 단위는 byte

	int i = 0;

	// MSB(Most Significant Bit)

	// 1 바이트로 양수만 표현
	// 256가지 -> 0 ~ 255
	unsigned char c = 0;
	
	c = 0;
	//c = 255;
	c = -1;

	//1 바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	signed char c1 = 0; // 보통 아무것도 적지 않으면 signed 
	c1 = -1;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다




	return 0;
}