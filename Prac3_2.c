# include<stdio.h>
int cpf,maths,result;

void main(){
    cpf=70;
    maths=80;

    printf("\nMarks Before Evaluation(++cpf)   : %d",cpf);
    ++cpf;
    printf("\nMarks After  Evaluation(++cpf)   : %d",cpf);
    printf("\nMarks Before Evaluation(--cpf)   : %d",cpf);
    --cpf;
    printf("\nMarks After  Evaluation(--cpf)   : %d",cpf);
    printf("\nMarks Before Evaluation(cpf++)   : %d",cpf);
    cpf++;
    printf("\nMarks After  Evaluation(cpf++)   : %d",cpf);
    printf("\nMarks Before Evaluation(cp--)    : %d",cpf);
    cpf--;
    printf("\nMarks After  Evaluation(cpf--)   : %d",cpf);

    result = ++cpf + cpf++ + --maths + ++maths - maths--;

    printf("\nResult                           :%d",result);
    

}

