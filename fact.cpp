int fact(int num)
{
	inr res=1;
	for (int i=2; i<=num; i++)
	{
		res*=i;
	}
	return res;
}