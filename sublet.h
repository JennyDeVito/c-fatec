/*macros de reconhecimento e substituição de caracteres*/

#define eh_minuscula(c) ((c) >= 'a' && (c) <= 'z')
#define eh_maiuscula(c) ((c) >= 'A' && (c) <= 'Z')
#define minuscula(c) (((c) >= 'A' && (c) <= 'Z')?(c+32):(c))
#define maiuscula(c) (((c) >= 'a' && (c) <= 'z')?(c-32):(c))
