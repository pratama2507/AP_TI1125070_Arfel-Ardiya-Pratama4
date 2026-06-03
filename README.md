# AP_TI1125070_Arfel-Ardiya-Pratama4

Nama : Arfel Ardiya Pratama

NIM : TI1125070

Kelas : TI12D

Struktur Program
Program ini bertujuan menghitung luas persegi panjang. Namun ada hal yang perlu diperhatikan di sini, yaitu program ini belum lengkap karena fungsi hitungLuas() baru dideklarasikan tapi belum didefinisikan isi logikanya.

Deklarasi Fungsi hitungLuas(int p, int l)
Baris int hitungLuas(int p, int l); yang berada di atas main() disebut sebagai function prototype atau deklarasi fungsi. Tujuannya adalah memberitahu compiler bahwa fungsi bernama hitungLuas akan ada dan menerima dua parameter bertipe int. Dengan adanya deklarasi ini, fungsi tersebut sudah bisa dipanggil di dalam main() meskipun definisi lengkapnya belum ditulis.
Masalahnya, di kode ini definisi fungsi tersebut tidak ada sama sekali. Artinya compiler tahu fungsi itu akan ada, tapi isinya tidak pernah ditulis, sehingga program ini akan gagal saat dikompilasi karena fungsi hitungLuas() tidak pernah didefinisikan.

Fungsi main()
Di dalam main(), dua variabel dideklarasikan yaitu p bernilai 10 sebagai panjang dan l bernilai 5 sebagai lebar. Kemudian fungsi hitungLuas(p, l) dipanggil dengan mengirimkan kedua variabel tersebut sebagai argumen, dan hasilnya disimpan ke variabel hasil. Setelah itu program mencetak nilai panjang, lebar, dan luas ke layar.

Agar Program Bisa Berjalan
Fungsi hitungLuas() perlu ditambahkan definisinya seperti berikut:
cppint hitungLuas(int p, int l){
    return p * l;
}
Setelah ditambahkan, program akan berjalan normal dan menghasilkan output:
Panjang: 10 Lebar: 5
Luas persegi panjang: 50

Konsep Kunci yang Digunakan
KonsepPenjelasanFunction PrototypeDeklarasi awal fungsi sebelum main() agar bisa dikenali compilerDefinisi FungsiBagian yang berisi logika atau isi dari fungsi, di kode ini bagian inilah yang hilangReturn type intFungsi mengembalikan nilai bertipe bilangan bulatParameterp dan l adalah data masukan yang diterima fungsi dari pemanggil
