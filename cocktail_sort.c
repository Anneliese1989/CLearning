function cocktail_sort(list, list_length) // the first element of list has index 0
{
    bottom = 0;
    top = list_length - 1;
    swapped = true;
    bound = 0; //优化循环次数，记录已经排序的边界，减少循环次数
     
while(swapped) // if no elements have been swapped, then the list is sorted
    {
        swapped = false;
        for(i = bottom; i < top; i = i + 1)
        {
            if(list[i] > list[i+1]) // test whether the two elements are in the correct order
            {
                 
swap(list[i], list[i+1]); // let the two elements change places
                swapped = true;
                bound = i;
            }
        }
        // decreases top the because the element with the largest value in the unsorted
        // part of the list is now on the position top
        //top = top - 1;
        top = bound;
        for(i = top; i > bottom; i = i - 1)
        {
            if(list[i] < list[i-1])
            {
                swap(list[i], list[i-1]);
                swapped = true;
                bound = i;
            }
        }
        // increases bottom because the element with the smallest value in the unsorted
        // part of the list is now on the position bottom
        //bottom = bottom + 1;
        bottom = bound;
    }
}
