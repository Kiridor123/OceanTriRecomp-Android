#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A40F4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_804A40F4;

loc_804A40F4:
{
    r4 = 0x80740000u;
    r4 = (r4 + -2048);
    r4 = (r4 + 60);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804A4104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A411C;
    }
}

loc_804A4108:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
}

loc_804A4110:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A411C;
    }
}

loc_804A4114:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A411C:
{
    r4 = (r4 + 1144);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804A4124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A413C;
    }
}

loc_804A4128:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
}

loc_804A4130:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A413C;
    }
}

loc_804A4134:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A413C:
{
    r4 = (r4 + 1144);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804A4144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A415C;
    }
}

loc_804A4148:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
}

loc_804A4150:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A415C;
    }
}

loc_804A4154:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A415C:
{
    r4 = (r4 + 1144);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804A4164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A417C;
    }
}

loc_804A4168:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
}

loc_804A4170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A417C;
    }
}

loc_804A4174:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A417C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A40F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A40F4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A40F4 func_804A40F4 preserves=true fpr_mask=0x00000000
