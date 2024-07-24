#include "Speed.h"
#include <iostream>
using namespace std;

int Speed_time_to_travel(int class_sydna, int speed_water, double distanse, double rezult_led)
{
	double rezult_speeed_water;
	if (rezult_led >= 19)
	{
		int time = ceil(distanse / speed_water);
		return time;
	}

	if (rezult_led < 19 && rezult_led >= 15)
	{
		if (class_sydna > 3 && class_sydna < 7)
		{
			rezult_speeed_water = speed_water * 0.8;
		}

		if (class_sydna >= 7 && class_sydna < 9)
		{
			rezult_speeed_water = speed_water * 0.6;
		}
	}

	if (rezult_led < 15 && rezult_led >= 10)
	{
		if (class_sydna > 3 && class_sydna < 7)
		{
			rezult_speeed_water = speed_water * 0.7;
		}

		if (class_sydna >= 7 && class_sydna < 9)
		{
			rezult_speeed_water = speed_water * 0.8;
		}
	}

	int time = ceil(distanse / rezult_speeed_water);
	return time;
}

//nomer_ledokola
// 0 -50лет победы бямал
//  1 Войгач, Таймыр

int Speed_ledocol(int nomer_ledokola, int speed_water, double distanse, double rezult_led)
{
	if (nomer_ledokola == 0)
	{
		if (rezult_led >= 19)
		{
			int time = ceil(distanse / speed_water);
			return time;
		}
		if (rezult_led < 19 && rezult_led >= 10)
		{
			int time = ceil(distanse / rezult_led);
			return time;
		}
	}

	if (nomer_ledokola == 1)
	{
		if (rezult_led >= 19)
		{
			int time = ceil(distanse / speed_water);
			return time;
		}
		if (rezult_led < 19 && rezult_led >= 15)
		{
			int time = ceil(distanse / speed_water * 0.9);
			return time;
		}
		if (rezult_led < 15 && rezult_led >= 10)
		{
			int time = ceil(distanse / speed_water * 0.75);
			return time;
		}
	}
}
