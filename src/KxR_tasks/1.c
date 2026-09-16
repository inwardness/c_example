#include<stdio.h>
#include<math.h>

int main()
{	 
	float _1_8_waveLength;	float _1_4_waveLength;	float _3_8_waveLength;	float _1_2_waveLength;	float _5_8_waveLength;	float _3_4_waveLength;
	float _7_8_waveLength;
		float frequency; float waveLength; 	float velocity = 299792458.000;
	
	float inch = 25.4;

	float mm8 = (inch/8);	float mm4 = (inch/4);	float mm3_8 = ((inch/8)*3);	float mm2 = (inch/2);	float mm5_8 = ((inch/8)*5);	float mm3_4 = ((inch/4)*3);
	float mm7_8 = ((inch/8)*7 );

	float l1,l2,l3,l4,l5,l6,l7,l8,l9;
	puts("table of frenqucy and length in inch and mm");	printf("G-144-174Mhz model 3dB 5/8 wave mobile\n");

	

	printf("MHz\tInches\t\tmm\n");
	printf("144\t 48-1/8\"\t %.2f\n", l1 = 48.0*inch+mm8);
	printf("146\t 47-1/4\"\t %.2f\n", l1 = 47.0*inch+mm4);
	printf("148\t 46-3/8\"\t %.2f\n", l1 = 46.0*inch+mm3_4);
	printf("150\t 45-1/2\"\t %.2f\n", l1 = 42.0*inch+mm2);
	printf("152\t 44-7/8\"\t %.2f\n", l1 = 44.0*inch+mm7_8);
	printf("154\t 43-3/4\"\t %.2f\n", l1 = 43.0*inch+mm3_4);
	printf("156\t 42-7/8\"\t %.2f\n", l1 = 42.0*inch+mm7_8);
	printf("158\t 42-1/8\"\t %.2f\n", l1 = 42.0*inch+mm8);
	printf("160\t 41-1/4\"\t %.2f\n", l1 = 41.0*inch+mm4);
	printf("162\t 40-1/2\"\t %.2f\n", l1 = 40.0*inch+mm2);
	printf("164\t 39-1/2\"\t %.2f\n", l1 = 39.0*inch+mm2);
	printf("166\t 38-3/4\"\t %.2f\n", l1 = 39.0*inch+mm3_4);
	printf("168\t 38\"\t\t %.2f\n", l1 = 38.0*inch);
	printf("170\t 37-1/8\"\t %.2f\n", l1 = 37.0*inch+mm8);
	printf("172\t 36-3/8\"\t %.2f\n", l1 = 36.0*inch+mm3_8);
	printf("174\t 35-7/8\"\t %.2f\n", l1 = 35.0*inch+mm7_8);
	while (frequency!=EOF)
	{
		puts("Enter a value of frequency to compute a length rod:[xxx]MHz");
		scanf("%f",&frequency);
		frequency = frequency * (pow(10,6));
		printf("frequency:%f[Hz]\n\n",frequency);
		printf("velocity of ligth (velocity):%f[m/s]\n\n",velocity);
		printf("Length of wave (waveLength):[m] = velocity:%f[m/s]/frequency:%f[MHz(1/s)]\n\n",velocity,frequency);
		waveLength = velocity / frequency;
		printf("waveLength = %.2f [m] == %.2f[mm]\n\n",waveLength,waveLength*1000);
		printf("1/8_waveLength = %.2f [m] == %.2f[mm]\n", _1_8_waveLength = 1.0 * (waveLength/8.0),_1_8_waveLength = 1.0 * (waveLength/8.0) * 1000);
		printf("1/4_waveLength = %.2f [m] == %.2f[mm]\n",_1_4_waveLength = 1.0 * (waveLength/4.0),_1_4_waveLength = 1.0 * (waveLength/4.0) * 1000);
		printf("3/8_waveLength = %.2f [m] == %.2f[mm]\n",_3_8_waveLength = 3.0 * (waveLength/8.0),_3_8_waveLength = 3.0 * (waveLength/8.0) * 1000);
		printf("1/2_waveLength = %.2f [m] == %.2f[mm]\n",_1_2_waveLength = 1.0 * (waveLength/2.0),_1_2_waveLength = 1.0 * (waveLength/2.0) * 1000);
		printf("5/8_waveLength = %.2f [m] == %.2f[mm]\n",_5_8_waveLength = 5.0 * (waveLength/8.0),_5_8_waveLength = 5.0 * (waveLength/8.0) * 1000);
		printf("3/4_waveLength = %.2f [m] == %.2f[mm]\n",_3_4_waveLength = 3.0 * (waveLength/4.0),_3_4_waveLength = 3.0 * (waveLength/4.0) * 1000);
		printf("7/8_waveLength = %.2f [m] == %.2f[mm]\n",_7_8_waveLength = 7.0 * (waveLength/8.0),_7_8_waveLength = 7.0 * (waveLength/8.0) * 1000);
		printf("antenna full wave L = %.2fcm\n",(30653/frequency*1000000));
		printf("antenna q-wave L = %.2fcm\n",(7137/frequency*1000000));
		printf("antenna half-wave(more then 144MHz) L = %.2fcm\n",(14233/frequency*1000000));
		printf("antenna half-wave(from 50MHz to 144MHz) L = %.2fcm\n",(14030/frequency*1000000));
		printf("antenna half-wave(to 30MHz) L = %.2fcm\n",(14274/frequency*1000000));

	}
	
	
}