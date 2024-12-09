#define   _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cmath>
int main()
{
	double s, s1, s2, v1, v2, t1, t2, p;
	double a, b;
	scanf("%lf%lf%lf", &s, &v1, &v2);
	s1 = 0;
	s2 = s;
	do
	{
		p = (s1 + s2) / 2.0;
		a = p / v2;
		b = (p - a * v1) / (v1 + v2);
		t1 = a + (s - p) / v1;
		t2 = a + b + (s - (a + b) * v1) / v2;
		if (t1 < t2)
			s2 = p;
		else
			s1 = p;
	} while (fabs(t1 - t2) > 1e-8);
	printf("%.6lf", t1);
	return 0;
}