#pragma once

namespace abc
{

    struct Abstract
    {
    protected:
        Abstract() = default;
        virtual ~Abstract() = default;
        Abstract(Abstract const &) = delete;
        Abstract &operator=(Abstract const &) = delete;
    };

} // namespace abc
