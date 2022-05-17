template<typename T>
class Mask_array;

template <typename T>
class Unknow_node : public Exp_tree<T> {
   public:
    Mask_array<T>& marray;
    Unknow_node(Mask_array<T>& _marray) : marray(_marray) {}
    T eval(size_t pos) { return marray.data[pos]; }
    void del() {delete this; }
};
