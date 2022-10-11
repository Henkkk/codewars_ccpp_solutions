#include <stdio.h>
#include <math.h>

int solution(int number) {
	int three_multi = (number - 1)  / 3;
	int five_multi = (number - 1) / 5;

	float sum = 0;

	for (float x = 1; x <= three_multi; x++){
		if (fmod(3*x, 15) == 0){
			sum += (3 * x)/2;
		}
		else {
			sum += 3 * x;
		}
	}

	for (float y = 1; y <= five_multi; y++){
		if (fmod(5*y, 15) == 0){
			sum += (5 * y)/2;
		}
		else {
			sum += 5 * y;
		}
	}

	printf("This is the final sum: %.2f\n", sum);
	return sum;
}

int main(void){
	int answer = solution(20);
	return answer;
}
