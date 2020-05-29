#include <stdio.h>

int main() {

    enum Company { GOOGLE = 40, FACEBOOK , XEROX, YAHOO = 50, EBAY, MICROSOFT };

    enum Company xerox = XEROX;

    enum Company google = GOOGLE;

    enum Company ebay = EBAY;

    enum Company Microsoft = MICROSOFT;

    enum Company Yahoo = YAHOO;

    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);
    printf("The value of Microsoft is: %d\n", Microsoft);
    printf("The value of yahoo is: %d\n", Yahoo);
    return 0;

}