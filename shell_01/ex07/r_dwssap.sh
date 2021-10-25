cat /etc/passwd | sed '#' | awk 'NR % 2 == 0 {print}' | awk -F ":" '{print $1}' | rev | sort -r | sed -n "$FT_LINE ,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'
#sort -> sıralama| awk  -> dosya ayırıcı | 's/,/, /g' komudu her satırdan ',' sil  ', ' ata
