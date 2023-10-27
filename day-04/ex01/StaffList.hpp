#ifndef StaffList_HPP
#define StaffList_HPP

#include <vector>

#include "Staff.hpp"
#include "Singleton.hpp"

// class Singleton;

class StaffList: public Singleton<StaffList>
{
private:
    std::vector<Staff *> staffs;
    StaffList();
public:
    ~StaffList();
    void registerStaff(Staff *staff);
    void releaseStaff(Staff *staff);
    Staff * showStaff(std::size_t index);
    void showAllStaffs();

    friend class Singleton;
};

#endif // StaffList_HPP