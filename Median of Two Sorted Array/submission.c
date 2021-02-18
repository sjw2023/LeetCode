

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    //merge
    //make mergedArr with length of m + n
    int m = nums2Size;
    int n = nums1Size;
    int mergedArr[m+n];
    int index = 0;
    int num1Index;
    int num2Index;
    int middleIndex = ( n+m ) / 2;
    //copy values
    for( index = 0, num1Index = 0, num2Index = 0; index < n + m && ( num1Index < n || num2Index ) < m ; index++ )
    {

        if( nums1[num1Index] > nums2[num2Index] )
        {
            mergedArr[index] = nums2[num2Index++];
            // printf("%d\n", mergedArr[index]);
        }

        else if( nums1[num1Index] < nums2[num2Index] )
        {
            mergedArr[index] = nums1[num1Index++];
            // printf("%d\n", mergedArr[index]);
        }
        else
        {
            mergedArr[index++] = nums2[num2Index++];
            mergedArr[index] = nums1[num1Index++];
        }
    }
    //find median
    //case1: both length same -> always even -> need some calc for getting median
    //case2: 1 is smaller  -> midean is middle, addition of 2 numbers are always odd
    //case3: 2 is smaller  -> midean is middle, addition of 2 numbers are always odd
        // case1: if m+n = odd then mergedArr[ (m+n)/2 ] is median
        // case2: else ( mergedArr[ (m+n)/2 ] +  mergedArr[ ( (m+n)/2 ) +1] ) / 2 is median

    return ( (middleIndex ) %2 == 0 ) ? (double)( mergedArr[ middleIndex ] +  mergedArr[ middleIndex - 1 ] ) / 2.0 : (double)mergedArr[ middleIndex ];
}
