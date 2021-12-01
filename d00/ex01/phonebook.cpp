
#include "phonebook.hpp"

void
    print_split_line(std::string str)
{
    int cols = 4;
    int line_length = (10 * cols) + ((cols - 1));
    for (int i = 0; i < line_length; i++)
        std::cout << str;
    std::cout << std::endl;
}

void
    print_devider()
{
    std::cout << "|";
}
void
    print_ten_chars(std::string str)
{
    if (str.length() > 10) {
        str = str.insert(9, ".");
        str = str.substr(0, 10);
    }
    else {
        while (str.length() < 10)
            str = str.insert(0, " ");
    }
    std::cout << str;
}

void
    ask_index(Contact contacts[8])
{
    std::string     str;
    int             index;
    Contact         *c;

    std::cout << "Type an index to display: ";
    std::cin >> str;
    index = str.at(0) - '0';
    if (str.length() == 1 && index >= 0 && index < Contact::count)
    {
        c = &contacts[index];
        std::cout << "first name: " << c->first_name << std::endl;
        std::cout << "last name: " << c->last_name << std::endl;
        std::cout << "nickname: " << c->nickname << std::endl;
        std::cout << "phone number: " << c->phone_number << std::endl;
        std::cout << "darkest secret: " << c->darkest_secret << std::endl;
    } else {
        std::cout << "Wrong index, should be between 0 and " << Contact::count - 1 << std::endl;
    }
}

int
    search(Contact contacts[8])
{
    Contact *c;

    print_split_line("=");
    print_ten_chars(std::string("index"));
    print_devider();
    print_ten_chars(std::string("first name"));
    print_devider();
    print_ten_chars(std::string("last name"));
    print_devider();
    print_ten_chars(std::string("nickname"));
    std::cout << std::endl;
    print_split_line("=");
    for (int i = 0; i < Contact::count; i++) {
        c = &contacts[i];
        std::ostringstream ss;
        ss << i;
        print_ten_chars(ss.str());
        print_devider();
        print_ten_chars(c->first_name);
        print_devider();
        print_ten_chars(c->last_name);
        print_devider();
        print_ten_chars(c->nickname);
        std::cout << std::endl;
        print_split_line("-");
    }
    return 1;
}

int
    add(Contact contacts[8])
{
    if (Contact::count == 8) {
        std::cout << "Too much contacts, first contact '" << contacts[0].first_name << "' will be removed" << std::endl;
        for (int i = 1; i < 8; i++) {
            contacts[i - 1] = contacts[i];
        }
        contacts[7].init();
        return (0);
    } else {
        contacts[Contact::count].init();
    }
    return 1;
}

void
    autofill_contacts(Contact contacts[8])
{
    for (int i = 0; i < 8; i++) {
        contacts[i].autofill();
    }
}

int
    main(void)
{
    std::string     input ("");
    Contact         contacts[8];

    #ifdef AUTOFILL_CONTACTS
        std::cout << "Autofilling contacts" << std::endl;
        autofill_contacts(contacts);
    #endif

    while (input.compare("EXIT")) {
        if (input.compare("ADD") == 0) {
            add(contacts);
        } else if (input.compare("SEARCH") == 0) {
            if (Contact::count) {
                search(contacts);
                ask_index(contacts);
            } else {
                std::cout << "No contacts to display" << std::endl;
            }
        } else if (input.compare("") != 0) {
            std::cout << "Command '" << input << "' is unknown." << std::endl;
        }
        std::cout << "cmd (ADD, SEARCH, EXIT): ";
        std::cin >> input;
    }
    return 0;
}