template <typename T>
class Cond_node : public Exp_tree<T> {
   public:
    enum Conds { EQ, NE, GT, LT, GE, LE };
    Exp_tree<T> &l_tr, &r_tr;
    Conds cond;
    Cond_node(Exp_tree<T> &_l_tr, Conds _cond, Exp_tree<T> &_r_tr)
        : l_tr(_l_tr), r_tr(_r_tr), cond(_cond) {}

    T eval(size_t pos) {
        T l_val = l_tr.eval(pos);
        T r_val = r_tr.eval(pos);
        switch (cond) {
            case EQ:
                return l_val == r_val;
            case NE:
                return l_val != r_val;
            case GT:
                return l_val > r_val;
            case LT:
                return l_val < r_val;
            case GE:
                return l_val >= r_val;
            case LE:
                return l_val <= r_val;
            default:
                throw "unknown condition";
        }
    }

    void del() {
        l_tr.del();
        r_tr.del();
        delete this;
    }
};