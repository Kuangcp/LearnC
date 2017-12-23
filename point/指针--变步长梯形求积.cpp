#include<stdio.h>//main函数不存在
#include<math.h>
double ffs(s,b,eps,f)
double a,b,eps,(*f)();
{
	int n,k;
	double fa,fb,h,tl,p,s,x,t;
	fa=(*f)(a),fb=(*f)(b);
	n=1;h=b-a;
	tl=h*(fa+fb)/2.0;//计算小梯形的面积
	p=eps+1.0;
	while (p>=eps)
	{
		s=0.0;
		for (k=0;k<=n-1;k++)
		{
			x=a+(k+0.5)*h;
			s=s+(*f)(x);
		}
		t=(tl+h*s)/2.0;
		p=fabs(tl-t);
		tl=t;
		n=n+n;
		h=h/2.0;
	}
	return(t);
}
