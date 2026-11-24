#include<stdio.h>
#include<math.h>

void print_menu();
float division(float, float);
float modulus(int, int);

int main(){

    

    int choice;
    float first, second, result;

    while(1){
        print_menu();
    
    printf("\nEnter the choice: ");
    scanf("%d", &choice); 

    if(choice == 7){
        printf("\nTHANK YOU !");
        break;
    }

    if(choice<1 || choice>7){
        fprintf(stderr, "Invalid choice");
        continue;
    }

    printf("\nEnter First number: ");
    scanf("%f", &first);

    printf("\nEnter Second number: ");
    scanf("%f", &second);

    switch(choice){
        case 1:
        result = first + second;
        break;

        case 2:
        result = first - second;
        break;

        case 3:
        result = first * second;
        break;

        case 4:
        result = division(first, second);
        break;

        case 5:
        result = modulus(first, second);
        break;

        case 6:
        result = pow(first, second);
        break;

    }

    if(!isnan(result)){
    printf("\nResult of operation is: %.2f", result);
    }
    };

    return 0;

    }

    float modulus(int a, int b){
        if(b==0){
            fprintf(stderr, "Invalid argument for modulus");
            return NAN;
        } else{
            return a%b;
        }
    }

    float division(float a, float b){
        if(b==0){
            fprintf(stderr, "Invalid argument for division");
            return NAN;
        } else{
            return a/b;
        }
         
    }

    void print_menu(){
        printf("\n\n-----------------------------");
        printf("\nWELCOME TO SIMPLE CALCULATOR\n");
    printf("\nChoose one of the following options:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. EXIT");

        
    }