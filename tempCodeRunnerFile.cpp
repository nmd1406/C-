void Try1(int i = 1)
{
        for(int j = 0; j <= 1; ++j)
        {
                arr[i] = j;
                if(i == n)
                        Result();
                else
                        Try1(i + 1);
        }
}

void Try2(int i = 1)
{
        for(int j = arr[i - 1] + 1; j <= n - k + i; ++j)
        {
                arr[i] = j;
                if(i == n)
                        Result();
                else
                        Try2(i + 1);
        }
}

void Try3(int i = 1)
{
        for(int j = 1; j <= n; ++j)
        {
                if(unused[j] == 1)
                {
                        arr[i] = j;
                        unused[j] = 0;
                        if(i == n)
                                Result();
                        else
                                Try3(i + 1);
                        
                        unused[j] = 1;
                }

        }
}

void Sinh1()
{
        int i = n;
        while(i >= 1 && arr[i] == 1)
        {
                arr[i] = 0;
                --i;
        }
        if(i == 0)
                Result();
        else
                arr[i] = 1;
}

void Sinh2()
{
        int i = k;
        while(i >= 1 && arr[i] == n - k + i)
                --i;

        if(i == 0)
                Result();
        else
        {
                arr[i]++;
                for(int j = i + 1; j <= k; ++j)
                        arr[j] = arr[j - 1] + 1;
        }
}

void Sinh3()
{
        int i = n - 1;
        while(i >= 1 && arr[i] > arr[i + 1])
                --i;

        if(i == 0)
                Result();
        else
        {
                int j = n;
                while(arr[i] > arr[j])
                        --j;

                swap(arr[i], arr[j]);
                int left = i + 1;
                int right = n;
                while(l < r)
                {
                        swap(arr[l], arr[r]);
                        l++;
                        r--;
                }
        }
}