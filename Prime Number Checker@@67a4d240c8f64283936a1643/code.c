int isPrime(int num){
    if(num<2){
        return 0;
    }
    else{
        int factor=0;
        for(int i=1; i<=num; i++){
            if(num%i==0){
                factor++;
            }
        }
        if(factor==2){
            return 1;
        }
        else{
            return 0;
        }
    }
}