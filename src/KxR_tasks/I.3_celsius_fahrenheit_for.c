// сonvert temperature in cycle for

#include <stdio.h>
int main()
{
	int fahr;													/*type of variable*/
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)				/*variable 'fahr' range for 0 [-lower valuet] to 300 [-upper value] with step 20 */
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32)); /*output fahr variable [%d-int type],\n -jump to new line,celcius convert formula */
}
