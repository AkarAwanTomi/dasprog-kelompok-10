KELOMPOK 10  DASPROG

Nama anggota :
1. Akar Adamanta Motik (5048251037)
2. Keefe Wiryawan Salim (5048251067)
3. M. Tommy Lutfan (5048251077)

Asal Institusi :
Institut Teknologi Sepuluh Nopember Surabaya, Program Studi Teknik Telekomunikasi.

PEMBAGIAN TUGAS : 
1. AKAR : Konversi desimal ke biner, oktal, heksadesimal, dan sebaliknya.
2. AWAN : Verifikasi rangkaian elektrik (V/I/R/P).
3. TOMMY : Verifikasi rangkaian elektrik (jumlah resistor seri dan paralel).

Fitur Kalkulator :
1. Menghitung besarnya tegangan, arus, resistor, dan daya listrik.
2. Dapat menghitung besarnya jumlah resistor baik seri, maupun paralel.
3. Dapat mengonversi bilangan desimal ke biner, oktal, heksadesimal, dan sebaliknya.

FUNGSI YANG DIGUNAKAN :
1. Fungsi Utama :
   
main() : Ini adalah fungsi utama dan titik masuk (entry point) dari eksekusi program C. Fungsi ini menjalankan loop utama program dan memanggil fungsi-fungsi lain berdasarkan pilihan pengguna .
2. Fungsi untuk mencetak menu kalkulator :
   
layout() : Fungsi ini bertanggung jawab untuk menampilkan menu utama kalkulator kepada pengguna, termasuk opsi untuk kalkulator Hukum Ohm, Daya Listrik, Resistor Seri/Paralel, konversi basis bilangan, dan keluar. 

3. Fungsi Kalkulator Rangkaian Listrik (Verifikasi Rangkaian Elektrik) :
   
•	kalkulatorhukumohm() : Fungsi ini menghitung salah satu dari Tegangan (V), Arus (I), atau Resistor (R) berdasarkan Hukum Ohm (V = I \ R) sesuai pilihan pengguna.

o	Menghitung V: Meminta Arus dan Resistor.

o	Menghitung I: Meminta Tegangan dan Resistor.

o	Menghitung R: Meminta Tegangan dan Arus.

•	kalkulatordayalistrik() : Fungsi ini menghitung Daya Listrik (P) menggunakan rumus P = V x I dengan meminta input Tegangan dan Arus dari pengguna .

•	kalkulatorresistorseri() : Fungsi ini menghitung Total Hambatan Resistor Seri dengan menjumlahkan nilai semua resistor yang dimasukkan oleh pengguna .

•	kalkulatorresistorparalel() : Fungsi ini menghitung Total Hambatan Resistor Paralel dengan menjumlahkan kebalikan nilai resistor, kemudian mengambil kebalikan dari totalnya .

•	Pada verifikasi rangkaian elektrik ini menggunakan syntax bahasa c dalam operasi matematika biasa.

4. Fungsi Utilitas Sistem Digital :
   
•	konversikebiner(long long desimal) : Mengonversi bilangan desimal ke bilangan Biner.

•	konversikeoktal(int desimal) : Mengonversi bilangan desimal ke bilangan Oktal.

•	konversikeheksa(int desimal) : Mengonversi bilangan desimal ke bilangan Heksadesimal.

•	konversibinerkedesimal() : Mengonversi bilangan Biner ke bilangan Desimal tanpa menggunakan pangkat. Sebagai alternatif, kami menggunakan kelipatan 2 pada “i” dan khusus looping pertama, i sudah terdeklarasi 1.

•	konversioktalkedesimal() : Fungsi ini dimaksudkan untuk mengonversi bilangan Oktal ke bilangan Desimal dengan memanfaatkan %o.

•	konversiheksakedesimal() : Mengonversi bilangan Heksadesimal ke bilangan Desimal dengan memanfaatkan %s.






