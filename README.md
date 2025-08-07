# ToDoList
This project was created with the help of AI assistance, but every line of code was written with full understanding of its structure and logic. I used this opportunity to improve my skills in basic C programming, especially in working with arrays, user input, and menu-driven applications.





📋 Program Functionality and Features 
🔧 What does this program do?
This is a basic command-line To-Do List application written in C. It allows the user to manage a simple list of tasks by adding, viewing, and deleting them. It is designed to be beginner-friendly and easy to understand.

🌟 Features:
🟢 Add Tasks: The user can write a new task and add it to the list.

📄 View Tasks: All added tasks are displayed with numbering.

❌ Delete Tasks: The user can delete a task by entering its number.

🔁 Continuous Loop: The program runs until the user chooses to exit.

💾 In-Memory Storage Only: Tasks are stored in memory (RAM); no file saving in this version.

👶 Beginner-Friendly: No functions or advanced structures; all logic is in the main() function using simple if statements.

🔤 Maximum of 10 tasks can be stored (due to fixed-size array).


.

📋 Programın İşlevi ve Özellikleri (Türkçe)
🔧 Bu program ne yapar?
Bu basit C programı, terminal (komut satırı) üzerinden çalışan bir yapılacaklar listesi (to-do list) uygulamasıdır. Kullanıcı, görevler ekleyebilir, listeleyebilir ve silebilir. Program yeni başlayanlar için uygun olacak şekilde yazılmıştır.

🌟 Özellikler:
🟢 Görev Ekleme: Kullanıcı yeni bir görev yazar ve listeye ekler.

📄 Görevleri Görüntüleme: Eklenen tüm görevler numaralandırılmış şekilde görüntülenir.

❌ Görev Silme: Kullanıcı, silmek istediği görevin numarasını girerek görevleri silebilir.

🔁 Sürekli Çalışma: Kullanıcı "Çıkış" seçeneğini seçene kadar program çalışmaya devam eder.

💾 Bellekte Saklama: Görevler bellekte tutulur, dosyaya kaydedilmez (temel sürüm).

👶 Yeni Başlayanlar İçin Uygun: Fonksiyon kullanılmaz; tüm işlemler main() içinde basit yapılarla yapılır.

🔤 Maksimum 10 görev eklenebilir (sabit boyutlu dizi kullanımı).





# 📝 Simple To-Do List in C

A beginner-friendly command-line **To-Do List** application written in C.  
Yeni başlayanlar için C diliyle yazılmış basit bir terminal tabanlı yapılacaklar listesi uygulaması.

---

## 🎯 Features / Özellikler

- 🟢 Add Tasks / Görev Ekle
- 📄 View Tasks / Görevleri Görüntüle
- ❌ Delete Tasks / Görev Sil
- 🔁 Menu-based navigation / Menü tabanlı kontrol
- 💾 In-memory storage (no files) / Sadece bellek üzerinde çalışır (dosya kullanılmaz)
- 👶 All logic inside `main()` function / Tüm işlemler `main()` fonksiyonu içinde yapılır
- 🔤 Maximum 10 tasks / En fazla 10 görev eklenebilir

---

## 🧠 How This Code Was Written / Bu Kod Nasıl Yazıldı?

### 🧩 Idea & Purpose / Fikir & Amaç

This project was created to help beginners practice basic C programming with a real-world example.  
Bu proje, gerçek dünya örneğiyle yeni başlayanların C programlamadaki temel yapılarını uygulamalı öğrenmeleri için geliştirildi.

### 🔧 Key Structures Used / Kullanılan Temel Yapılar

#### 📌 `char tasks[10][100];`
- Stores up to 10 tasks, each with a max of 100 characters.
- Sabit uzunlukta 10 görev saklar. Her görev en fazla 100 karakter olabilir.

#### 🔁 `while (1) {...}`
- Infinite loop that keeps the program running until the user selects Exit.
- Kullanıcı "Çıkış" demedikçe programın çalışmasını sağlar.

#### 📝 `fgets()` for Task Input / Görev Girişi için `fgets()`
```c
fgets(tasks[taskCount], 100, stdin);
tasks[taskCount][strcspn(tasks[taskCount], "\n")] = 0;
