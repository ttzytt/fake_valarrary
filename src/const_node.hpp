template <typename T>
class Const_node : public Exp_tree<T> {
   public:
    using typename Exp_tree<T>::variable_table;
    T val;
    Const_node(T _val) : val(_val) {}
    T eval(variable_table &vars) { return val; }
    void del() { delete this; }
};