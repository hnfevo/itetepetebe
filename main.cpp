#include <iostream>
#include <conio.h>

using namespace std;

//FUNGSI - total pembayaran
int TotalPembayaranDiskon(int hasil, int diskon){
    if(hasil >= 100000) {
        return hasil-(hasil/diskon);
    } else {
        return hasil;
    }
}

//FUNGSI - menghitung diskon
int HitungDiskon(int hasil, int diskon){
    return hasil/diskon;
}

int main()
{
    char pilihan;
    char pilihanPaket;

    cout << "\t -------------SELAMAT DATANG DI RESTAURANT NASI GORENG ENTUL----------------" << endl;
    cout << "\t\t Kami Persilahkan Anda Untuk Memilih Menu Restoran Kami\n" << endl;

    char YesNo;
    int totalPaket, banyak, hasil=0;
    int diskon=10;
    int x=0;
    int totalPesanan[x];

    //ARRAY - daftar harga makanan dan minuman
    int hargaNasi[4]={15000, 25000, 30000, 20000};
    int hargaMie[7]={13000, 20000, 25000, 13000, 18000, 23000, 22000};
    int hargaKwetiau[7]={13000, 22000, 25000, 13000, 18000, 25000, 20000};
    int hargaMinuman[9]={5000, 4500, 500, 3500, 3000, 1000, 1500, 5000, 5000};

    //PERULANGAN (do while) - mau pesan lagi?
    do{
        cout << "Daftar Menu & Paket Restoran Nasi Goreng ENTUL\n" << endl;
        cout << "1. Aneka Nasi" << endl;
        cout << "2. Aneka Mie" << endl;
        cout << "3. Aneka Kwetiau" << endl;
        cout << "4. Aneka Minuman" << endl;

        cout << "\nMasukkan Paket yang akan dipilih: ";
        pilihan = getche();
        system("cls");

        //PERCABANGAN (switch case) - pilih daftar paket
        switch(pilihan){
        case '1':
            cout << "Daftar Menu Nasi Goreng\n" << endl;
            cout << "1. Nasi Goreng Biasa     Rp.15000" << endl;
            cout << "2. Nasi Goreng Spesial   Rp.25000" << endl;
            cout << "3. Nasi Goreng Seafood   Rp.30000" << endl;
            cout << "4. Nasi Goreng Gila      Rp.20000" << endl;

            //PERCABANGAN (if else) - pilih menu makanan/minuman
            cout << "\nMasukkan Menu Pilihan Anda: ";
            pilihanPaket = getche();
            cout << endl << endl;

            if(pilihanPaket == '1'){
                totalPaket = hargaNasi[0];
            } else if (pilihanPaket == '2'){
                totalPaket = hargaNasi[1];
            } else if (pilihanPaket == '3'){
                totalPaket = hargaNasi[2];
            } else if (pilihanPaket == '4'){
                totalPaket = hargaNasi[3];
            } else {
                cout;
            }

            if(pilihanPaket <'1' || pilihanPaket >'4') {
                cout << "Menu Tidak Tersedia\n";
            } else {
                cout << "Berapa Banyak Pesanan: ";
                cin >> banyak;
            }

            totalPesanan[x] = totalPaket*banyak;

            cout << "\nMau Pesan Lagi? (Y/T) ";
            YesNo = getche();
            system("cls");
            break;

        case '2':
            cout << "Daftar Menu Mie\n" << endl;
            cout << "1. Mie Goreng Biasa                Rp.13000" << endl;
            cout << "2. Mie Goreng Seafood              Rp.20000" << endl;
            cout << "3. Mie Goreng Spesial              Rp.25000" << endl;
            cout << "4. Mie Rebus Biasa                 Rp.13000" << endl;
            cout << "5. Mie Rebus Seafood               Rp.18000" << endl;
            cout << "6. Mie Rebus Spesial               Rp.23000" << endl;
            cout << "7. Mie PEBE (PEdes BEeeuudd...)    Rp.22000" << endl;

            cout << "\nMasukkan Menu Pilihan Anda: ";
            pilihanPaket = getche();
            cout << endl << endl;

            if (pilihanPaket == '1'){
                totalPaket = hargaMie[0];
            } else if (pilihanPaket == '2'){
                totalPaket = hargaMie[1];
            } else if (pilihanPaket == '3'){
                totalPaket = hargaMie[2];
            } else if (pilihanPaket == '4'){
                totalPaket = hargaMie[3];
            } else if (pilihanPaket == '5'){
                totalPaket = hargaMie[4];
            } else if (pilihanPaket == '6'){
                totalPaket = hargaMie[5];
            } else if (pilihanPaket == '7'){
                totalPaket = hargaMie[6];
            } else {
                cout;
            }

            if(pilihanPaket <'1' || pilihanPaket >'7') {
                cout << "Menu Tidak Tersedia\n";
            } else {
                cout << "Berapa Banyak Pesanan: ";
                cin >> banyak;
            }

            totalPesanan[x] = totalPaket*banyak;

            cout << "\nMau Pesan Lagi? (Y/T) ";
            YesNo = getche();
            system ("cls");
            break;

        case '3':
            cout << "Daftar Menu Kwetiau\n" << endl;
            cout << "1. Kwetiau Goreng Biasa                Rp.13000" << endl;
            cout << "2. Kwetiau Goreng Seafood              Rp.22000" << endl;
            cout << "3. Kwetiau Goreng Spesial              Rp.25000" << endl;
            cout << "4. Kwetiau Rebus Biasa                 Rp.13000" << endl;
            cout << "5. Kwetiau Rebus Seafood               Rp.18000" << endl;
            cout << "6. Kwetiau Rebus Spesial               Rp.25000" << endl;
            cout << "7. Kwetiau PEBE (PEdes BEeeuudd...)    Rp.20000" << endl;

            cout << "\nMasukkan Menu Pilihan Anda: ";
            pilihanPaket = getche();
            cout << endl << endl;

            if(pilihanPaket == '1'){
                totalPaket = hargaKwetiau[0];
            } else if (pilihanPaket == '2'){
                totalPaket = hargaKwetiau[1];
            } else if (pilihanPaket == '3'){
                totalPaket = hargaKwetiau[2];
            } else if (pilihanPaket == '4'){
                totalPaket = hargaKwetiau[3];
            } else if (pilihanPaket == '5'){
                totalPaket = hargaKwetiau[4];
            } else if (pilihanPaket == '6'){
                totalPaket = hargaKwetiau[5];
            } else if (pilihanPaket == '7'){
                totalPaket = hargaKwetiau[6];
            } else {
                cout;
            }

            if(pilihanPaket <'1' || pilihanPaket >'7') {
                cout << "Menu Tidak Tersedia\n";
            } else {
                cout << "Berapa Banyak Pesanan: ";
                cin >> banyak;
            }

            totalPesanan[x] = totalPaket*banyak;

            cout << "\nMau Pesan Lagi? (Y/T) ";
            YesNo = getche();
            system ("cls");
            break;

        case '4':
            cout << "Daftar Menu Minuman\n" << endl;
            cout << "1. Air Mineral (Bermerk) dingin            Rp.5000" << endl;
            cout << "2. Air Mineral (Bermerk) tidak dingin      Rp.4500" << endl;
            cout << "3. Air Mineral                             Rp.500" << endl;
            cout << "4. Es Teh Manis                            Rp.3500" << endl;
            cout << "5. Teh Anget Manis                         Rp.3000" << endl;
            cout << "6. Teh Tawar                               Rp.1000" << endl;
            cout << "7. Es Teh Tawar                            Rp.1500" << endl;
            cout << "8. Es jeruk                                Rp.5000" << endl;
            cout << "9. Jeruk Anget                             Rp.5000" << endl;

            cout << "\nMasukkan Menu Pilihan Anda: ";
            pilihanPaket = getche();
            cout << endl << endl;

            if(pilihanPaket == '1'){
                totalPaket = hargaMinuman[0];
            } else if (pilihanPaket == '2'){
                totalPaket = hargaMinuman[1];
            } else if (pilihanPaket == '3'){
                totalPaket = hargaMinuman[2];
            } else if (pilihanPaket == '4'){
                totalPaket = hargaMinuman[3];
            } else if (pilihanPaket == '5'){
                totalPaket = hargaMinuman[4];
            } else if (pilihanPaket == '6'){
                totalPaket = hargaMinuman[5];
            } else if (pilihanPaket == '7'){
                totalPaket = hargaMinuman[6];
            } else if (pilihanPaket == '8'){
                totalPaket = hargaMinuman[7];
            } else if (pilihanPaket == '9'){
                totalPaket = hargaMinuman[8];
            } else {
                cout;
            }

            if(pilihanPaket <'1' || pilihanPaket >'9') {
                cout << "Menu Tidak Tersedia\n";
            } else {
                cout << "Berapa Banyak Pesanan : ";
                cin >> banyak;
            }

            totalPesanan[x] = totalPaket*banyak;

            cout << "\nMau Pesan Lagi? (Y/T) ";
            YesNo = getche();
            cout << endl;
            system ("cls");
            break;
            }
            x++;
    }while(YesNo == 'Y' || YesNo == 'y');

    if(pilihan <'1' || pilihan >'4') {
        cout << "\nMenu Tidak Tersedia\n";
    } else {
        cout << "INVOICE PEMBAYARAN" << endl;

        //PERULANGAN (for) - mejumlah harga dan total pesanan
        for(int i=0; i<x; i++){
            hasil=hasil+totalPesanan[i];
        }

    if (hasil >= 100000) {
        cout << "Total Pesanan: " << hasil << endl;
        cout << "Diskon: Rp." << HitungDiskon(hasil, diskon) << endl;
        cout << "Total Pembayaran: Rp." << TotalPembayaranDiskon(hasil, diskon) << endl;
        cout << "\nTERIMA KASIH ATAS KUNJUNGAN ANDA" << endl;
    } else {
        cout << "Total Pesanan: Rp." << hasil << endl;
        cout << "Total Pembayaran: Rp." << TotalPembayaranDiskon(hasil, diskon) << endl;
        cout << "\nTERIMA KASIH ATAS KUNJUNGAN ANDA" << endl;
    }
    }
    return 0;
}
