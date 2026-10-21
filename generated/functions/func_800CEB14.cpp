#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x800CEB14u);
    goto loc_800CEB14;

loc_800CEB14:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800CEB4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CEB58;
    }
}

loc_800CEB50:
{
    r3 = 0;
    goto loc_800CECB0;
}

loc_800CEB58:
{
}

loc_800CEB5C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_800CEB68;
    }
}

loc_800CEB60:
{
    r3 = 0;
    goto loc_800CECB0;
}

loc_800CEB68:
{
}

loc_800CEB6C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CEB78;
    }
}

loc_800CEB70:
{
    r3 = 0;
    goto loc_800CECB0;
}

loc_800CEB78:
{
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_B18 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_B18);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_B18 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_800CEB80:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(256))) {
        goto loc_800CEB8C;
    }
}

loc_800CEB84:
{
    r3 = 0;
    goto loc_800CECB0;
}

loc_800CEB8C:
{
    // inline leaf 0x800CEA54 (17 guest instruction(s))
}

loc_inl1_0x800CEA54:
{
    r3 = 0x80690000u;
    r5 = (r3 + 28904);
    r3 = MemoryInline::FlatRead32((r5 + 72));
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_inl1_0x800CEA68:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(99))) {
        goto loc_inl1_0x800CEA74;
    }
}

loc_inl1_0x800CEA6C:
{
    r3 = 0;
    goto loc_inl1_cont_800CEA54;
}

loc_inl1_0x800CEA74:
{
    r0 = (r4 * 340);
    r3 = (r3 + r0);
    r4 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    r0 = MemoryInline::FlatRead32((r13 + -17608));
}

loc_inl1_0x800CEA8C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800CEA90:
{
    MemoryInline::FlatWrite32((r13 + -17608), r4);
    goto loc_inl1_cont_800CEA54;
}

loc_inl1_return:
{
}

loc_inl1_cont_800CEA54:
{
    // end of inlined leaf 0x800CEA54
    r31 = r3;
}

loc_800CEB98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800CEBA4;
    }
}

loc_800CEB9C:
{
    r3 = 0;
    goto loc_800CECB0;
}

loc_800CEBA4:
{
    r3 = (r3 + 8);
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_135D = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_135D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 336), r0);
    MemoryInline::FlatWrite32((r31 + 4), r26);
    MemoryInline::FlatWrite32(r31, r27);
    MemoryInline::FlatWrite32((r31 + 264), r28);
}

loc_800CEBC8:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(16))) {
        goto loc_800CEBD0;
    }
}

loc_800CEBCC:
{
    r29 = 16;
}

loc_800CEBD0:
{
    MemoryInline::FlatWrite32((r31 + 268), r29);
}

loc_800CEBD8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800CECAC;
    }
}

loc_800CEBDC:
{
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800CEBE4:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800CECAC;
    }
}

loc_800CEBE8:
{
    r4 = (r29 + -8);
}

loc_800CEBF0:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_800CEC80;
    }
}

loc_800CEBF4:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800CEC10;
    }
}

loc_800CEBFC:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_800CEC08:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_800CEC10;
    }
}

loc_800CEC0C:
{
    r5 = 1;
}

loc_800CEC10:
{
}

loc_800CEC14:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800CEC80;
    }
}

loc_800CEC18:
{
    r3 = r31;
    r0 = (r4 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_800CEC2C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_800CEC80;
    }
}

loc_800CEC30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 272), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 272), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 276), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 280), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 284), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 288), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 292), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r30 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 296), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r30 + 28));
    r30 = (r30 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 300), r0);
    r3 = (r3 + 32);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CEC30;
    }
}

loc_800CEC80:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r31 + r0);
    r0 = (r29 - r6);
    ctr = r0;
}

loc_800CEC94:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_800CECAC;
    }
}

loc_800CEC98:
{
    r0 = MemoryInline::FlatRead32(r30);
    r30 = (r30 + 4);
    MemoryInline::FlatWrite32((r3 + 272), r0);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CEC98;
    }
}

loc_800CECAC:
{
    r3 = 1;
}

loc_800CECB0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CEB14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CEB14_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CEB14 func_800CEB14 preserves=true fpr_mask=0x00000000
