// Um ponteiro nada mais é do que uma variável que guarda
// o endereço de memória uma outra variável
// Relembrando que para acessar o endereço de memória
// precisamos adicionar o & antes da variável

// Todo ponteiro ocupa oito bytes
// Ex.: Digamos que uma memória ram existam quatro caixinhas
// com os endereços 5000, 5001, 5002 e etc...
// Um ponteiro irá ocupar do 5000 ao 5008
// 1 Byte tem 8 bites. Um int tem 4 bytes totalizando
// 8 * 4 = 32 bites = 0101010101010... até 32 e isso vai representar o binário
// do valor.
// Um ponteiro tem um tipo, ou seja, se o ponteiro for do
// tipo inteiro, só será possível apontar para endereços
// que contenham valores inteiros.
// Ex.: int a = 10;
// int *p1 = null;
// p1 = &a;