template <typename T>
class Const_node : public Exp_tree<T> {
   public:
    T val;
    Const_node(T _val) : val(_val) {}
    T eval(size_t pos) { return val; }
    void del() { delete this; }
};