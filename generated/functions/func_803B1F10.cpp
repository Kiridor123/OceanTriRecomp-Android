#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B1F10u);
    goto loc_803B1F10;

loc_803B1F10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    r5 = MemoryInline::FlatRead32((r13 + -16868));
    r4 = MemoryInline::FlatRead32((r13 + -16860));
    r0 = (r3 & 65535);
    ctr = r4;
}

loc_803B1F40:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803B1F64;
    }
}

loc_803B1F44:
{
    r6 = MemoryInline::FlatRead32(r5);
    r5 = (r5 + 4);
    r4 = MemoryInline::FlatRead16((r6 + 44));
}

loc_803B1F54:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B1F60;
    }
}

loc_803B1F58:
{
    r3 = r6;
    goto loc_803B20AC;
}

loc_803B1F60:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B1F44;
    }
}

loc_803B1F64:
{
}

loc_803B1F68:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_803B20A8;
    }
}

loc_803B1F6C:
{
    r0 = (r3 & 65535);
}

loc_803B1F74:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60000))) {
        goto loc_803B20A8;
    }
}

loc_803B1F78:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_803B1F80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B1F90;
    }
}

loc_803B1F84:
{
    r3 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15380));
    goto loc_803B20AC;
}

loc_803B1F90:
{
    r0 = (r30 & 65535);
    r3 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B1FA4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B1FAC;
    }
}

loc_803B1FA8:
{
    goto loc_803B20AC;
}

loc_803B1FAC:
{
    r5 = (r31 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B1FC0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B1FC8;
    }
}

loc_803B1FC4:
{
    goto loc_803B20AC;
}

loc_803B1FC8:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B1FDC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B1FE4;
    }
}

loc_803B1FE0:
{
    goto loc_803B20AC;
}

loc_803B1FE4:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B1FF8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B2000;
    }
}

loc_803B1FFC:
{
    goto loc_803B20AC;
}

loc_803B2000:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B2014:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B201C;
    }
}

loc_803B2018:
{
    goto loc_803B20AC;
}

loc_803B201C:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B2030:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B2038;
    }
}

loc_803B2034:
{
    goto loc_803B20AC;
}

loc_803B2038:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B204C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B2054;
    }
}

loc_803B2050:
{
    goto loc_803B20AC;
}

loc_803B2054:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B2068:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B2070;
    }
}

loc_803B206C:
{
    goto loc_803B20AC;
}

loc_803B2070:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B2084:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B208C;
    }
}

loc_803B2088:
{
    goto loc_803B20AC;
}

loc_803B208C:
{
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15460));
    r4 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803B20A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803B20A8;
    }
}

loc_803B20A4:
{
    goto loc_803B20AC;
}

loc_803B20A8:
{
    r3 = 0;
}

loc_803B20AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B1F10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B1F10_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B1F10 func_803B1F10 preserves=true fpr_mask=0x00000000
