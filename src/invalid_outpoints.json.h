// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DON_INVALID_OUTPOINTS_JSON_H
#define DON_INVALID_OUTPOINTS_JSON_H
#include <string>

std::string LoadInvalidOutPoints()
{
    std::string str = "[\n"
            "  {\n"
            "    \"txid\": \"00405ad8cc4ec7b6be27dedc6bf19f2febf8e338031fe552d7bf5c0dfd6e67de\",\n"
            "    \"n\": 0\n"
            "]";
    return str;
}

#endif //DON_INVALID_OUTPOINTS_JSON_H
