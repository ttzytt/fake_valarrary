template <typename T>
class Exp_tree {
   public:
    typedef std::map<UNKNOW_KEY_T, T> variable_table;
    virtual T eval(variable_table& vars) { return 0; };
    virtual void del() { return; };
   private:
};