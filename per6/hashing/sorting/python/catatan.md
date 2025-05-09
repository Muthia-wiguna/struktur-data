# Sorting Dan Hashing

**Apa itu sorting?**
**sorting** adalah proses mengurutkan data berdasarkan aturan tertentu, seperti dari kecil ke besar (ascending) atau besar ke kecil (descending). Tujuannya adalah untuk mempermudah pencarian, analisis, dan visualisasi data.

**Apa itu Hashing?**
**Hashing** adalah teknik untuk menyimpan dan mengambil data secara efisien menggunakan struktur data bernama hash table. Hashing menggunakan fungsi hash untuk memetakan data ke indeks tertentu dalam array, memungkinkan akses data yang cepat.

## Komponen Utama Hashing:
*Fungsi Hash*: Mengubah kunci (key) menjadi indeks dalam array.
*Hash Table*: Struktur data array tempat penyimpanan nilai berdasarkan indeks dari fungsi hash.

### Penanganan Tabrakan (Collision Handling):
*Chaining*: Menggunakan linked list untuk menyimpan beberapa elemen pada indeks yang sama.
*Open Addressing*: Mencari slot kosong berikutnya dalam array (misalnya, linear probing, quadratic probing).

### Kelebihan Hashing:
Akses data sangat cepat (rata-rata O(1)).
Cocok untuk implementasi struktur data seperti dictionary, cache, dan indeks database.