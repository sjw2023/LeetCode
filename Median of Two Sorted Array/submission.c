

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    //merge
    //make mergedArr with length of m + n
    int m = nums2Size;
    int n = nums1Size;
    int mergedArr[m+n];
    int index = 0;
    int num1Index;
    int num2Index;
    int totalLength = (n+m);
    int middleIndex = ( n+m ) / 2;
    //copy values
    for( index = 0, num1Index = 0, num2Index = 0; index < n + m ; index++ )
    {
        //case 1: num1 and num2 both still alive
        if( num1Index < n && num2Index < m )
        {
            //compare and copy value to the merged arr
            //case1: 1 > 2
            if( nums1[num1Index] > nums2[num2Index] )
            {
                mergedArr[index] = nums2[num2Index++];
            }
            //case2: 1 < 2
            else if( nums1[num1Index] < nums2[num2Index] )
            {
                mergedArr[index] = nums1[num1Index++];
            }
            //case3: 1 == 2
            else
            {
                mergedArr[index++] = nums1[num1Index++];
                mergedArr[index] = nums2[num2Index++];
            }
        }
        //case 2: num1 is dead
        else if( num1Index == n && num2Index < m )
        {
            //just copy num2
            mergedArr[index] = nums2[num2Index++];
        }
        //case 3: num2 is dead
        else if( num2Index == m && num1Index < n)
        {
            //just copy num1
            mergedArr[index] = nums1[num1Index++];
        }
        //case 4: both dead, but its as same as for loop termination condition
    }
    //find median
    //case1: both length same -> always even -> need some calc for getting median
    //case2: 1 is smaller  -> midean is middle, addition of 2 numbers are always odd
    //case3: 2 is smaller  -> midean is middle, addition of 2 numbers are always odd
        // case1: if m+n = odd then mergedArr[ (m+n)/2 ] is median
        // case2: else ( mergedArr[ (m+n)/2 ] +  mergedArr[ ( (m+n)/2 ) +1] ) / 2 is median

    return ( (totalLength ) %2 == 0 ) ? ((middleIndex == 0) ? mergedArr[middleIndex] : (double)( mergedArr[ middleIndex ] +  mergedArr[ middleIndex - 1 ] ) / 2.0 ) : (double)mergedArr[ middleIndex ];
}
