#include <iostream>
using namespace std;

class MasukUniversitas {
protected:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    }
    virtual void namaJalurMasuk() { return; }
    virtual void hitungBiayaTotal() { return; }
    virtual void tampilkanTotalBiaya() { return; }
    virtual void input() { return; }

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }
    float getUangBangunan() {
        return uangBangunan;
    }

    void setTotalBiaya(int nilai) {
        this->totalBiaya = nilai;
    }
    float getTotalBiaya() {
        return totalBiaya;
    }
};
class SNBT : public MasukUniversitas {
public:
    void namaJalurMasuk() {
        cout << "\nJalur Masuk mu adalah: SNBT" << "\n" << endl;
    }
    void input() override {
        cout << "Masukkan Uang Pendaftaran: " << endl;
        cin >> uangPendaftaran;

        cout << "Masukkan Uang Semesterr Pertama: " << endl;
        cin >> uangSemesterPertama;

        cout << "Masukkan Uang Bangunan: " << endl;
        cin >> uangBangunan;
    }
    void hitungBiayaTotal() {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }
    void tampilkanTotalBiaya() {
        cout << "Total Biaya mu adalah: " << totalBiaya << endl;
            if (2000000 <= totalBiaya < 5000000)
                cout << "Kategori: Murah" << endl;
                cout << "Rekomendasi: Direkomendasikan" << endl;
            if (5000000 <= totalBiaya < 7000000)
                cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Dipertimbangkan" << endl;
            if (totalBiaya > 7000000)
                cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
    }
};
class SNBP : public MasukUniversitas {
    void namaJalurMasuk() {
        cout << "\nJalur Masuk mu adalah: SNBP" << "\n" << endl;
    }
    void input() override {
        cout << "Masukkan Uang Pendaftaran: " << endl;
        cin >> uangPendaftaran;

        cout << "Masukkan Uang Semesterr Pertama: " << endl;
        cin >> uangSemesterPertama;

        cout << "Masukkan Uang Bangunan: " << endl;
        cin >> uangBangunan;
    }
    void hitungBiayaTotal() {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }
    void tampilkanTotalBiaya() {
        cout << "Total Biaya mu adalah: " << totalBiaya << endl;
        if (2000000 <= totalBiaya < 5000000)
            cout << "Kategori: Murah" << endl;
        cout << "Rekomendasi: Direkomendasikan" << endl;
        if (5000000 <= totalBiaya < 7000000)
            cout << "Kategori: Sedang" << endl;
        cout << "Rekomendasi: Dipertimbangkan" << endl;
        if (totalBiaya > 7000000)
            cout << "Kategori: Mahal" << endl;
        cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
    }
};
int main() {
    char pilihan;
    MasukUniversitas* Masuk;
    do
    {
        cout << "\nPilih jalur masuk:" << endl;
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan anda: " << endl;
        cin >> pilihan;

        switch (pilihan){
            case 1:
                SNBT();
                break;
            case 2:
                SNBP();
                break;
            case 3:

    }
}