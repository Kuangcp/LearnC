# include <stdio.h>//输入任意的数字：偶数折半，奇数乘三加一。处理后都能得到1

int run(int num, bool show)
{
	if (num < 1){
		return 0;
	}

	int temp;
	while(num != 1)
	{
		temp = num;
		if( num % 2 == 0)
		{
			num/=2;
			if(show)
			{
				printf("%10d / 2     =%10d\n", temp, num);
			}
			
		}else
		{
			num=(3*num + 1);
			if(show)
			{
				printf("%10d * 3 + 1 =%10d\n", temp, num);
			}
		}
	}
	return 0;
}

int main()
{
	for (int i = 0; i < 1000; i++)
	{
		printf("attemp %d \n", i);
		run(i, false);
	}
	return 0;
}