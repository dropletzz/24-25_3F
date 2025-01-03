
int main() {
    int x = 8;
    int y = 3;
    int risultato;

    risultato = x + y; // 11
    risultato = x - y; // 5
    risultato = x * y; // 24
    risultato = x / y; // 2
    // NOTA: la divisione tra numeri interi restituisce sempre un intero
    // arrotondato per difetto

    // anche salvando il risultato in un float viene comunque tagliata
    // la parte dopo la virgola perche' x e y sono int
    float divisione = x / y; // 2

    // converto x in un float (questa operazione si chiama typecasting)
    float xx = (float) x;
    // basta che uno dei due sia un float e il risultato non e' piu' arrotondato
    divisione = xx / y; // 2.666

    // posso combinare le operazioni matematiche in espressioni complesse
    float voto1 = 9;
    float voto2 = 5;
    float voto3 = 7.5;
    float media = (voto1 + voto2 + voto3) / 3;
    // NOTA: e' importante usare le parentesi, altrimenti il risultato
    // potrebbe non essere quello desiderato

    // operatore modulo: il resto della divisione
    risultato = x % y; // 2 (il resto ottenuto dividendo 8 per 3)

    return 0;
}

