#include <stdio.h>
#include <stdlib.h>


typedef struct {
    size_t Id;
} Apartment;

typedef struct {
    Apartment *apartments;
} Hotel;

Hotel *createHotel();
void removeHotel(Hotel **hotel);
void clearHotel(Hotel *hotel);

int main() {
    Hotel *hotel = createHotel();
    Hotel *hotel2 = createHotel();

    // free(hotel); causes memory leak
    
    printf("%p\n", hotel);

    // removeHotel(&hotel);
    clearHotel(hotel);
    hotel = NULL;

    clearHotel(hotel2);
    hotel2 = NULL;

    printf("%p\n", hotel);

    return 0;
}

Hotel *createHotel() {
    Hotel *hotel = (Hotel *)malloc(sizeof(Hotel));

    hotel->apartments = (Apartment *)malloc(sizeof(Apartment) * 10);

    return hotel;
}

void removeHotel(Hotel **hotelPtr) {
    free((*hotelPtr)->apartments);
    free(*hotelPtr);
    *hotelPtr = NULL;
}

void clearHotel(Hotel *hotel) {
    free(hotel->apartments);
    free(hotel);
}