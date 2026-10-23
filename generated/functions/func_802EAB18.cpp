#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802EA838(CpuContext* ctx);
extern "C" uint64_t func_802EA838_ra18_4_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802EA96C(CpuContext* ctx);
extern "C" uint64_t func_802EA96C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802EAB18_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802EAB18;

loc_802EAB18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r31 = r5;
    r28 = r6;
    r29 = r7;
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 456));
    r0 = (r0 & 1);
}

loc_802EAB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EAB64;
    }
}

loc_802EAB58:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12600));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    goto loc_802EAB6C;
}

loc_802EAB64:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12720));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
}

loc_802EAB6C:
{
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x802EAB78u;
    if constexpr (KnownRegArgsCpuCall<0x802EA838u>(&func_802EA838)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802EA838_C53 = func_802EA838_ra18_4_18_0(ctx, r3, r4, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802EA838_C53);
        r4 = static_cast<uint32_t>(regargs_result_802EA838_C53 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802EA838u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r30 = r3;
    r3 = r26;
    r4 = r27;
    r5 = (r30 & 255);
    ctx->lr = 0x802EAB8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802EA96Cu>(&func_802EA96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802EA96C_10C8 = func_802EA96C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802EA96C_10C8);
        r4 = static_cast<uint32_t>(regargs_result_802EA96C_10C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802EA96Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWrite32(r29, r3);
    r0 = (r3 & 255);
}

loc_802EAB98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802EABA4;
    }
}

loc_802EAB9C:
{
    r3 = 0;
    goto loc_802EAC84;
}

loc_802EABA4:
{
    r0 = (r30 & 255);
}

loc_802EABAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802EABB8;
    }
}

loc_802EABB0:
{
    r3 = 1;
    goto loc_802EAC84;
}

loc_802EABB8:
{
}

loc_802EABBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802EABC8;
    }
}

loc_802EABC0:
{
    r3 = 0;
    goto loc_802EAC84;
}

loc_802EABC8:
{
    r0 = MemoryInline::FlatRead32((r27 + 456));
    r0 = (r0 & 1);
}

loc_802EABD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EAC80;
    }
}

loc_802EABD8:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    r0 = (r3 + -7);
}

loc_802EABE4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(18))) {
        goto loc_802EAC0C;
    }
}

loc_802EABE8:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 27268);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802EAC00u:
        goto loc_802EAC00;
        break;
    case 0x802EAC0Cu:
        goto loc_802EAC0C;
        break;
    case 0x802EAC38u:
        goto loc_802EAC38;
        break;
    case 0x802EAC4Cu:
        goto loc_802EAC4C;
        break;
    case 0x802EAC58u:
        goto loc_802EAC58;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802EAC00:
{
    r0 = 5;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802EAC80;
}

loc_802EAC0C:
{
    r0 = MemoryInline::FlatRead8((r27 + 482));
}

loc_802EAC14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802EAC20;
    }
}

loc_802EAC18:
{
}

loc_802EAC1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_802EAC2C;
    }
}

loc_802EAC20:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802EAC80;
}

loc_802EAC2C:
{
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802EAC80;
}

loc_802EAC38:
{
    r0 = 6;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12608));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    goto loc_802EAC80;
}

loc_802EAC4C:
{
    r0 = 7;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802EAC80;
}

loc_802EAC58:
{
    r0 = MemoryInline::FlatRead8((r27 + 482));
}

loc_802EAC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802EAC6C;
    }
}

loc_802EAC64:
{
}

loc_802EAC68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_802EAC78;
    }
}

loc_802EAC6C:
{
    r0 = 9;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802EAC80;
}

loc_802EAC78:
{
    r0 = 8;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_802EAC80:
{
    r3 = 1;
}

loc_802EAC84:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EAB18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EAB18_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802EAB18 func_802EAB18 preserves=true fpr_mask=0x00000000
