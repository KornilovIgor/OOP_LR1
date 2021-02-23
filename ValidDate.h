class ValidDate
{
private:
    int day,
        month,
        year;
    bool isRange(int, int);
 public:
    void setDate(int, int, int);
    bool isValid();
    bool isLeap();
};