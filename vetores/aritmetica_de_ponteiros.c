/*
O sistema operacional guarda o primeiro endereco, no caso,
S104 e a partir do mesmo realiza os calculos.
(v + 0) = &v[0] = S104
Vamos pegar o endereco de memoria atual S104 e somar 
com a quantidade de deslocamentos
multiplicando pela quantidade de bytes do tipo,
que no caso e inteiro com 4 bytes.
&v[1]
s104 + 1 * 4 = s108
(v + 1) = &v[1] = 108

Outro exemplo:
Quero acessar o valor que esta nesse vetor v[3]
O sistema le desse forma:
O endereco base nesse exemplo e S104
* = Quero o valor
v[3] = *(v + 3)
v[3] = *(s104 + 3 * 4)
v[3] = *(s116)
v[3] = 12
*/
