#pragma once

template <typename T>
class IList {
public:
    virtual ~IList() = default;
    virtual int GetSize() const = 0;
    virtual void Clean() = 0;
    virtual bool IsEmpty() const = 0;
    virtual bool IsThere(T value) const = 0;
    virtual T FindValue(int k) const = 0;
    virtual bool ChangeValue(int k, T value) = 0;
    virtual int FindPos(T value) const = 0;
    virtual void AddValue(T value) = 0;
    virtual bool AddValueToPos(int k, T value) = 0;
    virtual T DeleteValue(T value) = 0;
    virtual T DeletePos(int k) = 0;
};
