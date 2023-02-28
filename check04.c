// recebe um inteiro potencia de dois e devolve o log

int intlog2(int n){
    if( n == 1){
        return 0;
    }
    intlog2(n/2) + 1; 
}