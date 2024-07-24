#include "marhryt.h"
#include <iostream>
#include <vector>
using namespace std;

pair<double, double> pobeda_karsko3(vector < vector <double> >& a) {

	double distanse = 26 * 30;
	double rezult_led = (a[68][48] + a[69][49] + a[69][50] + a[70][51] + a[71][52] + a[72][53] + a[73][54] + a[74][55] +
		a[75][55] + a[76][55] + a[77][55] + a[78][55] + a[79][55] + a[80][55] + a[81][55] + a[82][55] + a[83][55] + a[84][55] +
		a[85][55] + a[86][55] + a[87][55] + a[88][55] + a[89][55] + a[90][55] + a[91][55] + a[92][56]) / 26;

	return pair<double, double>(distanse, rezult_led);
}

pair<double, double> pobeda_mysgelaniy(vector < vector <double> >& a) {

	double distanse = 16 * 30;
	double rezult_led = (a[77][43] + a[77][44] + a[78][44] + a[79][45] +
		a[79][46] + a[78][47] + a[77][46] + a[76][46] + a[75][46] +
		a[74][46] + a[73][46] + a[72][46] + a[71][46] + a[70][46] +
		a[69][46] + a[68][46]) / 16;

	return pair<double, double>(distanse, rezult_led);
}

pair<double, double> pobeda_karskievorota(vector < vector <double> >& a) {

	double distanse = 19 * 30;
	double rezult_led = (a[66][47] + a[65][47] + a[64][46] + a[63][46] + a[62][46] +
		a[61][46] + a[60][46] + a[59][47] + a[58][48] + a[57][49] + a[56][50] +
		a[55][51] + a[54][52] + a[53][53] + a[52][53] + a[51][53] + a[50][53] +
		a[49][54] + a[48][54]) / 19;

	return pair<double, double>(distanse, rezult_led);
}

pair<double, double> karsko3_mysgelaniy(vector < vector <double> >& a) {

	double distanse = 15 * 30;
	double rezult_led = (a[91][55] + a[90][54] + a[89][53] + a[88][52] + a[87][51] + a[86][50] +
		a[85][49] + a[84][48] + a[83][47] + a[82][46] + a[81][45] + a[80][44] + a[79][44] +
		a[78][44] + a[77][43]) / 15;

	return pair<double, double>(distanse, rezult_led);
}

pair<double, double> karsko3_taimyr(vector < vector <double> >& a) {

	double distanse = 10 * 30;
	double rezult_led = (a[93][57] + a[94][57] + a[95][57] +
		a[96][57] + a[97][58] + a[98][58] + a[99][58] +
		a[100][59] + a[101][58] + a[102][58]) / 10;

	return pair<double, double>(distanse, rezult_led);
}

pair<double, double> karsko3_valnitckogo(vector < vector <double> >& a) {

	double distanse = 14 * 30;
	double rezult_led = (a[93][57] + a[94][57] + a[95][57] +
		a[96][57] + a[97][58] + a[98][58] + a[99][58] + a[100][57] + a[101][57] +
		a[102][57] + a[103][57] + a[104][56] + a[104][55] + a[105][54]) / 14;

	return pair<double, double>(distanse, rezult_led);
}