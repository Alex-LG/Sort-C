
void merge(int *arr, unsigned left, unsigned mid, unsigned right)
{
	int i1 = 0;
	int i2 = 0;

	int res[right - left];

	while( ((left+i1) < mid) && ((mid + i2) < right) )
	{
		if(arr[left + i1] < arr[mid + i2])
		{
			res[i1+i2] = arr[left + i1];
			i1+=1;
		}
		else
		{
			res[i1+i2] = arr[mid + i2];
			i2+=1;
		}

	}
	while( (left + i1) < mid )
	{
		res[i1+i2] = arr[left + i1];
		i1+=1;	
	}
	while( (mid + i2) < right )
	{
		res[i1+i2] = arr[mid + i2];
		i2+=1;
	}

	int i;

	for(i=0; i<i1+i2; ++i) arr[left+i] = res[i];
}

void mergesort(int *arr, unsigned left, unsigned right)
{
	if ( (left + 1) >= right ) return;

	unsigned mid = (unsigned) (left + right) / 2;

	mergesort(arr, left, mid);
	mergesort(arr, mid,  right);
	merge(arr, left, mid, right);
}


