#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    size_t roomsCount;
    double price;
} Apartment;

typedef struct {
    const char *name;
    Apartment *apartments;
    size_t apartmentsCount;
    size_t ordered;
} Hotel;

Hotel createHotel(const char *name, size_t count);
Apartment createApartment(size_t roomsCount, double price);

void printHotel(Hotel hotel);
void printApartment(Apartment apartment);

void clearHotel(Hotel *hotel);
Apartment orderApartment(Hotel *hotel);

int main() {
    size_t hotelsCount = 2;
    Hotel *hotels = (Hotel *)calloc(hotelsCount, sizeof(Hotel));

    for (int i = 0; i < hotelsCount; i++) {
        const char *hotelName = "Imran's Hotel";
        hotels[i] = createHotel(hotelName, 100);
        printHotel(hotels[i]);

        for (size_t j = 0; j < 10; j++) {
            Apartment orderedApartment = orderApartment(hotels + i);

            if (orderedApartment.roomsCount == 0) {
                printf("Couldn't order an apartment.\n");
                continue;
            }

            printApartment(orderedApartment);
        }
        printHotel(hotels[i]);
    }

    for (int i = 0; i < hotelsCount; i++)
        clearHotel(hotels + i);
    free(hotels);
    hotels = NULL;
    
    return 0;
}

Hotel createHotel(const char *name, size_t count) {
    Hotel hotel;

    hotel.name = name;
    hotel.ordered = 0;
    hotel.apartmentsCount = count;
    hotel.apartments = (Apartment *)calloc(count, sizeof(Apartment));

    srand(time(NULL));
    for (size_t i = 0; i < count; i++) {
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
    if (hotel->ordered == hotel->apartmentsCount)
        return createApartment(0, 0.);

    // Apartment result = hotel->apartments[hotel->ordered];
    // hotel->ordered++;
    // return result;
    // OR
    return hotel->apartments[hotel->ordered++];
}

void clearHotel(Hotel *hotel) {
    free(hotel->apartments);
}
