#include <iostream>
#include<cmath>
using namespace std;
int main()
{

    //PROBLEM1
    /* int a;
     cin>>a;
     if (a<0){
       cout<<"negative";
     } else if (a>0){
       cout<<"Positive";
     }else
     {cout<<"zero";}
   return 0;*/


    //PROBLEM2
    /*int a;
      cin>>a;
      if (a%2==0){
        cout<<"even";
      } else { cout<<"odd";
             }*/

    //PROBLEM 3
    /* int a,b;
     cin>>a >>b;
     if (a>b) {
       cout<<"a>b";}
     else if (a<b){
       cout<<"a<b";
     }else {cout<<"a=b";
           }
   return 0;*/


    //PROBLEM4 (nested if)
    /* #include <iostream>
     using namespace std;

     int main() {
         int a, b, c;
         cout << "Enter three numbers: ";
         cin >> a >> b >> c;

         if (a > b) {
             if (a > c) {
                 cout << "a is the                     largest";
             } else {
                 cout << "c is the largest";
             }
         } else { // a <= b
             if (b > c) {
                 cout << "b is the largest";
             } else if (c > b) {
                 cout << "c is the largest";
             } else { // if b == c and also a == b
                 cout << "All numbers are equal";
             }
         }

         return 0;
     }
   }


 */


    //PROBLEM5
    /*int year;
    cin>>year;
    if (year%2==0) {
      cout<<" a leap year";}
    else {
      cout<<" not leap year";
    }
  */

    //PROBLEM6
    /*int speed;
    cin>>speed;
    if (speed>=80){
      cout<<"too fast";}
    else if (speed<=20){
      cout<<"too slow";}
    else {cout<<"just right";}
    return 0;*/

    //PROBLEM7
    /*int marks;
  cin>>marks;
  if (marks>=50){
    cout<<"pass";
  }else {cout<<"fail";
  }
    return 0;
  }*/

    //PROBLEM 8
    /*int a;
    cin>>a;
    if (a>0){
      if (a!=0){
        cout<<"positive";}
      else {
        cout<<"zero";}}
    else if (a<0) {if (a!=0){
      cout<<"negative";}
      else {cout<<"zero";}
                  }
    else
    {cout<<"zero";}
         }
       */





  LAB 3
// PROBLEM1
#include <iostream>
using namespace std;
int main(){
/*int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
int sum = a+b+c+d+e;
cout<<sum;
return 0;*/

  //PROBLEM2
  /*int id;
  float gpa;
  char yearOf_study;
  int studentTuitionFee;
  cout<<"Enter yout id ";
  cin>>id;
  cout<<"enter your student GPA ";
  cin>>gpa;
  cout<<"enter year of study ";
  cin>>yearOf_study;
  cout<<"enter study fee ";
cin>>studentTuitionFee;*/


  //PROBLEM3

  /*float Celsius;
  cin>>Celsius;
  cout<<"The temperature is "<<Celsius;
  float Fahrenheit=(Celsius*9/5)+32;
  cout<<"The temperature is "<<Fahrenheit;

  return 0;*/

  //PROBLEM4
  /*double cost;
  cin>>cost;
  int quantity;
  cin>>quantity;
  int total_price=cost*quantity;
  cout<<"total cost is "<<total_price;
  return 0;*/

  //PROBLEM5
/*int age1,age2,age3;age4;
  cin>>age1 >> age2>> age3>> age4;
  int average_age=(age1+age2+age3+age4)/4;
  cout<<"average age is "<<average_age;
  return 0;*/

  //PROBLEM6
/*int length;
  cin>>length;
  int width;
  cin>>width;
  int area= length * width;
  int perimeter=2*(length+width);
  cout<<"area is "<<area<<endl;
  cout<<"perimeter is "<<perimeter;
  return 0;*/

  //PROBLEM7
  /*int dividend,divisor;
  cin>>dividend >> divisor>>;
  int quotient=dividend/divisor;
  int remainder=dividend%divisor;
  return 0;*/


  //PROBLEM8
 /* float USD;
  cin>> USD;
  cout<<"amount in USD "<< USD<<endl;
  float exchange_rate=USD*12.800;
  cout<<"amount in UZS "<<exchange_rate;
  return 0;*/


//PROBLEM9
 /* float radius;
  cin>>radius;
  float sum_of_circle = 2*3.14*radius;
  cout<<"sum of circle is "<<sum_of_circle;
  return 0; */



  //PROBLEM10

  /*float r;
  cin>>r;
  int height;
  cin>>height;
  float volume=3.14*r*r*height;
  cout<<"r="<<r<<" h="<<height<<" volume="<<volume;
  return 0;*/



  //PROBLEM11
 /* float s = 450/2;
  float time =2;
  float speed_in_km=s/time;
  float speed_in_miles=speed_in_km*0.621371;
  cout<<"speed in km is "<<speed_in_km<<endl;
  cout<<"speed in miles is "<<speed_in_miles;*/


  //PROBLEM12 %used for remainder
  /*int minutes;
cin>>minutes;
  int hours=minutes/60;
  int remaining_minutes=minutes%60;
  cout<<"total minutes:"<<minutes<<endl;
  cout<<"total time:"<<hours<<"hours"<<remaining_minutes<<"minutes";
  return 0;*/


 /* PROBLEM 13
 float fixed_costs =10.000;
  float selling_price_per_unit;
  cin>>selling_price_per_unit;
  float variable_cost_per_unit;
  cin>>variable_cost_per_unit;
  int BEP = fixed_costs/(selling_price_per_unit-variable_cost_per_unit);
  cout<<"BEP is "<<BEP;*/


 /*PROBLEM 14
 int salary;
  cin>>salary;
  float tax = 0.88;
  float net_salary = salary*tax;
  cout<< "salary is "<<salary<< " net salary is "<<net_salary;
    return 0; */

    //PROBLEM 15
  /*int original_price;
  cin>>original_price;
  int discount_percentage;
  cin>>discount_percentage;
  int final_price = original_price *(100 - discount_percentage)/100;
  cout<<"final price is "<<final_price;
  return 0;
  */

  //PROBLEM 16
  /*float a,b,c,d,e;
  cin>>a>> b >> c>> d>> e;
  int f,g,h,i,j;
  cin>>f >>g >> h>> i>> j;
  float weighted_GPA =(a*f+b*g+c*h+d*i+e*j)/(f+g+h+j+i);
  cout<<"weighted GPA is "<<weighted_GPA;
  return 0;*/

  //PROBLEM 17
  /*int intial_price;
  cin>>intial_price;
  int final_price ;
  cin>>final_price;
  float inflation_rate = float((final_price-intial_price)/intial_price)*100;
  cout<<"inflation rate is "<<inflation_rate << "%";
  return 0;*/

  //PROBLEM 18
  /*int Tuition_fee,scholarship_rate;
  cin>>Tuition_fee >> scholarship_rate;
  float final_price = Tuition_fee - (Tuition_fee*scholarship_rate/100);
  cout<<"final price is "<<final_price;
  return 0;
  */


  //PROBLEM 19
  /*float principal_amount,rate_of_interest;
  int time_in_years;
  cin>>principal_amount>> time_in_years>> rate_of_interest;
  float simple_interest = (principal_amount * rate_of_interest * time_in_years) /100;
  cout<<"simple interest is "<<simple_interest;
  return 0;
  */

  //PROBLEM 20
 /* int p,r;
  cin>>p>>r;
  int a =p+(1+r/100)*(1+r/100);
  int compound_interest = a - p;
  cout<<"compound interest is "<<compound_interest<<" total amount after 2 years :"<< a;
  return 0;*/




  LAB4


  #include <iostream>
#include<cmath>
using namespace std;
int main()
{

  //PROBLEM1
 /* int a;
  cin>>a;
  if (a<0){
    cout<<"negative";
  } else if (a>0){
    cout<<"Positive";
  }else
  {cout<<"zero";}
return 0;*/


  //PROBLEM2
/*int a;
  cin>>a;
  if (a%2==0){
    cout<<"even";
  } else { cout<<"odd";
         }*/

//PROBLEM 3
 /* int a,b;
  cin>>a >>b;
  if (a>b) {
    cout<<"a>b";}
  else if (a<b){
    cout<<"a<b";
  }else {cout<<"a=b";
        }
return 0;*/


  //PROBLEM4 (nested if)
   /* #include <iostream>
    using namespace std;

    int main() {
        int a, b, c;
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;

        if (a > b) {
            if (a > c) {
                cout << "a is the                     largest";
            } else {
                cout << "c is the largest";
            }
        } else { // a <= b
            if (b > c) {
                cout << "b is the largest";
            } else if (c > b) {
                cout << "c is the largest";
            } else { // if b == c and also a == b
                cout << "All numbers are equal";
            }
        }

        return 0;
    }
  }


*/


  //PROBLEM5
  /*int year;
  cin>>year;
  if (year%2==0) {
    cout<<" a leap year";}
  else {
    cout<<" not leap year";
  }
*/

 //PROBLEM6
  /*int speed;
  cin>>speed;
  if (speed>=80){
    cout<<"too fast";}
  else if (speed<=20){
    cout<<"too slow";}
  else {cout<<"just right";}
  return 0;*/

//PROBLEM7
  /*int marks;
cin>>marks;
if (marks>=50){
  cout<<"pass";
}else {cout<<"fail";
}
  return 0;
}*/

  //PROBLEM 8
  /*int a;
  cin>>a;
  if (a>0){
    if (a!=0){
      cout<<"positive";}
    else {
      cout<<"zero";}}
  else if (a<0) {if (a!=0){
    cout<<"negative";}
    else {cout<<"zero";}
                }
  else
  {cout<<"zero";}
       }
     */


  //problem9 SWITCH
 /* char light;
  cin>>light;

  switch (light) {
    case 'g' : cout<<"go";break;
  case 'y': cout<<"get ready!";break;
    case 'r': cout<<"stop";break;
    default:cout<<"invalid";
}} */

  //PROBLEM10
/*int grade;
  cin>>grade;
if ((grade>=90) && (grade <=100)) {
  cout <<"A";
}else if  ((grade>=80) && (grade <=89)){
  cout <<"B";}
else if  ((grade>=70) && (grade <=79)){cout<<"C";
}
else if ((grade>=60) && (grade <=69)){cout<<"D";
} else {cout<<"F";
       }
  return 0; }*/



  //PROBLEM 11
  //int a,b;
  /*cin>>a>>b;
  if(a/b==0){
    cout<<a<<" is divisible by "<< b;
  } else {cout<<a<<"is not divisible by "<< b;}*/


  //PROBLEM 12
  /*int a,b,c;
  cin>>a>>b>>c;
  if (a+b+c==180){
    cout<<"triangle is valid";
  } else {cout<<"triangle is not valid";}
  return 0;}*/



  //PROBLEM 13
 /* #include <cctype> // for isupper(), islower()
  char a;
  cin>>a;
  if (isupper(a)){
    cout<<"uppercase alphabet";}
      else if (islower(a)){
        cout<<"lowercase alphabet";
      }
  else {cout<<"not an alphabet";}
  }*/

  //PROBLEM 14
  /*float a,b;
  cout<<"enter weight and price of package1";
  cin>>a;
  cout<<"enter weight and price of package2";
  cin>>b;
  if (a>b){
    cout<<"package1 has better price";
  }else if (a<b){
    cout<<"package2 has better price";
  } else {cout<<"both have same price";}*/

// PROBLEM 15 PALINDROME
/* int num, firstDigit, lastDigit, middleDigit;
cout << "Enter a three-digit integer: ";
      cin >> num;
      lastDigit = num % 10;
      middleDigit = (num / 10) % 10;
      firstDigit = num / 100;
      if (firstDigit == lastDigit) {
       cout << num << " is a palindrome." << endl;
      } else {
          cout << num << " is not a palindrome." << endl;
      }

      return 0;}*/


  //PROBLEM16 SQRT,POWER

  /*double x1,x2,y1,y2;
  cin>>x1 >> x2 >> y1 >> y2;
   double distance = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
  if (distance<=10){
    cout<<"point is within the circle";}
  else {cout<<"point is not within the circle";}
  return 0;}*/


  //PROBLEM 17 GPA with SWITCH and IF/ELSE
/*float gpa;
  cin>>gpa;
  int gpa_rounded;
  if (gpa<=4.5 && gpa>=4.0){
    gpa_rounded =4;
  }else if (gpa<4.0 && gpa>=3.5){
    gpa_rounded =3;
  } else if (gpa<3.5 && gpa>=3.0){
    gpa_rounded =2;
  }else { gpa_rounded = 0;}

  switch (gpa_rounded){
    case 4: cout<<"You got 80% scholarship";break;
    case 3: cout<<"You got 60% scholarship";break;
    case 2: cout<<"You got 50% scholarship";break;
    case 0: cout<<"You got no scholarship";break;
  }}*/