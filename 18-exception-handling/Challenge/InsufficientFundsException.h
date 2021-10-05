#ifndef __INSUFFICIENTFUNDSEXCEPTION_H__
#define __INSUFFICIENTFUNDSEXCEPTION_H__

class InsufficientFundsException: public std::exception
{
public:
    InsufficientFundsException() = default; // noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char* what() const noexcept {
        return "insufficent funds for withdrawal";
    }

};

#endif // __INSUFFICIENTFUNDSEXCEPTION_H
