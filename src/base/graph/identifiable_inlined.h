#ifndef BASE__IDENTIFIABLE_INLINED_H_
#define BASE__IDENTIFIABLE_INLINED_H_

#include <cassert>
#include <cstring>

class IdentifiableInlined {
public:
    char id[8];

    IdentifiableInlined(const char _id[8]) :
        id {_id[0], _id[1], _id[2], _id[3], _id[4], _id[5], _id[6], _id[7]}
    {
        assert(_id[7] == '\0');
    }

    ~IdentifiableInlined() = default;

    inline bool operator==(const IdentifiableInlined& rhs) const noexcept {
        return strcmp(this->id, rhs.id) == 0;
    }

    inline bool operator!=(const IdentifiableInlined& rhs) const noexcept {
        return strcmp(this->id, rhs.id) != 0;
    }

    inline bool operator<=(const IdentifiableInlined& rhs) const noexcept {
        return strcmp(this->id, rhs.id) <= 0;
    }

    inline bool operator>=(const IdentifiableInlined& rhs) const noexcept {
        return strcmp(this->id, rhs.id) >= 0;
    }

    inline bool operator<(const IdentifiableInlined& rhs) const noexcept {
        return strcmp(this->id, rhs.id) < 0;
    }

    inline bool operator>(const IdentifiableInlined& rhs) const noexcept {
        return strcmp(this->id, rhs.id) > 0;
    }
};

#endif // BASE__IDENTIFIABLE_INLINED_H_
