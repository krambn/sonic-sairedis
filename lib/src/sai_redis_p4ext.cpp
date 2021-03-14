#include "sai_redis.h"

REDIS_GENERIC_QUAD(P4EXT_ENTRY,p4ext_entry);

const sai_p4ext_api_t redis_p4ext_api = {

    REDIS_GENERIC_QUAD_API(p4ext_entry)
};

