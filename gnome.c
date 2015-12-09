
void gnomesort(int *arr, unsigned size) 
{
    int i = 0;

    while(i < size) 
    {
        if(i == 0 || arr[i - 1] <= arr[i]) ++i;
        else 
	    {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            --i;
        }
    }
}
