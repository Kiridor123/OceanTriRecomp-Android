#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80129A80(CpuContext* ctx);
extern "C" uint64_t func_80129A80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80129AD4(CpuContext* ctx);
extern "C" uint64_t func_80129AD4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80129E1C(CpuContext* ctx);
extern "C" uint64_t func_80129E1C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012A078(CpuContext* ctx);
extern "C" uint64_t func_8012A078_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012A268(CpuContext* ctx);
extern "C" uint64_t func_8012A268_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8019DC40_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019DC40;

loc_8019DC40:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r3;
    r31 = r4;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r29 = r3;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8019DC70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019DC7C;
    }
}

loc_8019DC74:
{
    r3 = 0;
    goto loc_8019DEDC;
}

loc_8019DC7C:
{
    r28 = 0;
    r4 = 255;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019DC8C;
    }
}

loc_8019DC88:
{
    r4 = 6;
}

loc_8019DC8C:
{
}

loc_8019DC90:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8019DCC4;
    }
}

loc_8019DC94:
{
    r3 = r30;
    ctx->lr = 0x8019DC9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80129E1Cu>(&func_80129E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80129E1C_FC1 = func_80129E1C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129E1C_FC1);
        r4 = static_cast<uint32_t>(regargs_result_80129E1C_FC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80129E1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8019DCA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8019DCB4;
    }
}

loc_8019DCA8:
{
}

loc_8019DCAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8019DCBC;
    }
}

loc_8019DCB0:
{
    goto loc_8019DCC4;
}

loc_8019DCB4:
{
    r28 = 1;
    goto loc_8019DCC4;
}

loc_8019DCBC:
{
    r3 = 1;
    goto loc_8019DEDC;
}

loc_8019DCC4:
{
}

loc_8019DCC8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8019DDCC;
    }
}

loc_8019DCCC:
{
    r3 = r30;
    r4 = 16;
    // inline leaf 0x801923D4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801923D4
}

loc_8019DCDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019DD84;
    }
}

loc_8019DCE0:
{
    r3 = r30;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8019DCEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019DDCC;
    }
}

loc_8019DCF0:
{
    r3 = MemoryInline::FlatRead16((r30 + 1106));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 1104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8019DCFC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8019DD0C;
    }
}

loc_8019DD00:
{
    r0 = MemoryInline::FlatRead8((r30 + 1085));
}

loc_8019DD08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8019DDCC;
    }
}

loc_8019DD0C:
{
    r3 = 255;
    r0 = (r29 & 255);
}

loc_8019DD18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8019DD60;
    }
}

loc_8019DD1C:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_8019DD24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8019DD44;
    }
}

loc_8019DD28:
{
}

loc_8019DD2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8019DD4C;
    }
}

loc_8019DD30:
{
}

loc_8019DD34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8019DD54;
    }
}

loc_8019DD38:
{
}

loc_8019DD3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8019DD5C;
    }
}

loc_8019DD40:
{
    goto loc_8019DD60;
}

loc_8019DD44:
{
    r3 = 1;
    goto loc_8019DD60;
}

loc_8019DD4C:
{
    r3 = 3;
    goto loc_8019DD60;
}

loc_8019DD54:
{
    r3 = 8;
    goto loc_8019DD60;
}

loc_8019DD5C:
{
    r3 = 4;
}

loc_8019DD60:
{
}

loc_8019DD64:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8019DDCC;
    }
}

loc_8019DD68:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 508), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 510), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 511), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_8019DEDC;
}

loc_8019DD84:
{
    r3 = r30;
    r4 = 23;
    r0 = (r29 & 255);
}

loc_8019DD94:
{
    r5 = 255;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8019DDA0;
    }
}

loc_8019DD9C:
{
    r5 = 3;
}

loc_8019DDA0:
{
    r5 = (r5 & 255);
    r6 = (r31 & 65535);
    r7 = 0x805B0000u;
    r7 = (r7 + -9316);
    r8 = 0x805B0000u;
    r8 = (r8 + -9304);
    ctx->lr = 0x8019DDBCu;
    if constexpr (KnownRegArgsCpuCall<0x8012A078u>(&func_8012A078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8012A078_24BB = func_8012A078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012A078_24BB);
        r4 = static_cast<uint32_t>(regargs_result_8012A078_24BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8019DDC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019DDCC;
    }
}

loc_8019DDC4:
{
    r3 = 1;
    goto loc_8019DEDC;
}

loc_8019DDCC:
{
}

loc_8019DDD0:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8019DEAC;
    }
}

loc_8019DDD4:
{
    r0 = MemoryInline::FlatRead16((r30 + 1106));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8019DDDC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(900))) {
        goto loc_8019DEAC;
    }
}

loc_8019DDE0:
{
    r28 = 0;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl5_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl5_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CFB50;
    }
}

loc_inl5_0x800CFB48:
{
    r3 = 0;
    goto loc_inl5_cont_800CFB34;
}

loc_inl5_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl5_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl5_0x800CFB64;
    }
}

loc_inl5_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl5_cont_800CFB34;
}

loc_inl5_0x800CFB64:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl5_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r26 = 0;
    r29 = (r3 & 65535);
    goto loc_8019DE5C;
}

loc_8019DE04:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_8019DE0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019DE54;
    }
}

loc_8019DE10:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r26 & 65535);
}

loc_8019DE1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8019DE54;
    }
}

loc_8019DE20:
{
    r3 = r27;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl6_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl6_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x8012D088;
    }
}

loc_inl6_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl6_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl6_0x8012D088;
    }
}

loc_inl6_0x8012D080:
{
    r3 = 0;
    goto loc_inl6_cont_8012D068;
}

loc_inl6_0x8012D088:
{
    r3 = 1;
}

loc_inl6_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8019DE2C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8019DE54;
    }
}

loc_8019DE30:
{
    r0 = MemoryInline::FlatRead8((r27 + 3));
}

loc_8019DE38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_8019DE54;
    }
}

loc_8019DE3C:
{
    r3 = MemoryInline::FlatRead8((r27 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_8019DE48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8019DE54;
    }
}

loc_8019DE4C:
{
    r28 = 1;
    goto loc_8019DE68;
}

loc_8019DE54:
{
    r26 = (r26 + 1);
    r27 = (r27 + 2840);
}

loc_8019DE5C:
{
    r0 = (r26 & 65535);
}

loc_8019DE64:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r29))) {
        goto loc_8019DE04;
    }
}

loc_8019DE68:
{
}

loc_8019DE6C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_8019DEAC;
    }
}

loc_8019DE70:
{
    r3 = r30;
    r4 = (r31 & 65535);
    r5 = 50;
    r6 = (r30 + 862);
    if constexpr (KnownRegArgsCpuCall<0x80129A80u>(&func_80129A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80129A80_3C5D = func_80129A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129A80_3C5D);
        r4 = static_cast<uint32_t>(regargs_result_80129A80_3C5D >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80129A80u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8019DE88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019DEAC;
    }
}

loc_8019DE8C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 508), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8019DEDC;
}

loc_8019DEAC:
{
    r3 = r30;
    r4 = (r31 & 65535);
    ctx->lr = 0x8019DEB8u;
    if constexpr (KnownRegArgsCpuCall<0x80129AD4u>(&func_80129AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80129AD4_41EA = func_80129AD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129AD4_41EA);
        r4 = static_cast<uint32_t>(regargs_result_80129AD4_41EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80129AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8019DEBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019DEC8;
    }
}

loc_8019DEC0:
{
    r3 = 1;
    goto loc_8019DEDC;
}

loc_8019DEC8:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8012A268u>(&func_8012A268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012A268_46B3 = func_8012A268_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A268_46B3);
        r4 = static_cast<uint32_t>(regargs_result_8012A268_46B3 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A268u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
}

loc_8019DEDC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019DC40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019DC40_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019DC40 func_8019DC40 preserves=true fpr_mask=0x00000000
