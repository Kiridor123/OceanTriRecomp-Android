#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80323BAC(CpuContext* ctx);
extern "C" uint32_t func_80323BAC_ra0_0_8_0(CpuContext*);
extern "C" void func_80323E14(CpuContext* ctx);
extern "C" uint64_t func_80323E14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80320D88_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80320D88u);
    goto loc_80320D88;

loc_80320D88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    ctx->lr = 0x80320DA8u;
    if constexpr (KnownRegArgsCpuCall<0x80323BACu>(&func_80323BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80323BAC_60C = func_80323BAC_ra0_0_8_0(ctx);
        r3 = regargs_result_80323BAC_60C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80323BACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r31 = 0;
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r31));
    r3 = (r30 + 16);
    r4 = 255;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 24);
    r4 = 255;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r31));
    goto loc_80320DF8;
}

loc_80320DE0:
{
    r0 = (r3 & 255);
    r3 = (r30 + r3);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
}

loc_80320DF8:
{
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80320E00:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r29))) {
        goto loc_80320DE0;
    }
}

loc_80320E04:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 1);
    r3 = (0 - r0);
    r3 = (r3 + 5);
    r31 = 0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80320E24:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80320F54;
    }
}

loc_80320E28:
{
    r5 = (r3 + -8);
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80320E38:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80320F20;
    }
}

loc_80320E3C:
{
    r6 = 0;
    r0 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80320E54;
    }
}

loc_80320E48:
{
}

loc_80320E4C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(32766))) {
        goto loc_80320E54;
    }
}

loc_80320E50:
{
    r0 = 1;
}

loc_80320E54:
{
}

loc_80320E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80320E94;
    }
}

loc_80320E5C:
{
    r4 = 1;
    r0 = (r3 & -32768);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80320E6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80320E88;
    }
}

loc_80320E70:
{
    r0 = (r3 + 1);
    r0 = (r0 & -32768);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80320E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80320E88;
    }
}

loc_80320E84:
{
    r4 = 0;
}

loc_80320E88:
{
}

loc_80320E8C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80320E94;
    }
}

loc_80320E90:
{
    r6 = 1;
}

loc_80320E94:
{
}

loc_80320E98:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80320F20;
    }
}

loc_80320E9C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r4 + 8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80320EB0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80320F20;
    }
}

loc_80320EB4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = (r30 + r0);
    r0 = (r31 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 24), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 24), static_cast<uint8_t>(r0));
    r0 = (r31 + 1);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 25), static_cast<uint8_t>(r0));
    r0 = (r31 + 2);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 26), static_cast<uint8_t>(r0));
    r0 = (r31 + 3);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 27), static_cast<uint8_t>(r0));
    r0 = (r31 + 4);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 28), static_cast<uint8_t>(r0));
    r0 = (r31 + 5);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 29), static_cast<uint8_t>(r0));
    r0 = (r31 + 6);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 30), static_cast<uint8_t>(r0));
    r0 = (r31 + 7);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 31), static_cast<uint8_t>(r0));
    r31 = (r31 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80320EB4;
    }
}

loc_80320F20:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0 = (r3 + 1);
    r0 = (r0 - r4);
    ctr = r0;
}

loc_80320F38:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r3))) {
        goto loc_80320F54;
    }
}

loc_80320F3C:
{
    r4 = (r31 & 255);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r4));
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80320F3C;
    }
}

loc_80320F54:
{
    ctx->lr = 0x80320F58u;
    if constexpr (KnownRegArgsCpuCall<0x80323E14u>(&func_80323E14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80323E14_1FF1 = func_80323E14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80323E14_1FF1);
        r4 = static_cast<uint32_t>(regargs_result_80323E14_1FF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80323E14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 65535);
}

loc_80320F60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80320F94;
    }
}

loc_80320F64:
{
    r4 = 6;
    r0 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
    r31 = (r31 + 1);
    goto loc_80320FCC;
}

loc_80320F94:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_80320F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80320FCC;
    }
}

loc_80320FA0:
{
    r4 = 6;
    r0 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
    r31 = (r31 + 1);
}

loc_80320FCC:
{
    r0 = 6;
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_80320FEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80321018;
    }
}

loc_80320FF0:
{
    r4 = 7;
    r0 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
}

loc_80321018:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80320D88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80320D88_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80320D88 func_80320D88 preserves=true fpr_mask=0x00000000
