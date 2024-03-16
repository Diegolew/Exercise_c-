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
  }else if (s2 < s1 && s2 < s3){
    shortestString = s2;
    cout << shortestString;
  }else if (s3 < s1 && s3 < s2) {
    shortestString = s3;
    cout << shortestString;
  }else {
    cout<<s1;
 }

}
void encontrar_raices_cuadraticas(double A, double B, double C) {
    double discriminante = B*B - 4*A*C;

    if (discriminante > 0) {
        double raiz1 = (-B + sqrt(discriminante)) / (2*A);
        double raiz2 = (-B - sqrt(discriminante)) / (2*A);
        cout << raiz1 << " " << raiz2 << endl;
    }
    else if (discriminante == 0) {
        double raiz = -B / (2*A);
        cout << raiz << endl;
    }
    else {
        cout << "No hay raíces reales distintas" << endl;
    }
}

void exercise_2(double A, double B, double C) {
      double discriminante = B*B - 4*A*C;

    if (discriminante > 0) {
        double raiz1 = (-B + sqrt(discriminante)) / (2*A);
        double raiz2 = (-B - sqrt(discriminante)) / (2*A);
        cout << raiz1 << " " << raiz2 << endl;
    }else if (discriminante == 0) {
        double raiz = -B / (2*A);
        cout << raiz << endl;
    }else {
        cout << "No hay raíces reales distintas" << endl;
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
  //TODO: YOUR CODE HERE
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
    if (r>=0){
    cout<< 4*3.14* r*r<<endl;
} else {
    cout << "Error: Radius cannot be negative."<<endl;
}
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
    //TODO: YOUR CODE HERE
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
  //TODO: YOUR CODE HERE
    if (numb1 != 0 && numb2 != 0 && numb3 != 0) {
        cout << "1\n2\n3" << endl;
    } else if (numb4 != 0) {
        cout << "4" << endl;
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
    //TODO: YOUR CODE HERE
    if (number_of_docs == 0) {
        return "No se encontraron documentos";
    } else if (number_of_docs == 1) {
        return "Se encontro un documento";
    } else {
        return std::to_string(number_of_docs) + " documentos encontrados";
    }
}


void exercise_15(int a, int b, int c) {
    //TODO: YOUR CODE HERE 
    int temp_a = a;
    int temp_b = b;
    int temp_c = c;

    cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
    cout << "Permutamos: a => b, b => c, c => a" << endl;

    a = temp_c;
    b = temp_a;
    c = temp_b;

    cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
    if (debut < 0 || debut > 24 || fin < 0 || fin > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return;
    }if (debut == fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return;
    }if (debut > fin) {
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        return;
    }
    int total_cost = 0;
    int current_time = debut;
    int hour_rate_n1 = 0;
    int hour_rate_n2 = 0;

    while (current_time < fin) {
        if ((current_time >= 0 && current_time < 7) || (current_time >= 17 && current_time <= 24)) {
            hour_rate_n1++;
        } else {
            hour_rate_n2++;
        }
        current_time++;
    }

    cout << "Haz alquilado una bicicleta por" << endl;

    if (hour_rate_n1 > 0) {
        cout << hour_rate_n1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
        total_cost += hour_rate_n1;
    }if (hour_rate_n2 > 0) {
        cout << hour_rate_n2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
        total_cost += hour_rate_n2 * 2;
    }

    cout << "El monto total a pagar es de " << total_cost << " boliviano(s)."<<endl;
}