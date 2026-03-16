# gerador_de_primos
Algoritmo que, segundo o principio de que todo primeiro divisor de determinado inteiro é primo, encontra números divisiveis apenas por eles mesmos ou por 1. 
Prova:  <br>
a | b, então a * q = b; <br>
c | a, então c * q' = a;  <br>
logo, c | b, pois:  <br>

a * q * c * q' = b * a  <br>
q * c * q' = b  <br>
c * (q * q') = b, logo c * z = b, sendo z = q * q'
