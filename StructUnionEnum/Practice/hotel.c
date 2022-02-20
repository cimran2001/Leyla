#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_APARTMENTS_COUNT 8

typedef struct {
    size_t roomsCount;
    double price;
} Apartment;

typedef struct {
    const char *name;
    Apartment apartments[MAX_APARTMENTS_COUNT]; // 0 1 2 3 4 5 6 7
    size_t ordered; // 4
} Hotel;

Hotel createHotel(const char *name);
Apartment createApartment(size_t roomsCount, double price);

void printHotel(Hotel hotel);
void printApartment(Apartment apartment);

Apartment orderApartment(Hotel *hotel);

int main() {
    const char *hotelName = "Imran's Hotel";
    Hotel hotel = createHotel(hotelName);
    printHotel(hotel);

    for (size_t i = 0; i < 10; i++) {
        Apartment orderedApartment = orderApartment(&hotel);

        if (orderedApartment.roomsCount == 0) {
            printf("Couldn't order an apartment.\n");
            continue;
        }

        printApartment(orderedApartment);
    }
    printHotel(hotel);

    return 0;
}

Hotel createHotel(const char *name) {
    Hotel hotel;

    hotel.name = name;
    hotel.ordered = 0;

    srand(time(NULL));
    for (size_t i = 0; i < MAX_APARTMENTS_COUNT; i++) {
        size_t roomsCount = rand() % 5 + 1;             // 1 - 5
        double price = (rand() % 90000 + 10000) / 100.; // 100.00 - 999.99
        hotel.apartments[i] = createApartment(roomsCount, price);
    }

    return hotel;
}

Apartment createApartment(size_t roomsCount, double price) {
    Apartment apartment;

    apartment.roomsCount = roomsCount;
    apartment.price = price;

    return apartment;
}

void printHotel(Hotel hotel) {
    printf("Name: %s, ordered: %lu\n", hotel.name, hotel.ordered);
}

void printApartment(Apartment apartment) {
    printf("Rooms count: %lu, price: %.2lf\n", apartment.roomsCount, apartment.price);
}

Apartment orderApartment(Hotel *hotel) {
    if (hotel->ordered == MAX_APARTMENTS_COUNT)
        return createApartment(0, 0.);

    // Apartment result = hotel->apartments[hotel->ordered];
    // hotel->ordered++;
    // return result;
    // OR
    return hotel->apartments[hotel->ordered++];
}
