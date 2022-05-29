 void bin_srch(int find, int arr, int n)
    {
        int s = 0;
        int e = n;
        while(s<=e)
        {
        int mid = e + s / 2;
        
        if (find == arr[mid])
        {
            return mid;
        }
        else if (find < arr[mid])
        {
            e = mid - 1;
        }
        else     

        
        {
            s = mid + 1;
        }
        }
    }
