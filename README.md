PROGRAM KONVERSI BILANGAN
Konversi bilangan biner ke desimal dan desimal ke biner dengan
menggunakan struktur data STACK dengan bahasa pemrograman CPP (c++)

NOTE : 
dapat menerima input berupa bilangan positif dan negatif
dapat mengkonversi 2nd Complement

CONTOH INPUT DAN OUTPUT :
DECIMAL to BINARY 
INPUT 		: BILANGAN BULAT POSITIF
OUTPUT 	: LIST of biner 

DECIMAL to BINARY 
INPUT 		: BILANGAN BULAT NEGATIF
OUTPUT 	: LIST of biner 

BINARY TO DECIMAL
INPUT BINER 				: STRING biner
OUTPUT 				: NEGATIF DEC

BINARY TO DECIMAL
INPUT 2nd COMPLEMENT BINER 	: STRING biner
OUTPUT 				: NEGATIF DEC

FUNCTIONAL PROGRAM - Menggunakan STRUKTUR DATA pada algoritmanya
NOTE : LIST BINER = List of biner, yaitu list yang berisikan bit 0 / 1

1. FUNCTION getIntValue( ) -> INTEGER
Fugsi untuk meminta inputan bilangan bulat

2. FUNCTION getBiner( ) -> STRING
Fungsi untuk meminta inputan string biner

3. FUNCTION  Des2Bin (INP INTEGER) -> LIST BINER
Fungsi untuk mengkonversi bilangan desimal menjadi LIST BINER 
Tampilkan tahapan penggunaan struktur data (tampilkan isi LIST/STACK/QUEUE)

4. FUNCTION Bin2Des (INP STRING) ->INTEGER
Fungsi untuk mengkonversi string biner menjadi desimal
Tampilkan tahapan penggunaan struktur data (tampilkan isi LIST/STACK/QUEUE)

5. PROCEDURE ShowBinary(INP LIST BINER)
Menampilkan isi dari list biner
