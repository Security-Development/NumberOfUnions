#include <stdio.h>

struct clothe {
	int number; // 0 => 얼굴 || 1 => 상의 || 2 => 하의 || 3 => 신발 
	char *clothe;
};

int main() {
	clothe a[3] = {{2, "C의 바지"}, {1, "B의 잠옷"}, {0, "A의 립스틱"}};
	int index[4] = {0,};
	
	for(int i = 0; i < 3; i++) {
		index[a[i].number]+= 1;	
	}
	int result = 1;
	
	for(int i = 0; i < 3; i++) {
		if( index[i] != 0)
			result *= index[i] +1;
	}
	 printf("%d", result -1);
	
	 
}
