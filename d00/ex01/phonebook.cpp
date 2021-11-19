
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
    ask_index()
{
    std::string     str;
    int             index;

    std::cout << "Type an index to display: ";
    std::cin >> str;
    index = str.at(0) - '0';
    if (str.length() == 1 && index >= 0 && index <= 7)
    {
        std::cout << "GOOD IDX" << str << std::endl;
    } else {
        std::cout << "WRONG IDX" << str << std::endl;
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
        print_ten_chars(std::to_string(i));
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
    if (Contact::count >= 8) {
        std::cout << "Too much contacts added" << std::endl;
        return (0);
    }
    contacts[Contact::count].init();
    return 1;
}

int
    main(void)
{
    std::string     input ("");
    Contact         contacts[8];

    while (input.compare("EXIT")) {
        if (input.compare("ADD") == 0) {
            add(contacts);
        } else if (input.compare("SEARCH") == 0) {
            search(contacts);
            ask_index();
        } else if (input.compare("") != 0) {
            std::cout << "Command '" << input << "' is unknown." << std::endl;
        }
        std::cout << "cmd (ADD, SEARCH, EXIT): ";
        std::cin >> input;
    }
    return 0;
}