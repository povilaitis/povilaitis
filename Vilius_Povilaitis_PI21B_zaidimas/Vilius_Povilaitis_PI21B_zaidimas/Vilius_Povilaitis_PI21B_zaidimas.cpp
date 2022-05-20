#include <iostream>
#include <string>
using namespace std;

int Galutinis;
int Pasirinkimas; 

class Question {
private:

    string Klausimas;
    string Variantas_1;
    string Variantas_2;
    string Variantas_3;
    string Variantas_4;
    int Teisingas_ats;
    int Klausimo_taskai;

public:

    void setValues(string, string,
        string, string,
        string, int, int);

    void askQuestion();
};

int main()
{
    cout << "\n\n\t\t\t\tMatematikos viktorina"
        << endl;
    cout << "\nPaspauskite enter noredami pradeti viktorina "
        << "" << endl;

    cin.get();

    string Vardas;

    cout << "Koks tavo vardas?"
        << endl;
    cin >> Vardas;
    cout << endl;

    string Patvirtinimas;
    cout << "Ar tu pasiruoses atlikti"
        << " viktorina " << Vardas
        << "? taip/ne" << endl;
    cin >> Patvirtinimas;

    if (Patvirtinimas == "taip") {
        cout << endl;
        cout << "Sekmes!" << endl;
    }
    else {
        cout << "Viso gero!" << endl;
        return 0;
    }

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    q1.setValues("kiek bus 2 x 2?", 
        "5",
        "6", 
        "3",
        "4", 4, 10);
    q2.setValues("kiek bus 15 : 3?",
        "10",
        "6", 
        "5",
        "8", 3, 10);
    q3.setValues("kiek bus 10 x 6?",
        "16",
        "30", 
        "60",
        "20", 3, 10);
    q4.setValues("kiek bus 9 + 8?",
        "72",
        "17",
        "18",
        "20", 2, 10);
    q5.setValues("kiek bus 5 x 5?",
        "25",
        "10", 
        "20",
        "30", 1, 10);
    q6.setValues("kiek bus 60 - 40?", 
        "25",
        "30",
        "15",
        "20", 4, 10);
    q7.setValues("Kiek bus 30 x 5?",
        "140",
        "120", 
        "150",
        "100", 3, 10);
    q8.setValues("kiek bus 100 - 90?",
        "10",
        "5",
        "1",
        "20", 1, 10);
    q9.setValues("kiek bus 40 + 25?",
        "60",
        "65",
        "75",
        "55", 2, 10);
    q10.setValues("kiek bus 4 x 9?",
        "40",
        "38",
        "39",
        "36", 4, 10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();

    cout << "Galutine tasku suma = " << Galutinis
        << " is 100 " << endl;

    if (Galutinis >= 50) {
        cout << "Sveikinimai islaikius"
            << " viktorina!" << endl;
    }

    else {
        cout << "Tau sikart nepavyko"
            << endl;
        cout << "Sekmes kitose viktorinose"
            << endl;
    }
    return 0;
}

void Question::setValues(
    string k, string v1,
    string v2, string v3,
    string v4, int ta, int kt)
{
    Klausimas = k;
    Variantas_1 = v1;
    Variantas_2 = v2;
    Variantas_3 = v3;
    Variantas_4 = v4;
    Teisingas_ats = ta;
    Klausimo_taskai = kt;
}

void Question::askQuestion()
{
    cout << endl;

    cout << Klausimas << endl;
    cout << "1. " << Variantas_1<< endl;
    cout << "2. " << Variantas_2 << endl;
    cout << "3. " << Variantas_3 << endl;
    cout << "4. " << Variantas_4 << endl;
    cout << endl;

    cout << "Pasirink teisinga atsakymo varianta"
        << endl;
    cin >> Pasirinkimas;

    if (Pasirinkimas == Teisingas_ats) {
        cout << endl;
        cout << "Atsakymas tesingas!" << endl;

        Galutinis = Galutinis + Klausimo_taskai;
        cout << "Tavo tasku skaicius = " << Klausimo_taskai
            << " is "
            << Klausimo_taskai
            << "!" << endl;
        cout << endl;
    }

    else {
        cout << endl;
        cout << "Atsakymas netesingas !" << endl;
        cout << "tasku skaicius = 0"
            << " is "
            << Klausimo_taskai
            << "!" << endl;
        cout << "Teisingas atsakymas = "
            << Teisingas_ats
            << "." << endl;
        cout << endl;
    }
}