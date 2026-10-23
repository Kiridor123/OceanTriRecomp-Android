#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80146CC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80146CC8;

loc_80146CC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x806A0000u;
    r6 = (r4 + 27152);
    r0 = (r3 & 255);
    r3 = 0x805A0000u;
    r3 = (r3 + 8904);
    r3_addr_0 = (r3 + r0);
    r7 = MemoryInline::FlatRead8(r3_addr_0);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_80146CF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80146D04;
    }
}

loc_80146CFC:
{
    r3 = 0;
    goto loc_80146E44;
}

loc_80146D04:
{
    r31 = (r6 + 3504);
    r4 = 0;
    r0 = 6;
    ctr = r0;
}

loc_80146D14:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80146D1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80146D54;
    }
}

loc_80146D20:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_80146D28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_80146D54;
    }
}

loc_80146D2C:
{
}

loc_80146D30:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80146D44;
    }
}

loc_80146D34:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x80146D3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146A88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctr = ctx->ctr;
}

loc_80146D40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80146D4C;
    }
}

loc_80146D44:
{
    r3 = r31;
    goto loc_80146E44;
}

loc_80146D4C:
{
    r3 = 0;
    goto loc_80146E44;
}

loc_80146D54:
{
    r4 = (r4 + 1);
    r31 = (r31 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80146D14;
    }
}

loc_80146D60:
{
    r31 = (r6 + 3504);
    r5 = 0;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r3 = (r3 + 1);
    r0 = 6;
    ctr = r0;
}

loc_80146D78:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80146D80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80146DBC;
    }
}

loc_80146D84:
{
    r4 = MemoryInline::FlatRead8((r31 + 1));
}

loc_80146D8C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r3))) {
        goto loc_80146DBC;
    }
}

loc_80146D90:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_80146D98:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80146DAC;
    }
}

loc_80146D9C:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x80146DA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146A88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctr = ctx->ctr;
}

loc_80146DA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80146DB4;
    }
}

loc_80146DAC:
{
    r3 = r31;
    goto loc_80146E44;
}

loc_80146DB4:
{
    r3 = 0;
    goto loc_80146E44;
}

loc_80146DBC:
{
    r5 = (r5 + 1);
    r31 = (r31 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80146D78;
    }
}

loc_80146DC8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_80146DD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80146DDC;
    }
}

loc_80146DD4:
{
    r3 = 0;
    goto loc_80146E44;
}

loc_80146DDC:
{
    r31 = (r6 + 3504);
    r5 = 0;
    r3 = (r3 + 2);
    r0 = 6;
    ctr = r0;
}

loc_80146DF0:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80146DF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80146E34;
    }
}

loc_80146DFC:
{
    r4 = MemoryInline::FlatRead8((r31 + 1));
}

loc_80146E04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r3))) {
        goto loc_80146E34;
    }
}

loc_80146E08:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_80146E10:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80146E24;
    }
}

loc_80146E14:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x80146E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146A88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctr = ctx->ctr;
}

loc_80146E20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80146E2C;
    }
}

loc_80146E24:
{
    r3 = r31;
    goto loc_80146E44;
}

loc_80146E2C:
{
    r3 = 0;
    goto loc_80146E44;
}

loc_80146E34:
{
    r5 = (r5 + 1);
    r31 = (r31 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80146DF0;
    }
}

loc_80146E40:
{
    r3 = 0;
}

loc_80146E44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80146CC8 func_80146CC8 preserves=true fpr_mask=0x00000000
