#include <string>
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
    double discriminant = B * B - 4 * A * C;

    if (A == 0) {
        cout << "Coefficients A cannot be zero." << endl;
        return;
    }

    if (discriminant > 0) {
        double root1 = (-B + sqrt(discriminant)) / (2 * A);
        double root2 = (-B - sqrt(discriminant)) / (2 * A);
        cout << root1 << " " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -B / (2 * A);
        cout << root << endl;
    } else {
        cout << "No real roots" << endl;
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
double price,price2;
  if(n>a && n>b){
    price2=n-(n*y)/(100.00);
    cout<<price2<<endl;
  }
  
 
  else if(n>a){
    price=n-(n*x)/(100.00);
    cout<<price<<endl;
  }
  else{
   cout<<n<<endl;
}
}


void exercise_5(char character) {
    if (isupper(character))
        cout << "upper-case alphabet" << endl;
    else if (islower(character))
        cout << "lower-case alphabet" << endl;
    else
        cout << "not an alphabet" << endl;
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
  //TODO: YOUR CODE
}
void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE 
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
} 

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
    if (a < 0 || b < 0)
        return 0;
    int sum = a + b;
    int digits = 0;
    while (sum > 0) {
        sum /= 10;
        digits++;
    }
    return digits * (a + b);
}

string exercise_11(int number) {
    if (number == 11235813){
        return "Se encontro a Fibonacci"; 
    } else {
        return "Esto no es de Fibonacci";
}
}
void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
    if (numb1 != 0 && numb2 != 0 && numb3 != 0 && numb4 != 0) {
        cout << "1\n2\n3\n4" << endl;
    } else if (numb1 == 0 && numb2 != 0 && numb3 != 0 && numb4 != 0) {
        cout << "2\n3\n4" << endl;
    } else if (numb1 != 0 && numb2 == 0 && numb3 != 0 && numb4 != 0) {
        cout << "1\n3\n4" << endl;
    } else if (numb1 != 0 && numb2 != 0 && numb3 == 0 && numb4 != 0) {
        cout << "1\n2\n4" << endl;
    } else if (numb1 != 0 && numb2 != 0 && numb3 != 0 && numb4 == 0) {
        cout << "1\n2\n3" << endl;
    } else if (numb1 == 0 && numb2 == 0 && numb3 != 0 && numb4 != 0) {
        cout << "3\n4" << endl;
    } else if (numb1 != 0 && numb2 == 0 && numb3 == 0 && numb4 != 0) {
        cout << "1\n4" << endl;
    } else if (numb1 == 0 && numb2 != 0 && numb3 == 0 && numb4 != 0) {
        cout << "2\n4" << endl;
    } else if (numb1 == 0 && numb2 != 0 && numb3 != 0 && numb4 == 0) {
        cout << "2\n3" << endl;
    } else if (numb1 != 0 && numb2 == 0 && numb3 != 0 && numb4 == 0) {
        cout << "1\n3" << endl;
    } else if (numb1 != 0 && numb2 != 0 && numb3 == 0 && numb4 == 0) {
        cout << "1\n2" << endl;
    } else if (numb1 == 0 && numb2 == 0 && numb3 == 0 && numb4 != 0) {
        cout << "4" << endl;
    } else if (numb1 == 0 && numb2 == 0 && numb3 != 0 && numb4 == 0) {
        cout << "3" << endl;
    } else if (numb1 == 0 && numb2 != 0 && numb3 == 0 && numb4 == 0) {
        cout << "2" << endl;
    } else if (numb1 != 0 && numb2 == 0 && numb3 == 0 && numb4 == 0) {
        cout << "1" << endl;
    } else {
        cout << "" << endl;
}
}
string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
    if (age >= 18 && years_of_experience >= 5)
        return "Senior project manager";
    else if (age >= 18 && years_of_experience >= 3)
        return "Project manager";
    else if (age >= 18)
        return "Project coordinator";
    else
        return "Not eligible";
}

string exercise_14(int number_of_docs) {
    if (number_of_docs < 0)
        return "Número de documentos inválido";
    else if (number_of_docs == 0)
        return "No se encontraron documentos";
    else if (number_of_docs == 1)
        return "Se encontró un documento";
    else
        return to_string(number_of_docs) + " documentos encontrados";
}

void exercise_15(int a, int b, int c) {
  //TODO: YOUR CODE
    cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
    cout << "Permutamos: a => b, b => c, c => a" << endl;
    cout << "Los valores despues de la permutacion son: a = " << c << " b = " << a << " c = " << b << endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}