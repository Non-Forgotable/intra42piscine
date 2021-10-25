ls -l | awk 'NR % 2 == 1 {print}'
#awk varsayılan olarak sekmeyi veya boşlukları dosya ayırıcı olarak değerlendirir.
#NR-> number record 
