pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n);
     long long min = a[0];
    long long max = a[n-1];
    return {min,max};
   
}
