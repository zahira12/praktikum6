#include <iostream>

using namespace std;

int main()
{
    cout<<"==============APLIKASI KALKULATOR SEDERHANA=============="<<endl;
    cout<<"                      Zahira Zahra"<<endl;
    cout<<"                       311810858"<<endl;
    cout<<"                        TI.18.C2"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"            ====DAFTAR OPERATOR ARITMATIKA===="<<endl;
    int x,y,hasil;
    string Jumlah = "1.Penjumlahan (+)";
    cout<<Jumlah<<endl;
    string Pengurangan = "2.Pengurangan (-)";
    cout<<Pengurangan<<endl;
    string Pembagian = "3.Pembagian (/)";
    cout<<Pembagian<<endl;
    string Perkalian = "4.Perkalian (*)";
    cout<<Perkalian<<endl;
    cout<<endl;

    cout<<"Masukan Nilai ke-1 :";
    cin>>x;
    cout<<"Masukan Nilai ke-2 :";
    cin>>y;

    int z;
    cout<<"Masukan Operator Aritmatika :";
    cin>>z;

    if (z==1)
        {
        hasil=x+y;
        cout<<"Hasil Dari aritmatika ke "<<Jumlah<<","<<x<<" dan "<<y<<" = "<<hasil;
        }
        else if(z==2)
            {
            hasil=x-y;
            cout<<"Hasil Dari aritmatika ke "<<Pengurangan<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
        else if(z==3)
            {
            hasil=x/y;
            cout<<"Hasil Dari Aritmatika ke "<<Pembagian<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
        else if(z==4)
            {
            hasil=x*y;
            cout<<"Hasil Dari aritmatika ke "<<Perkalian<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
            else
                {
                cout<<"Operator Aritmatika Salah";
                }
}
