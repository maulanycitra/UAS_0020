#include <iostream>

using namespace std;

int main()
{
    string name, alamat, kelas, kursus;
    int score_test;

    //Judul
    cout<<"Pendaftaran Kursus Bahasa Inggris"<<endl;
    cout<<"================================="<<endl;

    //Data diri
    cout<<"Nama: "; cin>>name;
    cout<<"Score test: "; cin>>score_test;
    cout<<"Alamat: "; cin>>alamat;

    //Condition_Kelas
    if(score_test<=100){
        cout<<"Kelas: Foundation\n"<<kelas;
        cout<<"Kursus: Pre-A1 Class\n"<<kursus;
        cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas Foundation dan Kursus Level Pre-A1 Class"<<endl;

    }
    else if(score_test<=200){
        cout<<"Kelas: Elementary\n"<<kelas;
        cout<<"Kursus: A1 Class\n"<<kursus;
        cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas Elementary dan Kursus Level A1 Class"<<endl;
    }
    else if(score_test<=300){
        cout<<"Kelas: Pre-Intermediate\n"<<kelas;
        cout<<"Kursus: A2 Class\n"<<kursus;
        cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas Pre-Intermediate dan Kursus Level A2 Class"<<endl;
    }
    else if(score_test<=400){
        cout<<"Kelas: Intermediate\n"<<kelas;
        cout<<"Kursus: B1 Class\n"<<kursus;
        cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas Intermediate dan Kursus Level B1 Class"<<endl;
    }
    else if(score_test<=500){
        cout<<"Kelas: Upper Intermediate\n"<<kelas;
        cout<<"Kursus: B2 Class\n"<<kursus;
        cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas Upper Intermediate dan Kursus Level B2 Class"<<endl;
    }
    else if(score_test<=599){
        cout<<"Kelas: Advance\n"<<kelas;
        cout<<"Kursus: C1 Class\n"<<kursus;
        cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas Advance dan Kursus Level C1 Class"<<endl;
    }
    else if(score_test>599){
        cout<<"Kelas: Proficiency\n"<<kelas;
        cout<<"Kursus: C2 Class\n"<<kursus;
        cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas Proficiency dan Kursus Level C2 Class"<<endl;
    }

    //Conclusion
    //cout<<name<<" dengan Score Test "<<score_test<<" Terdaftar di Kelas "<<kelas<<" dan Kursus Level "<<kursus;

    return 0;
}
