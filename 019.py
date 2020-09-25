# 1/1/1900  was a Monday
# How many first of the month were Sundays during
# 1/1/1901 to 12/31/2000

import datetime

dow = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]


def after_or_same(lhs, rhs) -> bool:
    if lhs.year != rhs.year:
        return lhs.year > rhs.year

    if lhs.month != rhs.month:
        return lhs.month > rhs.month

    return lhs.day >= rhs.day


def is_leap_year(year):
    if year % 4 != 0:
        return False

    if year % 100 == 0:
        if year % 400 == 0:
            return True
        else:
            return False

    return True


def num_days(month, year) -> int:
    if month in [4, 6, 9, 11]:
        return 30
    elif month in [1, 3, 5, 7, 8, 10, 12]:
        return 31
    elif month == 2:
        if is_leap_year(year):
            return 29
        else:
            return 28


start_date = datetime.date(1900, 1, 1)
end_date = datetime.date(2000, 12, 31)
day = 0
sundays_on_first_of_month = 0
while after_or_same(end_date, start_date):
    # Implemented add one day with rollover but it wasn't interesting.
    start_date += datetime.timedelta(days=1)
    day = (day + 1) % 7
    if (start_date.day == 1
        and after_or_same(start_date, datetime.date(1901, 1, 1))
            and day == 6):
        sundays_on_first_of_month += 1
        print(start_date.strftime('%Y-%m-%d'), dow[day])

# Verified answer: 171
print("sum ", sundays_on_first_of_month)
