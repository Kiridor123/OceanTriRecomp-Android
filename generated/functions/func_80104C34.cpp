#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80105378(CpuContext* ctx);
extern "C" uint64_t func_80105378_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801055C4(CpuContext* ctx);
extern "C" uint64_t func_801055C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801055C8(CpuContext* ctx);
extern "C" uint32_t func_801055C8_ra68_2_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80104C34_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80104C34;

loc_80104C34:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = MemoryInline::FlatRead32((r29 + 56));
    r30 = MemoryInline::FlatRead32((r29 + 48));
}

loc_80104C68:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80104C90;
    }
}

loc_80104C6C:
{
    r3 = r30;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl3_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl3_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl3_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D080:
{
    r3 = 0;
    goto loc_inl3_cont_8012D068;
}

loc_inl3_0x8012D088:
{
    r3 = 1;
}

loc_inl3_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_80104C78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80104C90;
    }
}

loc_80104C7C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_80105360;
}

loc_80104C90:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 2));
}

loc_80104CA4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(61))) {
        goto loc_80104CD4;
    }
}

loc_80104CA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(55));
}

loc_80104CAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80104D20;
    }
}

loc_80104CB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80104CC8;
    }
}

loc_80104CB4:
{
}

loc_80104CB8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(33))) {
        goto loc_80104DD4;
    }
}

loc_80104CBC:
{
}

loc_80104CC0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(30))) {
        goto loc_80104CFC;
    }
}

loc_80104CC4:
{
    goto loc_80104DD4;
}

loc_80104CC8:
{
}

loc_80104CCC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(57))) {
        goto loc_80104D44;
    }
}

loc_80104CD0:
{
    goto loc_80104DD4;
}

loc_80104CD4:
{
}

loc_80104CD8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(112))) {
        goto loc_80104CF0;
    }
}

loc_80104CDC:
{
}

loc_80104CE0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(81))) {
        goto loc_80104DD4;
    }
}

loc_80104CE4:
{
}

loc_80104CE8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(78))) {
        goto loc_80104D90;
    }
}

loc_80104CEC:
{
    goto loc_80104DD4;
}

loc_80104CF0:
{
}

loc_80104CF4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(116))) {
        goto loc_80104DD4;
    }
}

loc_80104CF8:
{
    goto loc_80104DB4;
}

loc_80104CFC:
{
}

loc_80104D00:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104D04:
{
    r0 = MemoryInline::FlatRead16((r30 + 552));
    r0 = (r0 & 6);
}

loc_80104D10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104D14:
{
    r0 = (r3 + 3);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    goto loc_80104DD4;
}

loc_80104D20:
{
}

loc_80104D24:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104D28:
{
    r0 = MemoryInline::FlatRead16((r30 + 552));
    r0 = (r0 & 6);
}

loc_80104D34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104D38:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    goto loc_80104DD4;
}

loc_80104D44:
{
}

loc_80104D48:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104D4C:
{
    r0 = MemoryInline::FlatRead16((r30 + 552));
    r0 = (r0 & 6);
}

loc_80104D58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80104D68;
    }
}

loc_80104D5C:
{
    r0 = (r3 + 12);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    goto loc_80104DD4;
}

loc_80104D68:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_80104D74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80104D80;
    }
}

loc_80104D78:
{
}

loc_80104D7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_80104DD4;
    }
}

loc_80104D80:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + 8);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    goto loc_80104DD4;
}

loc_80104D90:
{
}

loc_80104D94:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104D98:
{
    r0 = MemoryInline::FlatRead16((r30 + 552));
    r0 = (r0 & 6);
}

loc_80104DA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104DA8:
{
    r0 = (r3 + 52);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    goto loc_80104DD4;
}

loc_80104DB4:
{
}

loc_80104DB8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104DBC:
{
    r0 = MemoryInline::FlatRead16((r30 + 552));
    r0 = (r0 & 6);
}

loc_80104DC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80104DD4;
    }
}

loc_80104DCC:
{
    r0 = (r3 + 4);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
}

loc_80104DD4:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -5136);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    r4 = 0x805A0000u;
    r28 = (r4 + -4836);
    r28_addr_1 = (r28 + r0);
    r4 = MemoryInline::FlatRead16(r28_addr_1);
    r5 = 0;
    ctx->lr = 0x80104DFCu;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800F9218_27AB = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_27AB);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_27AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80104E08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80104E18;
    }
}

loc_80104E0C:
{
    r3 = r29;
    ctx->lr = 0x80104E14u;
    if constexpr (KnownRegArgsCpuCall<0x801055C4u>(&func_801055C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801055C4_302D = func_801055C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801055C4_302D);
        r4 = static_cast<uint32_t>(regargs_result_801055C4_302D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801055C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80105360;
}

loc_80104E18:
{
    r4 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r4 + -53);
}

loc_80104E24:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80104EBC;
    }
}

loc_80104E28:
{
}

loc_80104E2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(51))) {
        goto loc_80104E3C;
    }
}

loc_80104E30:
{
}

loc_80104E34:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(52))) {
        goto loc_80104E7C;
    }
}

loc_80104E38:
{
    goto loc_80104EF8;
}

loc_80104E3C:
{
    r3 = 226;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r28_addr_3 = (r28 + r0);
    r4 = MemoryInline::FlatRead16(r28_addr_3);
    r5 = 0;
    ctx->lr = 0x80104E50u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800F9218_3AE9 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_3AE9);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_3AE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_80104E5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80104E6C;
    }
}

loc_80104E60:
{
    r3 = r29;
    ctx->lr = 0x80104E68u;
    if constexpr (KnownRegArgsCpuCall<0x801055C4u>(&func_801055C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801055C4_436D = func_801055C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801055C4_436D);
        r4 = static_cast<uint32_t>(regargs_result_801055C4_436D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801055C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80105360;
}

loc_80104E6C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_80104EF8;
}

loc_80104E7C:
{
    r3 = 330;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r28_addr_2 = (r28 + r0);
    r4 = MemoryInline::FlatRead16(r28_addr_2);
    r5 = 0;
    ctx->lr = 0x80104E90u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800F9218_4C8E = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_4C8E);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_4C8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_80104E9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80104EAC;
    }
}

loc_80104EA0:
{
    r3 = r29;
    ctx->lr = 0x80104EA8u;
    if constexpr (KnownRegArgsCpuCall<0x801055C4u>(&func_801055C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801055C4_5512 = func_801055C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801055C4_5512);
        r4 = static_cast<uint32_t>(regargs_result_801055C4_5512 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801055C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80105360;
}

loc_80104EAC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_80104EF8;
}

loc_80104EBC:
{
    r3 = 227;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r28_addr_4 = (r28 + r0);
    r4 = MemoryInline::FlatRead16(r28_addr_4);
    r5 = 0;
    ctx->lr = 0x80104ED0u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800F9218_5E33 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_5E33);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_5E33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_80104EDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80104EEC;
    }
}

loc_80104EE0:
{
    r3 = r29;
    ctx->lr = 0x80104EE8u;
    if constexpr (KnownRegArgsCpuCall<0x801055C4u>(&func_801055C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801055C4_66B7 = func_801055C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801055C4_66B7);
        r4 = static_cast<uint32_t>(regargs_result_801055C4_66B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801055C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80105360;
}

loc_80104EEC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80104EF8:
{
    r3 = (r29 + 36);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80104F0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801050D8;
    }
}

loc_80104F10:
{
    r3 = (r29 + 24);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 24);
    r4 = (r29 + 24);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r29 + 24);
    ctx->lr = 0x80104F38u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_72E0 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_72E0);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_72E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_80104F40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(69))) {
        goto loc_80104FE4;
    }
}

loc_80104F44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(38));
}

loc_80104F48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801050B4;
    }
}

loc_80104F4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80104FA0;
    }
}

loc_80104F50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_80104F54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010506C;
    }
}

loc_80104F58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80104F80;
    }
}

loc_80104F5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80104F60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801050B4;
    }
}

loc_80104F64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80104F74;
    }
}

loc_80104F68:
{
}

loc_80104F6C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010506C;
    }
}

loc_80104F70:
{
    goto loc_801050B4;
}

loc_80104F74:
{
}

loc_80104F78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_801050B4;
    }
}

loc_80104F7C:
{
    goto loc_8010506C;
}

loc_80104F80:
{
}

loc_80104F84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(33))) {
        goto loc_80104F94;
    }
}

loc_80104F88:
{
}

loc_80104F8C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(30))) {
        goto loc_8010506C;
    }
}

loc_80104F90:
{
    goto loc_801050B4;
}

loc_80104F94:
{
}

loc_80104F98:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(36))) {
        goto loc_8010506C;
    }
}

loc_80104F9C:
{
    goto loc_801050B4;
}

loc_80104FA0:
{
}

loc_80104FA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(51))) {
        goto loc_80104FCC;
    }
}

loc_80104FA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(43));
}

loc_80104FAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010506C;
    }
}

loc_80104FB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80104FC0;
    }
}

loc_80104FB4:
{
}

loc_80104FB8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(41))) {
        goto loc_801050B4;
    }
}

loc_80104FBC:
{
    goto loc_8010506C;
}

loc_80104FC0:
{
}

loc_80104FC4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(49))) {
        goto loc_8010506C;
    }
}

loc_80104FC8:
{
    goto loc_801050B4;
}

loc_80104FCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(56));
}

loc_80104FD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801050B4;
    }
}

loc_80104FD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010506C;
    }
}

loc_80104FD8:
{
}

loc_80104FDC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(55))) {
        goto loc_8010506C;
    }
}

loc_80104FE0:
{
    goto loc_801050B4;
}

loc_80104FE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_80104FE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105090;
    }
}

loc_80104FEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80105030;
    }
}

loc_80104FF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(83));
}

loc_80104FF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010506C;
    }
}

loc_80104FF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010501C;
    }
}

loc_80104FFC:
{
}

loc_80105000:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(76))) {
        goto loc_80105010;
    }
}

loc_80105004:
{
}

loc_80105008:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_8010506C;
    }
}

loc_8010500C:
{
    goto loc_801050B4;
}

loc_80105010:
{
}

loc_80105014:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(81))) {
        goto loc_801050B4;
    }
}

loc_80105018:
{
    goto loc_8010506C;
}

loc_8010501C:
{
}

loc_80105020:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(116))) {
        goto loc_801050B4;
    }
}

loc_80105024:
{
}

loc_80105028:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(85))) {
        goto loc_8010506C;
    }
}

loc_8010502C:
{
    goto loc_801050B4;
}

loc_80105030:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(145));
}

loc_80105034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010506C;
    }
}

loc_80105038:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80105060;
    }
}

loc_8010503C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(124));
}

loc_80105040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801050B4;
    }
}

loc_80105044:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80105054;
    }
}

loc_80105048:
{
}

loc_8010504C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(123))) {
        goto loc_8010506C;
    }
}

loc_80105050:
{
    goto loc_801050B4;
}

loc_80105054:
{
}

loc_80105058:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(130))) {
        goto loc_801050B4;
    }
}

loc_8010505C:
{
    goto loc_8010506C;
}

loc_80105060:
{
}

loc_80105064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(148))) {
        goto loc_8010506C;
    }
}

loc_80105068:
{
    goto loc_801050B4;
}

loc_8010506C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29480));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 524));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    r3 = MemoryInline::FlatRead8((r29 + 68));
    r4 = 0;
    ctx->lr = 0x80105088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = r3;
    goto loc_8010523C;
}

loc_80105090:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 528));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29480));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    r3 = MemoryInline::FlatRead8((r29 + 68));
    r4 = 1;
    ctx->lr = 0x801050ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = r3;
    goto loc_8010523C;
}

loc_801050B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29480));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    r3 = MemoryInline::FlatRead8((r29 + 68));
    r4 = 1;
    ctx->lr = 0x801050D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = r3;
    goto loc_8010523C;
}

loc_801050D8:
{
}

loc_801050DC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80105104;
    }
}

loc_801050E0:
{
    r3 = (r29 + 24);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 24);
    r4 = (r29 + 24);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r3 = (r29 + 24);
    r4 = (r30 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80105104:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_8010510C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(69))) {
        goto loc_801051A0;
    }
}

loc_80105110:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(38));
}

loc_80105114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010522C;
    }
}

loc_80105118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010515C;
    }
}

loc_8010511C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_80105120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105218;
    }
}

loc_80105124:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010513C;
    }
}

loc_80105128:
{
}

loc_8010512C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_8010522C;
    }
}

loc_80105130:
{
}

loc_80105134:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80105218;
    }
}

loc_80105138:
{
    goto loc_8010522C;
}

loc_8010513C:
{
}

loc_80105140:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(33))) {
        goto loc_80105150;
    }
}

loc_80105144:
{
}

loc_80105148:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(30))) {
        goto loc_80105218;
    }
}

loc_8010514C:
{
    goto loc_8010522C;
}

loc_80105150:
{
}

loc_80105154:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(36))) {
        goto loc_80105218;
    }
}

loc_80105158:
{
    goto loc_8010522C;
}

loc_8010515C:
{
}

loc_80105160:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(51))) {
        goto loc_80105188;
    }
}

loc_80105164:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(43));
}

loc_80105168:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105218;
    }
}

loc_8010516C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010517C;
    }
}

loc_80105170:
{
}

loc_80105174:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(41))) {
        goto loc_8010522C;
    }
}

loc_80105178:
{
    goto loc_80105218;
}

loc_8010517C:
{
}

loc_80105180:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(49))) {
        goto loc_80105218;
    }
}

loc_80105184:
{
    goto loc_8010522C;
}

loc_80105188:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(56));
}

loc_8010518C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010522C;
    }
}

loc_80105190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80105218;
    }
}

loc_80105194:
{
}

loc_80105198:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(55))) {
        goto loc_80105218;
    }
}

loc_8010519C:
{
    goto loc_8010522C;
}

loc_801051A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(123));
}

loc_801051A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105218;
    }
}

loc_801051A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801051EC;
    }
}

loc_801051AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(83));
}

loc_801051B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105218;
    }
}

loc_801051B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801051D8;
    }
}

loc_801051B8:
{
}

loc_801051BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(76))) {
        goto loc_801051CC;
    }
}

loc_801051C0:
{
}

loc_801051C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_80105218;
    }
}

loc_801051C8:
{
    goto loc_8010522C;
}

loc_801051CC:
{
}

loc_801051D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(81))) {
        goto loc_8010522C;
    }
}

loc_801051D4:
{
    goto loc_80105218;
}

loc_801051D8:
{
}

loc_801051DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(116))) {
        goto loc_8010522C;
    }
}

loc_801051E0:
{
}

loc_801051E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(85))) {
        goto loc_80105218;
    }
}

loc_801051E8:
{
    goto loc_8010522C;
}

loc_801051EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(145));
}

loc_801051F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105218;
    }
}

loc_801051F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010520C;
    }
}

loc_801051F8:
{
}

loc_801051FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(130))) {
        goto loc_8010522C;
    }
}

loc_80105200:
{
}

loc_80105204:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(125))) {
        goto loc_80105218;
    }
}

loc_80105208:
{
    goto loc_8010522C;
}

loc_8010520C:
{
}

loc_80105210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(148))) {
        goto loc_80105218;
    }
}

loc_80105214:
{
    goto loc_8010522C;
}

loc_80105218:
{
    r3 = MemoryInline::FlatRead8((r29 + 68));
    r4 = 0;
    ctx->lr = 0x80105224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = r3;
    goto loc_8010523C;
}

loc_8010522C:
{
    r3 = MemoryInline::FlatRead8((r29 + 68));
    r4 = 1;
    ctx->lr = 0x80105238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = r3;
}

loc_8010523C:
{
    r3 = r29;
    ctx->lr = 0x80105244u;
    if constexpr (KnownRegArgsCpuCall<0x801055C8u>(&func_801055C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801055C8_BC6B = func_801055C8_ra68_2_8_0(ctx, r3, r5, r6, f1.d);
        r3 = regargs_result_801055C8_BC6B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801055C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r30 = 0;
    r28 = r31;
    goto loc_80105294;
}

loc_80105280:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (r1 + 24);
    ctx->lr = 0x8010528Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_80105294:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8010529C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80105280;
    }
}

loc_801052A0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r0 = (r27 & -16777216);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & 255);
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    r0 = (r27 & 16711680);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 17), static_cast<uint8_t>(r0));
    r0 = (r27 & 65280);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_8 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 18), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_801052E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8010532C;
    }
}

loc_801052E8:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29476));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29472));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r30 = 0;
    r28 = r31;
    goto loc_8010531C;
}

loc_80105308:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (r1 + 8);
    ctx->lr = 0x80105314u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F9C04u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_8010531C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80105324:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80105308;
    }
}

loc_80105328:
{
    goto loc_80105358;
}

loc_8010532C:
{
    r30 = 0;
    r28 = r31;
    goto loc_8010534C;
}

loc_80105338:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    ctx->lr = 0x80105344u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_8010534C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80105354:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80105338;
    }
}

loc_80105358:
{
    r3 = r29;
    ctx->lr = 0x80105360u;
    if constexpr (KnownRegArgsCpuCall<0x80105378u>(&func_80105378)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80105378_D83E = func_80105378_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80105378_D83E);
        r4 = static_cast<uint32_t>(regargs_result_80105378_D83E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80105378u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80105360:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80104C34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80104C34_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80104C34 func_80104C34 preserves=true fpr_mask=0x00000000
