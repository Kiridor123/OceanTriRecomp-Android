#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027BEB0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027BEB0;

loc_8027BEB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027BECC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027C080;
    }
}

loc_8027BED0:
{
    r3 = r31;
    r4 = 200;
    ctx->lr = 0x8027BEDCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027BEE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8027C080;
    }
}

loc_8027BEE4:
{
    r3 = MemoryInline::FlatRead16((r31 + 908));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8027BEEC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027BF30;
    }
}

loc_8027BEF0:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -4);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_8027BF00:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(51))) {
        goto loc_8027BF18;
    }
}

loc_8027BF04:
{
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 450;
    MemoryInline::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
    goto loc_8027BF30;
}

loc_8027BF18:
{
}

loc_8027BF1C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(31))) {
        goto loc_8027BF30;
    }
}

loc_8027BF20:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 450;
    MemoryInline::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
}

loc_8027BF30:
{
    r3 = MemoryInline::FlatRead16((r31 + 910));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8027BF38:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027BF7C;
    }
}

loc_8027BF3C:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_8027BF4C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(51))) {
        goto loc_8027BF64;
    }
}

loc_8027BF50:
{
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 1800;
    MemoryInline::FlatWrite16((r31 + 1030), static_cast<uint16_t>(r0));
    goto loc_8027BF7C;
}

loc_8027BF64:
{
}

loc_8027BF68:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(31))) {
        goto loc_8027BF7C;
    }
}

loc_8027BF6C:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 900;
    MemoryInline::FlatWrite16((r31 + 1030), static_cast<uint16_t>(r0));
}

loc_8027BF7C:
{
    r3 = MemoryInline::FlatRead16((r31 + 912));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8027BF84:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027BFD8;
    }
}

loc_8027BF88:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -49);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_8027BF98:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(51))) {
        goto loc_8027BFB8;
    }
}

loc_8027BF9C:
{
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 3600;
    MemoryInline::FlatWrite16((r31 + 1032), static_cast<uint16_t>(r0));
    r0 = 180;
    MemoryInline::FlatWrite16((r31 + 1090), static_cast<uint16_t>(r0));
    goto loc_8027BFD8;
}

loc_8027BFB8:
{
}

loc_8027BFBC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(31))) {
        goto loc_8027BFD8;
    }
}

loc_8027BFC0:
{
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 1800;
    MemoryInline::FlatWrite16((r31 + 1032), static_cast<uint16_t>(r0));
    r0 = 180;
    MemoryInline::FlatWrite16((r31 + 1090), static_cast<uint16_t>(r0));
}

loc_8027BFD8:
{
    r3 = MemoryInline::FlatRead16((r31 + 914));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8027BFE0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027C024;
    }
}

loc_8027BFE4:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -193);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_8027BFF4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(51))) {
        goto loc_8027C00C;
    }
}

loc_8027BFF8:
{
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 1800;
    MemoryInline::FlatWrite16((r31 + 1034), static_cast<uint16_t>(r0));
    goto loc_8027C024;
}

loc_8027C00C:
{
}

loc_8027C010:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(31))) {
        goto loc_8027C024;
    }
}

loc_8027C014:
{
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 900;
    MemoryInline::FlatWrite16((r31 + 1034), static_cast<uint16_t>(r0));
}

loc_8027C024:
{
    r3 = MemoryInline::FlatRead16((r31 + 916));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8027C02C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027C080;
    }
}

loc_8027C030:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -769);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_8027C040:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(51))) {
        goto loc_8027C060;
    }
}

loc_8027C044:
{
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 3600;
    MemoryInline::FlatWrite16((r31 + 1036), static_cast<uint16_t>(r0));
    r0 = 180;
    MemoryInline::FlatWrite16((r31 + 1090), static_cast<uint16_t>(r0));
    goto loc_8027C080;
}

loc_8027C060:
{
}

loc_8027C064:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(31))) {
        goto loc_8027C080;
    }
}

loc_8027C068:
{
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = 1800;
    MemoryInline::FlatWrite16((r31 + 1036), static_cast<uint16_t>(r0));
    r0 = 180;
    MemoryInline::FlatWrite16((r31 + 1090), static_cast<uint16_t>(r0));
}

loc_8027C080:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027BEB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027BEB0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027BEB0 func_8027BEB0 preserves=true fpr_mask=0x00000000
