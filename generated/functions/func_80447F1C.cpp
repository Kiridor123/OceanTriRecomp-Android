#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805268F0(CpuContext* ctx);
extern "C" uint64_t func_805268F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80447F1C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80447F1C;

loc_80447F1C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_80447F4C:
{
    r31 = 192;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(192))) {
        goto loc_80447F58;
    }
}

loc_80447F54:
{
    r31 = r0;
}

loc_80447F58:
{
    r3 = r29;
    // inline leaf 0x80416EAC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 12));
    r0 = (r3 + -11);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x80416EAC
}

loc_80447F64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80447F70;
    }
}

loc_80447F68:
{
    r3 = 0;
    goto loc_804480EC;
}

loc_80447F70:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r31);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_80447F80:
{
    r31 = 96;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(96))) {
        goto loc_80447F8C;
    }
}

loc_80447F88:
{
    r31 = r0;
}

loc_80447F8C:
{
    r3 = r29;
    // inline leaf 0x804170A4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 226));
    // end of inlined leaf 0x804170A4
}

loc_80447F98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80447FB0;
    }
}

loc_80447F9C:
{
    r3 = (r29 + 24);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804480CC;
}

loc_80447FB0:
{
    r4 = (r29 + 24);
    r5 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r31);
    r3 = (static_cast<int32_t>(r0) >> 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80447FC8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804480CC;
    }
}

loc_80447FCC:
{
    r7 = (r3 + -8);
}

loc_80447FD4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_804480A0;
    }
}

loc_80447FD8:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80447FF4;
    }
}

loc_80447FE0:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_80447FEC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_80447FF4;
    }
}

loc_80447FF0:
{
    r8 = 1;
}

loc_80447FF4:
{
}

loc_80447FF8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804480A0;
    }
}

loc_80447FFC:
{
    r0 = (r7 + 7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    ctr = r0;
}

loc_8044800C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_804480A0;
    }
}

loc_80448010:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 60u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r30 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r30 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r30 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r4 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r30 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r30 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r30 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r4 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r30 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r4 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r30 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r4 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r30 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r4 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r30 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r4 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 50u, (r30 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r4 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 56u, (r30 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r4 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 58u, (r30 + 58));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r4 + 30), static_cast<uint16_t>(r0));
    r4 = (r4 + 32);
    r30 = (r30 + 64);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80448010;
    }
}

loc_804480A0:
{
    r0 = (r3 - r5);
    ctr = r0;
}

loc_804480AC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r3))) {
        goto loc_804480CC;
    }
}

loc_804480B0:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r4 = (r4 + 4);
    r30 = (r30 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804480B0;
    }
}

loc_804480CC:
{
    r3 = (r29 + 24);
    r4 = r31;
    ctx->lr = 0x804480D8u;
    if constexpr (KnownRegArgsCpuCall<0x805268F0u>(&func_805268F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_805268F0_25D5 = func_805268F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805268F0_25D5);
        r4 = static_cast<uint32_t>(regargs_result_805268F0_25D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805268F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804480E0:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804480EC;
    }
}

loc_804480E8:
{
    r3 = r0;
}

loc_804480EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80447F1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80447F1C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80447F1C func_80447F1C preserves=true fpr_mask=0x00000000
