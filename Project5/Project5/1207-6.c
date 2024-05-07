//77527원 5만원권1장 1만원권 1장 5천원권1 천원 2장 5백원1개 100원 0
//50원 0개 10원 2개 5원 1개 1원 2개

#include<stdio.h>
main() {
	int m = 0, fm, om, fc, oc, fb, ob, fs, os, f, o;

	printf("금액을 지정해주세요. : ");
	scanf("%d", &m);
	
	fm = m / 50000;
	 m = m - (50000*fm);
	 om = m / 10000;
	 m = m - (10000 * om);
	 fc = m / 5000;
	 m = m - (5000 * fc);
	 oc = m / 1000;
	 m = m - (1000 * oc);
	 fb = m / 500;
	 m = m - (500 * fb);
	 ob = m / 100;
	 m = m - (100 * ob);
	 fs = m / 50;
	 m = m - (50 * fs);
	 os = m / 10;
	 m = m - (10 * os);
	 f = m / 5;
	 m = m - (5 * f);
	 o = m / 1;
	 m = m - (1 * o);
	 	
	printf(" 5만원권 %d장\n 1만원권 %d장\n 5천원권 %d장\n 천원권 %d장\n 5백원 %d개\n 백원 %d개\n 50원 %d개\n 10원 %d개\n 5원 %d개\n 1원 %d개\n", fm, om, fc, oc, fb, ob, fs, os, f, o);

	

}