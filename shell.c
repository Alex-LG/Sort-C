
void shellsort(int *arr, unsigned size)
{
	int i; 
	int j; 
	int k;
	int t;

	for(k = size/2; k > 0; k /=2)
	{
		for(i = k; i < size; i+=1)
		{
		    t = arr[i];
		    for(j = i; j>=k; j-=k)
		    {
				if(t < arr[j-k]) arr[j] = arr[j-k];
				else break;
		    }
		    arr[j] = t;
		}
	}
}
