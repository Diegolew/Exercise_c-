
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  string shortestString;
  if (s1 < s2 && s1 < s3) {
    shortestString = s1;
    cout << shortestString;
  }
  else if (s2 < s1 && s2 < s3){
    shortestString = s2;
    cout << shortestString;
    }
  else if (s3 < s1 && s3 < s2) {
    shortestString = s3;
    cout << shortestString;
  }
  else {
    cout<<s1;
 }

}
void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE 
    double discriminant = B * B - 4 * A * C;

    if (A == 0) {
        if (B != 0) {
            double root = -C / B;
            cout << root << endl;
        } else {
            cout << "" << endl;
        }
    } else if (discriminant < 0) {
        cout << "" << endl;
    } else {
        double root1 = (-B + sqrt(discriminant)) / (2 * A);
        double root2 = (-B - sqrt(discriminant)) / (2 * A);

        cout << root1 << " " << root2 << endl;
    }
}


void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (b==0)
    {
       cout<<"Impossible"<<endl;
    }
    
    else{

        int x,y,z=0;
        x=int(a);
        y=int(b);
        z=x/y;
        
        cout<<z<<endl;
   }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE 
}


void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE 
switch (number){
    case 1:cout<<"Monday"<<endl;break;
    case 2:cout<<"Tuesday"<<endl;break;
    case 3:cout<<"Wednesday"<<endl;break;
    case 4:cout<<"Thursday"<<endl;break;
    case 5:cout<<"Friday"<<endl;break;
    case 6:cout<<"Saturday"<<endl;break;
    case 7:cout<<"Sunday"<<endl;break;
    default:cout<<"Invalid input"<<endl;break;
}
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE 
    if (r < 0) {
        cout << "Error: Radius cannot be negative." << endl;
    } else {
        double area = 4 * 3.14159 * r * r;
        cout << area << endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE 
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}