#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

# define RESET       "\033[0m"
# define BLACK       "\033[30m"             /* Black */
# define RED         "\033[31m"             /* Red */
# define GREEN       "\033[32m"             /* Green */
# define YELLOW      "\033[33m"             /* Yellow */
# define BLUE        "\033[34m"             /* Blue */
# define MAGENTA     "\033[35m"             /* Magenta */
# define CYAN        "\033[36m"             /* Cyan */
# define WHITE       "\033[37m"             /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
# define LEVEL_COUNT 4

class Karen;

enum {
    DEBUG = 0,
    INFO,
    WARNING,
    ERROR,
};

typedef struct  s_level
{
	std::string label;
	void        (Karen::*fn)(void);
}               t_level;

class Karen {
    private:
        t_level levels[LEVEL_COUNT];
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        Karen();
        void    complain(std::string level);
};

#endif