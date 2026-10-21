#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114C84(CpuContext* ctx);
extern "C" uint64_t func_80114C84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80266B5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80266B5Cu);
    goto loc_80266B5C;

loc_80266B5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_80266B80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80266B94;
    }
}

loc_80266B84:
{
    r0 = MemoryInline::FlatRead8((r27 + 10));
}

loc_80266B8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80266BB4;
    }
}

loc_80266B90:
{
    goto loc_80266F04;
}

loc_80266B94:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266BA0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80266F04;
    }
}

loc_80266BA4:
{
    r0 = MemoryInline::FlatRead8((r27 + 10));
}

loc_80266BAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80266BB4;
    }
}

loc_80266BB0:
{
    goto loc_80266F04;
}

loc_80266BB4:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r28 = r3;
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl3_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB50;
    }
}

loc_inl3_0x800CFB48:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB64;
    }
}

loc_inl3_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl3_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = (r3 & 65535);
    r30 = 0;
    r26 = 60;
    r31 = 1;
    goto loc_80266EFC;
}

loc_80266BDC:
{
    r4 = MemoryInline::FlatRead8((r27 + 8));
}

loc_80266BE4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(r4))) {
        goto loc_80266EF4;
    }
}

loc_80266BE8:
{
    r3 = MemoryInline::FlatRead8((r28 + 22));
    r0 = MemoryInline::FlatRead8((r27 + 22));
}

loc_80266BF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80266EF4;
    }
}

loc_80266BF8:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    r3 = MemoryInline::FlatRead8((r28 + 1631));
    r0 = (r3 & r4);
}

loc_80266C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266C0C:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
}

loc_80266C14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266C18:
{
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite8((r28 + 1631), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r28 + 12));
    r0 = (r3 + -57);
}

loc_80266C34:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80266C44;
    }
}

loc_80266C38:
{
}

loc_80266C3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(138))) {
        goto loc_80266E80;
    }
}

loc_80266C40:
{
    goto loc_80266EF4;
}

loc_80266C44:
{
    r0 = MemoryInline::FlatRead16((r28 + 774));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_80266C4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80266DF0;
    }
}

loc_80266C50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80266C84;
    }
}

loc_80266C54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(17));
}

loc_80266C58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80266D60;
    }
}

loc_80266C5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80266C6C;
    }
}

loc_80266C60:
{
}

loc_80266C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_80266CD0;
    }
}

loc_80266C68:
{
    goto loc_80266EF4;
}

loc_80266C6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(123));
}

loc_80266C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80266D18;
    }
}

loc_80266C74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80266EF4;
    }
}

loc_80266C78:
{
}

loc_80266C7C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(134))) {
        goto loc_80266DA8;
    }
}

loc_80266C80:
{
    goto loc_80266EF4;
}

loc_80266C84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(368));
}

loc_80266C88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80266E38;
    }
}

loc_80266C8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80266C9C;
    }
}

loc_80266C90:
{
}

loc_80266C94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(360))) {
        goto loc_80266CB0;
    }
}

loc_80266C98:
{
    goto loc_80266EF4;
}

loc_80266C9C:
{
}

loc_80266CA0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(395))) {
        goto loc_80266EF4;
    }
}

loc_80266CA4:
{
}

loc_80266CA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(391))) {
        goto loc_80266E38;
    }
}

loc_80266CAC:
{
    goto loc_80266EF4;
}

loc_80266CB0:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266CB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266CBC:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x80266CCCu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_216A = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_216A);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_216A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266CD0:
{
    r3 = r28;
    r4 = 91;
    ctx->lr = 0x80266CDCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266CE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80266CF8;
    }
}

loc_80266CE4:
{
    r3 = r28;
    r4 = 92;
    ctx->lr = 0x80266CF0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266CF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80266EF4;
    }
}

loc_80266CF8:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266D00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266D04:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x80266D14u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_28D3 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_28D3);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_28D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266D18:
{
    r3 = r28;
    r4 = 91;
    ctx->lr = 0x80266D24u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266D28:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80266D40;
    }
}

loc_80266D2C:
{
    r3 = r28;
    r4 = 92;
    ctx->lr = 0x80266D38u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266D3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80266EF4;
    }
}

loc_80266D40:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266D48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266D4C:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x80266D5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_303C = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_303C);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_303C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266D60:
{
    r3 = r28;
    r4 = 91;
    ctx->lr = 0x80266D6Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266D70:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80266D88;
    }
}

loc_80266D74:
{
    r3 = r28;
    r4 = 92;
    ctx->lr = 0x80266D80u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266D84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80266EF4;
    }
}

loc_80266D88:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266D90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266D94:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r3 = r27;
    r4 = 4;
    ctx->lr = 0x80266DA4u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_37A5 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_37A5);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_37A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266DA8:
{
    r3 = r28;
    r4 = 91;
    ctx->lr = 0x80266DB4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266DB8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80266DD0;
    }
}

loc_80266DBC:
{
    r3 = r28;
    r4 = 92;
    ctx->lr = 0x80266DC8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266DCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80266EF4;
    }
}

loc_80266DD0:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266DD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266DDC:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r3 = r27;
    r4 = 1;
    ctx->lr = 0x80266DECu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_3F0E = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_3F0E);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_3F0E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266DF0:
{
    r3 = r28;
    r4 = 91;
    ctx->lr = 0x80266DFCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266E00:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80266E18;
    }
}

loc_80266E04:
{
    r3 = r28;
    r4 = 92;
    ctx->lr = 0x80266E10u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266E14:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80266EF4;
    }
}

loc_80266E18:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266E20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266E24:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r3 = r27;
    r4 = 2;
    ctx->lr = 0x80266E34u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_4677 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_4677);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_4677 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266E38:
{
    r3 = r28;
    r4 = 91;
    ctx->lr = 0x80266E44u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266E48:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80266E60;
    }
}

loc_80266E4C:
{
    r3 = r28;
    r4 = 92;
    ctx->lr = 0x80266E58u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80266E5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80266EF4;
    }
}

loc_80266E60:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266E68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266E6C:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r3 = r27;
    r4 = 9;
    ctx->lr = 0x80266E7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_4DE0 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_4DE0);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_4DE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266E80:
{
    r0 = MemoryInline::FlatRead16((r27 + 1632));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80266E88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80266EF4;
    }
}

loc_80266E8C:
{
    MemoryInline::FlatWrite16((r27 + 1632), static_cast<uint16_t>(r26));
    r0 = MemoryInline::FlatRead16((r28 + 774));
}

loc_80266E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(362))) {
        goto loc_80266EB8;
    }
}

loc_80266E9C:
{
}

loc_80266EA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(363))) {
        goto loc_80266EC8;
    }
}

loc_80266EA4:
{
}

loc_80266EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(364))) {
        goto loc_80266ED8;
    }
}

loc_80266EAC:
{
}

loc_80266EB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(365))) {
        goto loc_80266EE8;
    }
}

loc_80266EB4:
{
    goto loc_80266EF4;
}

loc_80266EB8:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x80266EC4u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_554D = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_554D);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_554D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266EC8:
{
    r3 = r27;
    r4 = 4;
    ctx->lr = 0x80266ED4u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_58F6 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_58F6);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_58F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266ED8:
{
    r3 = r27;
    r4 = 1;
    ctx->lr = 0x80266EE4u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_5C9F = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_5C9F);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_5C9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80266EF4;
}

loc_80266EE8:
{
    r3 = r27;
    r4 = 2;
    ctx->lr = 0x80266EF4u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80114C84_6048 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_6048);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_6048 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80266EF4:
{
    r30 = (r30 + 1);
    r28 = (r28 + 2848);
}

loc_80266EFC:
{
}

loc_80266F00:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r29))) {
        goto loc_80266BDC;
    }
}

loc_80266F04:
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80266B5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80266B5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80266B5C func_80266B5C preserves=true fpr_mask=0x00000000
