// 교재 6page
#include <stdio.h>

// namespace  : 프로그램의 구성요소를 논리적으로 분리하기 위한 문법
//              이름 충돌등을 막을수 있다
//				C++, Java, C# 등의 대부분의 언어가 지원
//				C 언어에는 없는 문법

namespace Audio
{
	void init() { printf("Audio init\n");	}
}

namespace Video
{
	void init()	{ printf("Video init\n");	}

	// Video 관련 모든 함수, 구조체, 전역변수를 이 곳에서 작성.
}

int main()
{
	Video::init();
}
