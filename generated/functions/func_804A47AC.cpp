#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A4770(CpuContext* ctx);
extern "C" uint64_t func_804A4770_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A47AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804A47AC;

loc_804A47AC:
{
    r6 = 2;
}

loc_804A4824:
{
}

loc_804A4828:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(2))) {
        goto loc_804A483C;
    }
}

loc_804A482C:
{
}

loc_804A4830:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(4))) {
        goto loc_804A483C;
    }
}

loc_804A4834:
{
}

loc_804A4838:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(16))) {
        goto loc_804A49A8;
    }
}

loc_804A483C:
{
    r9 = MemoryInline::FlatRead16(r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_804A4844:
{
    r7 = 0;
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    MemoryInline::FlatWrite16((r9 + 2), static_cast<uint16_t>(r6));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804A4998;
    }
}

loc_804A4858:
{
}

loc_804A485C:
{
    r10 = (r6 + -8);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_804A4964;
    }
}

loc_804A4864:
{
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804A487C;
    }
}

loc_804A486C:
{
    r9 = (r3 + -2);
}

loc_804A4874:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r9))) {
        goto loc_804A487C;
    }
}

loc_804A4878:
{
    r11 = 1;
}

loc_804A487C:
{
}

loc_804A4880:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_804A4964;
    }
}

loc_804A4884:
{
    r9 = (r10 + 7);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_1 & 536870911);
    ctr = r9;
}

loc_804A4894:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_804A4964;
    }
}

loc_804A4898:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 2u, true, false);
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 0u, r8);
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r8 + 1));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r8 + 2));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 6), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r8 + 3));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 7), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r8 + 4));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r8 + 5));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 9), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r8 + 6));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 10), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r8 + 7));
    r8 = (r8 + 8);
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r9 + 11), static_cast<uint8_t>(r10));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A4898;
    }
}

loc_804A4964:
{
    r9 = (r6 - r7);
    ctr = r9;
}

loc_804A4970:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r6))) {
        goto loc_804A4998;
    }
}

loc_804A4974:
{
    r6 = MemoryInline::FlatRead16(r5);
    r9 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r6 = (r6 * 18);
    r6 = (r5 + r6);
    r6 = (r6 + r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r9));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A4974;
    }
}

loc_804A4998:
{
    r6 = MemoryInline::FlatRead16(r5);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    goto loc_804A49B0;
}

loc_804A49A8:
{
    r3 = 0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A49B0:
{
    r6 = (r6 & 65535);
}

loc_804A49B8:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(16))) {
        goto loc_804A49C4;
    }
}

loc_804A49BC:
{
    r3 = 0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A49C4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_804A49C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804A4770;
    }
}

loc_804A49CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A49D8;
    }
}

loc_804A49D0:
{
    r3 = 0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A49D8:
{
    r3 = r8;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4770:
{
    if constexpr (KnownRegArgsCpuCall<0x804A4770u>(&func_804A4770)) {
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4770_2380 = func_804A4770_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4770_2380);
        r4 = static_cast<uint32_t>(regargs_result_804A4770_2380 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4770u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A47AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A47AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A47AC func_804A47AC preserves=true fpr_mask=0x00000000
