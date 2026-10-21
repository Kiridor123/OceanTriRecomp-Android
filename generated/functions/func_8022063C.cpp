#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8022063C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8022063Cu);
    goto loc_8022063C;

loc_8022063C:
{
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 0x805C0000u;
    r4 = (r4 + -20568);
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead8((r5 + 18004));
}

loc_80220654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80220680;
    }
}

loc_80220658:
{
    r6 = MemoryInline::FlatRead32(r4);
    goto loc_80220674;
}

loc_80220660:
{
}

loc_80220664:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80220670;
    }
}

loc_80220668:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80220670:
{
    r6 = (r6 + 4);
}

loc_80220674:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_8022067C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80220660;
    }
}

loc_80220680:
{
    r3 = MemoryInline::FlatRead8((r5 + 18005));
}

loc_80220688:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802206B4;
    }
}

loc_8022068C:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_802206A8;
}

loc_80220694:
{
}

loc_80220698:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802206A4;
    }
}

loc_8022069C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802206A4:
{
    r6 = (r6 + 4);
}

loc_802206A8:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_802206B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80220694;
    }
}

loc_802206B4:
{
    r3 = MemoryInline::FlatRead8((r5 + 18006));
}

loc_802206BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802206E8;
    }
}

loc_802206C0:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
    goto loc_802206DC;
}

loc_802206C8:
{
}

loc_802206CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802206D8;
    }
}

loc_802206D0:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802206D8:
{
    r6 = (r6 + 4);
}

loc_802206DC:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_802206E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802206C8;
    }
}

loc_802206E8:
{
    r3 = MemoryInline::FlatRead8((r5 + 18007));
}

loc_802206F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8022071C;
    }
}

loc_802206F4:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    goto loc_80220710;
}

loc_802206FC:
{
}

loc_80220700:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8022070C;
    }
}

loc_80220704:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8022070C:
{
    r6 = (r6 + 4);
}

loc_80220710:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_80220718:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802206FC;
    }
}

loc_8022071C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8022063C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8022063C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022063C func_8022063C preserves=true fpr_mask=0x00000000
