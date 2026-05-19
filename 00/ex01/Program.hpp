#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include "PhoneBook.hpp"
#include <string>

class Program {
    private:
    PhoneBook _phoneBook;
    bool _is_running;
    void _add (void);
    void _search (void);
    void _exit (void);
    void _print_commands (void);
    void _handle_command (std::string cmd);
    std::string _getField (const std::string& prompt);
    std::string _truncate (const std::string& field);
    void _displayContactShort (const Contact* contact, int idx);
    void _displayContactLong (const Contact* contact);
    void _displayHeaderShort (void);

    public:
    Program ();
    void run ();
};

#endif
