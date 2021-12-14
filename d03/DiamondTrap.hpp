partial ref class Diamond : public ScavTrap, FragTrap {
    private:
        std::string             _name;
        int                     _hit_points;
        int                     _energy_points;
    public:
        Diamond               (std::string);
        Diamond               (std::string name) :
            _name(name),
            ClapTrap(name + "_clap_name"),
            _hit_points(Fragtrap::frag_hit_points), // mettre en static fraghitpoint, ne pas taper sur 
        {
        }
        Diamond               (const ClapTrap &f);
        ~Diamond              ();

        getClapName() {
            return ClapTrap::_name;
        }
};

Diamond d();
