int solution(int A[], int N) {
    int i;
    long int suma,result;
    result=0;
    suma=0;
    if(N==0){return 1;}
    if(N==1 && A[0]==1){return N+1;}
    if(N==1 && A[0]!=1) return 1;
 for(i=0;i<N;i++){
     suma+=i+1;
     result=result+A[i];
     }
     if(result==suma){return N+1;}
     return suma-(result-(N+1));
}