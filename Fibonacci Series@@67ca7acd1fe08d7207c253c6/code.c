void fibonacciSeries(int num)
{
    int first=0;
    int second=1;
    int next;
    for(int i=0; i<num; i++){
        printf("%i ",first);
        next=first+second;
        first=second;
        second=next;
    }
}