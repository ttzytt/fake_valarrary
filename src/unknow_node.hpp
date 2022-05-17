
template <typename T>
class Unknow_node : public Exp_tree<T> {
   public:
    using typename Exp_tree<T>::variable_table;
    UNKNOW_KEY_T name;
    Unknow_node(UNKNOW_KEY_T _name) : name(_name) {}
    T eval(variable_table &vars) { return vars[name]; }
    void del() { delete this; }
};
