#include "sort.hpp"
int main()
{
 float a[]={1.4,2.2,-3,7.5,-4.09,3};//float a[]={1,2,3,7,4,3};
 InsertSort sort(a,6);
 sort.process();
 sort.output();
 MergeSort msort(a,6);
 msort.process();
 msort.output();
 getchar();
}
