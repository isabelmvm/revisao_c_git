// ​8. Alocação Dinâmica de Memória
// ​a) Comportamento de free: Libera o bloco de memória previamente alocado dinamicamente de volta para o sistema operacional.
// ​b) Uso após free: Não. Utilizar um ponteiro após liberá-lo causa comportamento indefinido ("dangling pointer").
// ​c) Vazamentos (Memory Leaks): Ocorrem quando a memória é alocada, mas não é liberada (não se usa o free) antes do programa perder a referência (o ponteiro) para esse bloco.
// ​d) Retorno do malloc: Se falhar (ex: falta de memória), retorna NULL.
// ​e) O calloc aloca espaço para um array de elementos e zera (inicializa com zeros) todos os bits desse espaço.
// f) Calloc vs malloc: malloc aloca um bloco de memória, mas não limpa o "lixo" contido nela.