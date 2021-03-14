#include "sai_vs.h"

VS_GENERIC_QUAD(P4EXT_ENTRY,p4ext_entry);

const sai_p4ext_api_t vs_p4ext_api = {

    VS_GENERIC_QUAD_API(p4ext_entry)
};
