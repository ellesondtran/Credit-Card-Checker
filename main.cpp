//Elleson Tran
//Roberts
//Bad Credit Program
//Determines if a credit card number is a visa, mastercard or american express is valid

#include <iostream>
#include <vector>
#include<math.h>

using namespace std;

int main() {
  
  long long user;
  cout<<"Number:";
  cin>>user;

  long long digits = 0;

  long long user1 = user;

  //counts how many digits in an integer
  while (user != 0){
    user = user / 10;
    digits = digits + 1;
  }

long long digit = digits;

//puts all the digits of a number in a vector
  vector<long long>allNumbers(digit);



long long divide, num;

  for (int x = 1; x <= digits; x++){
    divide = pow(10, digit -1 );
    num = user1 / divide;
    allNumbers[x] = num;
    user1 = user1 % divide;
    digit = digit - 1;
  }


//all prepping is done, and now I can start the if statements

long long firstDigit = digits - 1;
long long secondDigit= digits;

long long firstCheckNUM, secondCheckNUM;

int firstCheckSUM = 0;
int secondCheckSUM = 0;
int sum = 0;

//american express
  if (digits > 15  || digits < 13  || digits == 14){
    cout<<"INVALID";
  }
  if (digits == 15){
    if (allNumbers[1] == 3 && allNumbers[2] == 4){
      while (firstDigit > 0){
        firstCheckNUM = allNumbers[firstDigit] * 2;
        if (firstCheckNUM >= 10){
            while (firstCheckNUM > 0) {
              int checkSumDigit = firstCheckNUM % 10; 
              sum = checkSumDigit + sum;
              firstCheckNUM = firstCheckNUM / 10;
            }
        }
        firstCheckSUM = firstCheckNUM + firstCheckSUM;
        firstDigit = firstDigit - 2;

      }
      while (secondDigit > 0){
        secondCheckNUM = allNumbers[secondDigit];
        secondCheckSUM = secondCheckNUM + secondCheckSUM;
        secondDigit = secondDigit - 2;
      }
      if ((secondCheckSUM + sum + firstCheckSUM) % 10 == 0){
        cout<<"AMEX";
      }
    }



    if (allNumbers[1] == 3 && allNumbers[2] == 7){
      while (firstDigit > 0){
        firstCheckNUM = allNumbers[firstDigit] * 2;
        if (firstCheckNUM >= 10){
            while (firstCheckNUM > 0) {
              int checkSumDigit = firstCheckNUM % 10; 
              sum = checkSumDigit + sum;
              firstCheckNUM = firstCheckNUM / 10;
            }
        }
        firstCheckSUM = firstCheckNUM + firstCheckSUM;
        firstDigit = firstDigit - 2;

      }
      while (secondDigit > 0){
        secondCheckNUM = allNumbers[secondDigit];
        secondCheckSUM = secondCheckNUM + secondCheckSUM;
        secondDigit = secondDigit - 2;
      }
      if ((secondCheckSUM + sum + firstCheckSUM) % 10 == 0){
        cout<<"AMEX";
      }
  }
    else
      cout<<"INVALID";
  }




//mastercard or visa
  if (digits == 16){
    if (allNumbers[1] == 4){ //visa
      while (firstDigit > 0){
        firstCheckNUM = allNumbers[firstDigit] * 2;
        if (firstCheckNUM >= 10){
            while (firstCheckNUM > 0) {
              int checkSumDigit = firstCheckNUM % 10; 
              sum = checkSumDigit + sum;
              firstCheckNUM = firstCheckNUM / 10;
            }
        }
        firstCheckSUM = firstCheckNUM + firstCheckSUM;
        firstDigit = firstDigit - 2;

      }
      while (secondDigit > 0){
        secondCheckNUM = allNumbers[secondDigit];
        secondCheckSUM = secondCheckNUM + secondCheckSUM;
        secondDigit = secondDigit - 2;
      }
      if ((secondCheckSUM + sum + firstCheckSUM) % 10 == 0){
        cout<<"VISA";
      }
    }


    if (allNumbers[1] == 5 && allNumbers[2] >= 1 && allNumbers[2] <=5){ //mastercard
      while (firstDigit > 0){
        firstCheckNUM = allNumbers[firstDigit] * 2;
        if (firstCheckNUM >= 10){
            while (firstCheckNUM > 0) {
              int checkSumDigit = firstCheckNUM % 10; 
              sum = checkSumDigit + sum;
              firstCheckNUM = firstCheckNUM / 10;
            }
        }
        firstCheckSUM = firstCheckNUM + firstCheckSUM;
        firstDigit = firstDigit - 2;

      }
      while (secondDigit > 0){
        secondCheckNUM = allNumbers[secondDigit];
        secondCheckSUM = secondCheckNUM + secondCheckSUM;
        secondDigit = secondDigit - 2;
      }
      if ((secondCheckSUM + sum + firstCheckSUM) % 10 == 0){
        cout<<"MASTERCARD";
      }
  }
    else
      cout<<"INVALID";
  }



//visa
  if (digits == 13){
    if (allNumbers[1] == 4){
      while (firstDigit > 0){
        firstCheckNUM = allNumbers[firstDigit] * 2;
        if (firstCheckNUM >= 10){
            while (firstCheckNUM > 0) {
              int checkSumDigit = firstCheckNUM % 10; 
              sum = checkSumDigit + sum;
              firstCheckNUM = firstCheckNUM / 10;
            }
        }
        firstCheckSUM = firstCheckNUM + firstCheckSUM;
        firstDigit = firstDigit - 2;

      }
      while (secondDigit > 0){
        secondCheckNUM = allNumbers[secondDigit];
        secondCheckSUM = secondCheckNUM + secondCheckSUM;
        secondDigit = secondDigit - 2;
      }
      if ((secondCheckSUM + sum + firstCheckSUM) % 10 == 0){
        cout<<"VISA";
      }
  }
    else
      cout<<"INVALID";
  }
} 