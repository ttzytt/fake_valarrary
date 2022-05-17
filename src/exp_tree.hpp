template <typename T>
class Exp_tree {
   public:
    virtual T eval(size_t pos) { return 0; };
    virtual void del() { return; };
   private:
};