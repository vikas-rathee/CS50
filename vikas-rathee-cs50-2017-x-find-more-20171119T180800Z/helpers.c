/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if(n<0)
    return false;
    int low=0,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(values[mid]>value)
        {
            high=mid-1;
        }
        else if(values[mid]<value)
        {
            low=mid+1;
        }
        else
            return(1);
    }
    return(0);
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int hash[65537]={0};
    for(int i=0;i<n;i++)
    {
        hash[values[i]]++;
    }
    int index=0;
    for(int i=0;i<n;)
    {
        while(hash[index]--)
        {
            values[i]=index;
            i++;
        }
        index++;
    }
}
