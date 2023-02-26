# PIR_Hareket_Sensoru_Lcd_Ekran_Hareket Algilama_Proje_Kodlari
 Bu projede bir PIR sensörü kullanarak hareket algılandığında bir LCD ekranda, seri portta ve bir LED ile birlikte bir alarmın etkinleştirilmesi amaçlanmaktadır. Projede ayrıca bir aktif buzzer kullanılmaktadır, böylece alarmı daha belirgin hale getirmek için sesli uyarı da verilmektedir.

Kod, sensörün çıkışını okur ve sensörün çıkışının yüksek olduğu durumlarda (hareket algılandığında) bir dizi işlem gerçekleştirir. İlk olarak, seri port üzerinden "Hareket Algılandı" mesajı gönderilir ve LCD ekranda "Hareket Algılandı" yazısı görüntülenir. Ayrıca LED yanar ve buzzer bir ses üretir. Hareket algılanmadığında, seri portta "Hareket Yok" mesajı gönderilir ve LED ve buzzer kapatılır. LCD ekranda da "Hareket Yok" mesajı görüntülenir.

Bu projenin kullanım alanları arasında ev güvenliği, ofis güvenliği ve diğer yerlerdeki hareket algılama uygulamaları yer alabilir.
