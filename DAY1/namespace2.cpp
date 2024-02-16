
#include <stdio.h>

namespace Audio
{
	void init() { printf("Audio init\n");	}
}

namespace Video
{
	void init()	{ printf("Video init\n");	}
}

// global namespace : 어떠한 이름공간에도 포함되지 않은 공간
void init()	{ printf("global init\n");	}

//using Video::init; 

int main()
{
	// namespace 안에 요소에 접근하는 3가지 방법
	// 1. 완전한 이름을 사용한 접근(qualified name)
	Video::init();

	// 2. using declaration(선언) 사용
	using Video::init;  // init 은 Video:: 없이 사용하게 해달라.
	init();
	::init(); // global 공간에 있는 함수를 호출해달라는 것.

	// 3. using directive(지시어)
	using namespace Video; // Video 의 모든 요소를 Video:: 없이 사용
	init();

}
