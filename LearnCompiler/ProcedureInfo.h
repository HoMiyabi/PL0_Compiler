﻿#pragma once
#include <optional>
#include <string>
#include <vector>

#include "VarInfo.h"

class ProcedureInfo
{
public:
    int32_t codeAddress = 0;

    std::string name;
    std::optional<VarInfo> ret = std::nullopt;
    std::vector<VarInfo> params;

    std::vector<VarInfo> vars;
    std::vector<ProcedureInfo> subProcedures;

    ProcedureInfo(int32_t codeAddress, std::string name):
    codeAddress(codeAddress),
    name(std::move(name))
    {
    }
};
