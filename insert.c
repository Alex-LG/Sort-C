
void insertsort(int *arr, unsigned size)
{
	int i, j, tmp;

	for (i = 1; i < size; i++)
	{
	    tmp = arr[i];
	    for (j = i - 1; j >= 0; j--)
	    {
	        if (arr[j] < tmp)
	            break;

	        arr[j + 1] = arr[j];
	        arr[j] = tmp;
	    }
	}
}