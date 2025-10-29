#pragma once

/*
##################################################################
ESERCIZI OPERATORI E STRUTTURE DI CONTROLLO:
##################################################################

1. Enum e switch (Base)
Obiettivo: Definire un enum e usarlo in uno switch.
Definisci un enum chiamato StatoSemaforo con i valori ROSSO, GIALLO, VERDE.
Dichiara una variabile statoAttuale e assegnale GIALLO.
Usa una struttura di controllo switch per stampare il 
messaggio appropriato in base a statoAttuale:
ROSSO: "STOP! Attendere."
GIALLO: "Attenzione! Prepararsi."
VERDE: "VIA! Si può procedere."

2. Operatori Aritmetici, Assegnazione e if/else
Obiettivo: Utilizzare operatori base e una struttura condizionale.
Dichiara due variabili intere: base = 12 e altezza = 5.
Calcola l'area del rettangolo (area = base * altezza).
Raddoppia il valore di area usando l'operatore di assegnazione composto (*=).
Usa una struttura if/else per stampare:
"L'area raddoppiata supera i 100." se area è maggiore di 100.
"L'area raddoppiata è 100 o meno." altrimenti.

3. Ciclo for e Operatore Modulo (%)
Obiettivo: Usare il ciclo for e l'operatore modulo per trovare numeri pari.
Usa un ciclo for per iterare i numeri da 1 a 20 (inclusi).
All'interno del ciclo, usa l'operatore modulo (%) e una condizione if 
per determinare se il numero corrente è pari.
Stampa solo i numeri pari.

4. Ciclo while e Operatori di Incremento
Obiettivo: Usare il ciclo while per un'iterazione controllata.
Dichiara una variabile contatore = 5 e risultato = 1.
Usa un ciclo while che continua finché contatore è maggiore di 0.
All'interno del ciclo:
Moltiplica risultato per contatore (risultato *= contatore;).
Decrementa contatore usando l'operatore postfisso (contatore--).
Stampa il valore finale di risultato (dovrebbe essere $5! = 120$).

5. Ciclo do-while per Input Utente
Obiettivo: Garantire che un blocco di codice venga eseguito almeno una volta.
Dichiara una variabile booleana continua e inizializzala a true.
Usa un ciclo do-while che si ripete finché continua è true.
All'interno del ciclo, chiedi all'utente di inserire un carattere ('S' per sì, 'N' per no).
Se l'utente inserisce 'N' (o 'n'), imposta continua a false.
Stampa un messaggio di conferma ogni volta che il ciclo viene eseguito.

6. Operatori Relazionali e Logici
Obiettivo: Combinare operatori relazionali e logici per una verifica complessa.
Dichiara tre variabili: punti = 85, presenze = 90, requisitoMinimo = 60.
Scrivi una singola condizione if che valuti se lo studente è promosso. La regola è:
Deve avere più di requisitoMinimo punti E le presenze devono essere uguali o maggiori di 80.
Stampa "Promosso" o "Non Promosso" in base al risultato della condizione.

7. Ciclo for-each (Range-Based For Loop)
Obiettivo: Scorrere e leggere elementi di una collezione.
Crea un std::vector<std::string> chiamato colori contenente: "Rosso", "Verde", "Blu", "Giallo".
Usa un ciclo for-each per stampare ogni elemento della collezione, 
preceduto dalla stringa "Il colore è: ".

8. Ciclo for-each per Modifica (Riferimento)
Obiettivo: Scorrere e modificare gli elementi di una collezione.
Crea un std::vector<int> chiamato prezzi contenente: 10, 25, 5, 40.
Usa un ciclo for-each che utilizzi un riferimento (auto&) per iterare su prezzi.
All'interno del ciclo, aumenta del 10% il valore di ogni prezzo 
(moltiplica per 1.1 e tronca all'intero).
Dopo il ciclo, stampa i nuovi valori di prezzi usando un altro for-each di sola lettura.

9. Operatore Bitwise AND (&) per la Verifica
Obiettivo: Usare l'operatore AND per controllare lo stato di un singolo bit (flag).
Definisci un numero intero permessi = 6 (binario 0110). Supponiamo che:
Bit 0 (valore 1) = Permesso di Lettura
Bit 1 (valore 2) = Permesso di Scrittura
Bit 2 (valore 4) = Permesso di Esecuzione
Definisci una maschera MASCHERA_SCRITTURA = 2 (binario 0010).
Usa una condizione if con l'operatore & per verificare se il permesso di Scrittura è attivo:
if (permessi & MASCHERA_SCRITTURA)
Stampa "Il permesso di scrittura è attivo." o "Il permesso di scrittura NON è attivo."

10. Operatori Bitwise Shift (<<, >>)
Obiettivo: Eseguire operazioni di shift per moltiplicazione/divisione.
Dichiara una variabile valoreIniziale = 13.
Calcola valoreMoltiplicato spostando i bit di valoreIniziale di 3 posizioni a sinistra (<<). 
(Dovrebbe essere $13 \times 8$).
Calcola valoreDiviso spostando i bit di valoreMoltiplicato di 2 posizioni a destra (>>). 
(Dovrebbe essere divisione intera per 4).
Stampa i tre valori ottenuti.


##################################################################
ESERCIZI PUNTATORI:
##################################################################

Esercizio 1: Dichiarazione e Assegnazione Base
Scrivi un programma che:
Dichiari una variabile int chiamata numero e la inizializzi a 42.
Dichiari un puntatore a int chiamato p_numero.
Assegni a p_numero l'indirizzo di numero usando l'operatore &.
Stampi il valore di numero usando sia la variabile numero che il 
puntatore p_numero (tramite dereferenziazione *).

Esercizio 2: Modifica Tramite Puntatore
Scrivi un programma che:
Dichiari una variabile double chiamata prezzo e la inizializzi a 99.90.
Dichiari e inizializzi un puntatore a double (p_prezzo) con l'indirizzo di prezzo.
Usi il puntatore p_prezzo per modificare il valore di prezzo a 149.99.
Stampi il nuovo valore di prezzo per confermare la modifica.

Esercizio 3: Passaggio per Riferimento (Funzione)
Scrivi una funzione chiamata raddoppia che accetti un puntatore a intero (int*) 
come argomento. La funzione deve raddoppiare il valore della variabile puntata.
Nel main, dichiara un intero valore = 5 e chiama raddoppia passandole l'indirizzo 
di valore. Stampa valore prima e dopo la chiamata.
C++
void raddoppia(int *ptr) {
    // ... implementazione
}


Esercizio 4: Scambio di Valori (Swap)
Scrivi una funzione chiamata scambia che accetti due puntatori a intero (int*, int*). 
La funzione deve scambiare i valori delle due variabili puntate 
(utilizzando una variabile temporanea).
Nel main, dichiara a = 10 e b = 20. Chiama scambia(&a, &b) e verifica che i loro 
valori siano stati scambiati.

Esercizio 5: Puntatori e Stringhe (Array di Caratteri)
Scrivi un programma che:
Dichiari un array di caratteri (stringa C-style) chiamato parola inizializzato a "Puntatore".
Dichiari un puntatore a char chiamato p_parola e lo punti al primo elemento dell'array (parola).
Usi la dereferenziazione (*p_parola) per cambiare il primo carattere della parola da 'P' a 'C'.
Stampi la stringa modificata.

Esercizio 6: Aritmetica dei Puntatori su Array
Scrivi un programma che:
Dichiari un array int numeri[] = {1, 3, 5, 7, 9}.
Dichiari un puntatore a int chiamato p_array e lo punti all'inizio dell'array.
Usi l'aritmetica dei puntatori per accedere e stampare il terzo elemento dell'array 
usando l'espressione *(p_array + 2).

Esercizio 7: Iterazione con Aritmetica dei Puntatori
Scrivi un programma che:
Dichiari un array int voti[] = {22, 25, 30, 28}.
Usi un puntatore a int e un ciclo for per scorrere l'intero array e stampare ogni elemento. 
Ad ogni iterazione, incrementa il puntatore (p++) per passare all'elemento successivo.
Suggerimento: devi conoscere la dimensione dell'array o usare il puntatore iniziale 
per stabilire la condizione di uscita.

Esercizio 8: Allocazione Dinamica di Memoria
Scrivi un programma che:
Usi l'operatore new per allocare dinamicamente un intero nell'heap.
Assegni il valore 123 alla locazione di memoria puntata.
Stampi il valore allocato.
Usi l'operatore delete per liberare la memoria allocata e imposta il puntatore a nullptr.

Esercizio 9: Accesso ai Membri di una Struttura (Operatore ->)
Data la seguente struttura:
C++
struct Punto {
    int x;
    int y;
};

Scrivi un programma che:
Dichiari e allochi dinamicamente un oggetto Punto usando new.
Usi l'operatore -> (freccia) per assegnare x = 10 e y = 5 ai membri della struttura.
Stampi i valori di x e y usando l'operatore ->.
Libera la memoria.

Esercizio 10: Puntatori a Puntatori (Doppia Indirezione)
Scrivi un programma che:
Dichiari una variabile int chiamata a con valore 100.
Dichiari un puntatore a int chiamato p1 e lo punti ad a.
Dichiari un puntatore a puntatore a int chiamato p2 (int**) e lo punti a p1.
Stampa:
Il valore di a usando due dereferenziazioni su p2 (**p2).
L'indirizzo di a usando p1.
L'indirizzo di p1 usando p2.


*/