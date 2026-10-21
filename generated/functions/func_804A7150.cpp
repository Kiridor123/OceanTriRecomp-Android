#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A7150_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804A7150u);
    goto loc_804A7150;

loc_804A7150:
{
    r0 = (r3 + -131072);
}

loc_804A7158:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1024))) {
        goto loc_804A7168;
    }
}

loc_804A715C:
{
    MemoryInline::FlatWrite32((r13 + -15624), r3);
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A7168:
{
    r4 = (r3 & 16777215);
    r0 = (r4 + -393216);
}

loc_804A7174:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10240))) {
        goto loc_804A719C;
    }
}

loc_804A7178:
{
    r0 = (r4 + -131072);
}

loc_804A7180:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(14848))) {
        goto loc_804A719C;
    }
}

loc_804A7184:
{
    r3 = (r4 + -327680);
}

loc_804A718C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(12288))) {
        goto loc_804A719C;
    }
}

loc_804A7190:
{
    r0 = (r4 + -720896);
}

loc_804A7198:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23041))) {
        goto loc_804A71A4;
    }
}

loc_804A719C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A71A4:
{
}

loc_804A71A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(8192))) {
        goto loc_804A71D8;
    }
}

loc_804A71AC:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804A71B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(37))) {
        goto loc_804A71D0;
    }
}

loc_804A71BC:
{
    r3 = 0x804B0000u;
    r0 = MemoryInline::FlatRead32((r13 + -15596));
    r3 = (r3 + -28400);
}

loc_804A71CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A71D8;
    }
}

loc_804A71D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A71D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -15720));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -15720), r0);
    r0 = MemoryInline::FlatRead32((r13 + -15720));
}

loc_804A71EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_804A7214;
    }
}

loc_804A71F0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15624));
}

loc_804A71F8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A7208;
    }
}

loc_804A71FC:
{
    MemoryInline::FlatWrite32((r13 + -15624), r4);
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A7208:
{
    MemoryInline::FlatWrite32((r13 + -15624), r4);
    r3 = 2;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A7214:
{
    r0 = (r4 + -196608);
    MemoryInline::FlatWrite32((r13 + -15624), r4);
}

loc_804A7220:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4352))) {
        goto loc_804A7234;
    }
}

loc_804A7224:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804A7230:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_804A723C;
    }
}

loc_804A7234:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A723C:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A7150(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A7150_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A7150 func_804A7150 preserves=true fpr_mask=0x00000000
