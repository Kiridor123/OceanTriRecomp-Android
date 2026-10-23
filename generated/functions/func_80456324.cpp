#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E04CC(CpuContext* ctx);
extern "C" uint32_t func_802E04CC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803DA084(CpuContext* ctx);
extern "C" uint32_t func_803DA084_ra0_0_8_0(CpuContext*);
extern "C" void func_8041A5E4(CpuContext* ctx);
extern "C" uint32_t func_8041A5E4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8042729C(CpuContext* ctx);
extern "C" uint64_t func_8042729C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803DA084_statefree(uint32_t);

extern "C" uint64_t func_80456324_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r27_entry = r27;
    uint32_t ctr = ctx->ctr;

    goto loc_80456324;

loc_80456324:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = MemoryInline::FlatRead32((r13 + -16440));
    r28 = 0;
}

loc_80456340:
{
    r3 = (r28 & 255);
    r4 = 0;
    // inline leaf 0x802E04CC (6 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1136);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802E04CC
    r28 = (r28 + 1);
}

loc_80456354:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(4))) {
        goto loc_80456340;
    }
}

loc_80456358:
{
    r0 = MemoryInline::FlatRead32((r27 + 100));
}

loc_80456360:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_804565C0;
    }
}

loc_80456364:
{
    r3 = 28;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl2_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl2_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl2_0x803BECF4;
    }
}

loc_inl2_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = (r0 ^ 1);
    goto loc_inl2_cont_803BECD4;
}

loc_inl2_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl2_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_80456374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804565C0;
    }
}

loc_80456378:
{
    r3 = (r27 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15207));
}

loc_80456384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804565C0;
    }
}

loc_80456388:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80456394:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045648C;
    }
}

loc_80456398:
{
    r3 = 2;
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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
}

loc_804563A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804565C0;
    }
}

loc_804563AC:
{
    r28 = 0;
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
}

loc_804563B8:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_804563C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804563D4;
    }
}

loc_804563C4:
{
    r3 = (r28 & 255);
    r4 = 0;
    // inline leaf 0x802E04CC (6 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1136);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802E04CC
    goto loc_80456478;
}

loc_804563D4:
{
    r3 = (r27 + 1499);
    ctx->lr = 0x804563DCu;
    if constexpr (KnownRegArgsCpuCall<0x8042729Cu>(&func_8042729C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_8042729C_1AB4 = func_8042729C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042729C_1AB4);
        r4 = static_cast<uint32_t>(regargs_result_8042729C_1AB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042729Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r31 = r3;
}

loc_804563E4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80456478;
    }
}

loc_804563E8:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl7_0x8041A5E4:
{
}

loc_inl7_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x8041A5FC;
    }
}

loc_inl7_0x8041A5EC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl7_cont_8041A5E4;
}

loc_inl7_0x8041A5FC:
{
    r3 = 0;
}

loc_inl7_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 228));
    ctr = r12;
    ctx->lr = 0x80456408u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045640C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80456478;
    }
}

loc_80456410:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl9_0x8041A5E4:
{
}

loc_inl9_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x8041A5FC;
    }
}

loc_inl9_0x8041A5EC:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl9_cont_8041A5E4;
}

loc_inl9_0x8041A5FC:
{
    r3 = 0;
}

loc_inl9_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 240));
    ctr = r12;
    ctx->lr = 0x80456430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_80456434:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80456478;
    }
}

loc_80456438:
{
    r0 = MemoryInline::FlatRead8((r30 + 2640));
}

loc_80456440:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80456478;
    }
}

loc_80456444:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl11_0x8041A5E4:
{
}

loc_inl11_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl11_0x8041A5FC;
    }
}

loc_inl11_0x8041A5EC:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl11_cont_8041A5E4;
}

loc_inl11_0x8041A5FC:
{
    r3 = 0;
}

loc_inl11_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->lr = 0x80456464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_80456468:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80456478;
    }
}

loc_8045646C:
{
    r3 = (r28 & 255);
    r4 = 3;
    // inline leaf 0x802E04CC (6 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1136);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802E04CC
}

loc_80456478:
{
    r28 = (r28 + 1);
    r27 = (r27 + 2848);
}

loc_80456484:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(4))) {
        goto loc_804563B8;
    }
}

loc_80456488:
{
    goto loc_804565C0;
}

loc_8045648C:
{
    r28 = 0;
    r29 = (r27 + 29832);
    r3 = 0x80660000u;
    r31 = (r3 + -21920);
}

loc_8045649C:
{
    r3 = (r27 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 31112));
}

loc_804564A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804564BC;
    }
}

loc_804564AC:
{
    r3 = (r28 & 255);
    r4 = 0;
    // inline leaf 0x802E04CC (6 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1136);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802E04CC
    goto loc_804565B0;
}

loc_804564BC:
{
    r3 = r29;
    ctx->lr = 0x804564C4u;
    if constexpr (KnownRegArgsCpuCall<0x8042729Cu>(&func_8042729C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_8042729C_3EF0 = func_8042729C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042729C_3EF0);
        r4 = static_cast<uint32_t>(regargs_result_8042729C_3EF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042729Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r30 = r3;
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8041A5E4u>(&func_8041A5E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041A5E4_4721 = func_8041A5E4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041A5E4_4721;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041A5E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 236));
    ctr = r12;
    ctx->lr = 0x804564E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_804564EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804565B0;
    }
}

loc_804564F0:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803DA084u) && KnownTranslatedCpuCall<0x803DA084u>::kAvailable && !KnownTranslatedCpuCall<0x803DA084u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803DA084u>()) {
        const auto state_free_result_803DA084_4DFB = func_803DA084_statefree(r13);
        r3 = static_cast<uint32_t>(state_free_result_803DA084_4DFB);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DA084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8041A5E4u>(&func_8041A5E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041A5E4_52FC = func_8041A5E4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041A5E4_52FC;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041A5E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 228));
    ctr = r12;
    ctx->lr = 0x80456510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_80456514:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804565A4;
    }
}

loc_80456518:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803DA084u) && KnownTranslatedCpuCall<0x803DA084u>::kAvailable && !KnownTranslatedCpuCall<0x803DA084u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803DA084u>()) {
        const auto state_free_result_803DA084_59D6 = func_803DA084_statefree(r13);
        r3 = static_cast<uint32_t>(state_free_result_803DA084_59D6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DA084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8041A5E4u>(&func_8041A5E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041A5E4_5ED7 = func_8041A5E4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041A5E4_5ED7;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041A5E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 240));
    ctr = r12;
    ctx->lr = 0x80456538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045653C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804565A4;
    }
}

loc_80456540:
{
    r0 = MemoryInline::FlatRead8((r31 + 2640));
}

loc_80456548:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80456594;
    }
}

loc_8045654C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803DA084u) && KnownTranslatedCpuCall<0x803DA084u>::kAvailable && !KnownTranslatedCpuCall<0x803DA084u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803DA084u>()) {
        const auto state_free_result_803DA084_6677 = func_803DA084_statefree(r13);
        r3 = static_cast<uint32_t>(state_free_result_803DA084_6677);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DA084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8041A5E4u>(&func_8041A5E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041A5E4_6B78 = func_8041A5E4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041A5E4_6B78;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041A5E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->lr = 0x8045656Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_80456570:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80456584;
    }
}

loc_80456574:
{
    r3 = (r28 & 255);
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802E04CCu>(&func_802E04CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802E04CC_7216 = func_802E04CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802E04CC_7216;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802E04CCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    goto loc_804565B0;
}

loc_80456584:
{
    r3 = (r28 & 255);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802E04CCu>(&func_802E04CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802E04CC_74D6 = func_802E04CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802E04CC_74D6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802E04CCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    goto loc_804565B0;
}

loc_80456594:
{
    r3 = (r28 & 255);
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x802E04CCu>(&func_802E04CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802E04CC_7796 = func_802E04CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802E04CC_7796;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802E04CCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    goto loc_804565B0;
}

loc_804565A4:
{
    r3 = (r28 & 255);
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x802E04CCu>(&func_802E04CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802E04CC_7A56 = func_802E04CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802E04CC_7A56;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802E04CCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_804565B0:
{
    r29 = (r29 + 288);
    r28 = (r28 + 1);
}

loc_804565BC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(4))) {
        goto loc_8045649C;
    }
}

loc_804565C0:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80456324(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80456324_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80456324 func_80456324 preserves=true fpr_mask=0x00000000
