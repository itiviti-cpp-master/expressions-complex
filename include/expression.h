#pragma once

#include "complex.h"

#include <map>
#include <memory>
#include <ostream>
#include <string>

struct Expression
{
    virtual Complex eval(const std::map<std::string, Complex> & values = {}) const = 0;

    virtual std::unique_ptr<Expression> clone() const = 0;

    friend std::ostream & operator<<(std::ostream & out, const Expression & expression);
};
