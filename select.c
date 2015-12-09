void selectsort(int* arr, unsigned size) 
{
    int min; 
    int i;
    int j;
    int pos;
    
    for(i = 0; i < size; ++i)
    { 
        pos = i; 
        min = arr[i];

        for(j = i + 1; j < size; ++j)
        {
            if (arr[j] < min) 
            {
               pos = j; 
               min = arr[j]; 
            }
        }
        arr[pos] = arr[i]; 
        arr[i] = min; 
    }
}