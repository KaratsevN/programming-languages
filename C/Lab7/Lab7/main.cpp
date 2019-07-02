#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <locale.h>

struct ELEM {
    int d;
    ELEM* next;
} *pend, *pbeg, *ph;


void first_elem(int d) {
    ph = new ELEM;
    ph->d = d;
    ph->next = NULL;
    pbeg = ph;
    pend = ph;
}
int str(ELEM*const pbeg) {
    int i=1;
    ph = pbeg;
    while ((ph->next) != 0) {
        ph = ph->next;
        i++;
    }
    return i;
}
void del_str(ELEM**pbeg, ELEM**pend, int k) {
    ELEM*pk;
    ELEM*ph = *pbeg;
    if (!*pbeg) {
        printf("Does not exist!");
        return;
    }
    if (((*pbeg)->d) == k) {
        if (*pbeg == *pend) {
            *pbeg = 0;
            *pend = 0;
            delete ph;
        }

        else {
            *pbeg = (*pbeg)->next;
            delete ph;
        }
    }
    else {
        while ((ph->next) && (ph->next->d) != k) {
            ph = ph->next;
        }
        pk = ph->next;
        if (pk) {
            ph->next = pk->next;
            delete pk;
        }

        else
            return;
    }

    return;
}
void vivod(ELEM*const pbeg) {
    if (pbeg == 0) {
        printf("is empty");
        return;
    }
    ph = new ELEM;
    ph = pbeg;
    printf("%i->", ph->d);
    while ((ph->next) != NULL) {
        ph = ph->next;
        printf("%i->", ph->d);
    }
    printf("0\n");
}

void add(ELEM**pend, int d) {
    ph = new ELEM;
    ph->d = d;
    ph->next = NULL;
    (*pend)->next = ph;
    *pend = ph;
}
ELEM* find_elem(ELEM* const pbeg) {
    if (pbeg == 0) {
        return NULL ;
    }
    else {
        ph = pbeg;
        ELEM *pl = new ELEM;
        if (ph->next != NULL) {
            pl = ph->next;
        }
        else{
            return ph;
        }
        while (pl != NULL) {
            if ((ph->d) >= (pl->d)) {
                pl = pl->next;
            }
            else {
                ph = pl;
                pl = pl->next;
            }
        }
        return ph;
    }
}

int main() {
    int d, s, q, k, a, o;
    printf("Input d:");
    scanf("%i", &d);
    first_elem(d);
    printf("if u wanna add struct input <1>\nif u wanna stop and discover the result input <2>");
    scanf("%i", &s);
    while ((s != 1) && (s != 2)) {
        printf("Input again:");
        scanf("%i",&s);
    }
    while (s == 1) {
        printf("Input d:");
        scanf("%i", &d);
        add(&pend, d);
        printf("if u wanna add struct input «1»\nif u wanna stop and discover the result input «2»");
        scanf("%i", &s);
    }
    printf("Do u wanna see all structs?1-yes. 2-yesn't");
    scanf("%i", &o);
    while ((o != 1) && (o != 2)) {
        printf("Input again");
        scanf("%i", &o);
    }
    if (o == 1) {
        vivod(pbeg);
    }
    printf("Do u wanna delete some struct? yes:1. no:2.");
    scanf("%i", &q);
    while ((q != 1) && (q != 2)) {
        printf("Input again:");
        scanf("%i", &q);
    }


    if (q == 1) {
        printf("Input <d> which u wanna delete:");
        scanf("%i", &k);
        del_str(&pbeg, &pend, k);
    }
    if (pbeg == NULL) {
        printf("is empty now\n");
        return 1;
    }
    else
    {
        a = str(pbeg);
        printf("Quanity of structs:%i", a);
        ELEM* pq = find_elem(pbeg);
        printf("\nMax elem is:%i\n", (pq->d));
        system("PAUSE");
        return 0;
    }
}