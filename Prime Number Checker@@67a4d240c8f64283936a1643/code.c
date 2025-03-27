int isPrime(int num){
    if(num<2){
        return 0;
    }

    int factor=0;
    for(int i=1; i<=num; i++){
        if(num%i==2){
            factor++;
        }
    }
    if(factor==2){
        return 1;
    }
}