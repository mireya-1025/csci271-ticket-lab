// Name: Mireya Sarabia
// Date: October 20, 2025
// Project Name: csci271-ticket-lab

#ifndef FIRSTSTRUCT_TICKET_H
#define FIRSTSTRUCT_TICKET_H

#include <string>

/**
 * @struct Ticket
 * @brief A simple struct to hold data for a single theater ticket.
 *
 * This struct will use all public members for direct access.
 */
struct Ticket {
    // TODO: Add the data members for the Ticket struct here.
    std::string section;
    int row;
    int seat;
    double price;
};

#endif //FIRSTSTRUCT_TICKET_H