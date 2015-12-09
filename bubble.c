
void bubblesort(int *arr, unsigned size)
{
	int i;
	int j;

    for (i = 0; i < size-1; i++) 
    {
        for (j = 0; j < size-i-1; j++) 
        {
            if ( arr[j] > arr[j+1] ) 
            	swap( &arr[j], &arr[j+1] );
        }
    }
} 
