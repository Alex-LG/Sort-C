
unsigned pivotStrategy(unsigned left, unsigned right)
{
	return (left + right)/2;
}

int partition(int arr[], unsigned left, unsigned right)
{
	int pivot = arr[pivotStrategy(left,right)];

	int i = left - 1;
	int j = right + 1;

	while(1)
	{
		do j--; 
		while (arr[j] > pivot);
		
		do i++;
		while (arr[i] < pivot);

		if(i<j) swap(&arr[i], &arr[j]);
		else return j;   
	}
}

void quicksort(int arr[], unsigned left, unsigned right)
{
	if(left < right)
	{		
		int p = partition(arr, left, right);
		quicksort(arr, left, p);
		quicksort(arr, p + 1, right);
	}
} 
