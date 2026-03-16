# gerador_de_primos
Algoritmo que, segundo o principio de que todo primeiro divisor de determinado inteiro é primo, encontra números divisiveis apenas por eles mesmos ou por 1. 
Prova:
a | b, então a * q = b; \n
c | a, então c * q' = a;
logo, c | b, pois:

a * q * c * q' = b * a
q * c * q' = b
c * (q * q') = b, logo c * z = b, sendo z = q * q'
