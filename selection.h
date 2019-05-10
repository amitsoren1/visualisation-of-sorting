#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED

void selectionSort(int arr[], int n)
{
    int Delay = 2; //change this delay value for slower/faster visualization.

    ostringstream str2;
    str2<<Delay;
    string str1 = "Delay: ";
    string str3 = " ms";
    string str = str1 + str2.str() + str3;

    setviewport(0,0,1000,520,0);
    outtextxy(10,510,"SELECTION SORT");
    outtextxy(260,510,&str[0]);
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        setbar(min_idx,arr[min_idx],RED);
        delay(Delay);

        for (j = i+1; j < n; j++){

            setbar(j,arr[j],RED);
            delay(Delay);

            if (arr[j] < arr[min_idx])
            {
                setbar(min_idx,arr[min_idx],WHITE);
                delay(Delay);

                min_idx = j;

                setbar(min_idx,arr[min_idx],RED);
                delay(Delay);

            }
            else
               {

                   setbar(j,arr[j],WHITE);
                   delay(Delay);
               }

        }
        delport(i-1);
        setbar(i-1,arr[i-1],WHITE);
        delay(Delay);

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);

        delport(i);
        setbar(i,arr[i],GREEN);
        delay(Delay);
    }

        delport(i-1);
        setbar(i-1,arr[i-1],WHITE);
        clearviewport();
}
#endif // SELECTION_H_INCLUDED
