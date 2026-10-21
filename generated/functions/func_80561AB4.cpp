#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80503690(CpuContext* ctx);
extern "C" uint64_t func_80503690_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80543568(CpuContext* ctx);
extern "C" uint64_t func_80543568_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8055BEEC(CpuContext* ctx);
extern "C" uint64_t func_8055BEEC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_80561AB4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    MKW_GUEST_ENTER(0x80561AB4u);
    goto loc_80561AB4;

loc_80561AB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 7156;
    ctx->lr = 0x80561AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x804C2B00u>(ctx);
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
}

loc_80561ADC:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80561C20;
    }
}

loc_80561AE4:
{
    r28 = 0x80660000u;
    r30 = 0x80660000u;
    r29 = MemoryInline::FlatRead32((r31 + 48));
    r4 = r31;
    r31 = MemoryInline::FlatRead32((r31 + 8));
    r28 = (r28 + -25808);
    r30 = (r30 + -25780);
    ctx->lr = 0x80561B04u;
    if constexpr (KnownRegArgsCpuCall<0x80543568u>(&func_80543568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80543568_D21 = func_80543568_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80543568_D21);
        r4 = static_cast<uint32_t>(regargs_result_80543568_D21 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80543568u>(ctx);
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
    }
    r4 = r31;
    r5 = r30;
    r6 = r29;
    r3 = (r27 + 6660);
    ctx->lr = 0x80561B18u;
    if constexpr (KnownRegArgsCpuCall<0x8055BEECu>(&func_8055BEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8055BEEC_1482 = func_8055BEEC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8055BEEC_1482);
        r4 = static_cast<uint32_t>(regargs_result_8055BEEC_1482 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8055BEECu>(ctx);
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
    }
    r6 = 0x80650000u;
    r4 = 0x80650000u;
    r6 = (r6 + 4440);
    r31 = 0;
    MemoryInline::FlatWrite32(r27, r6);
    r3 = (r6 + 32);
    r5 = (r6 + 184);
    r0 = (r6 + 428);
    MemoryInline::FlatWrite32((r27 + 92), r3);
    r4 = (r4 + 18328);
    r3 = (r27 + 6844);
    MemoryInline::FlatWrite32((r27 + 280), r5);
    MemoryInline::FlatWrite32((r27 + 6660), r0);
    MemoryInline::FlatWrite32((r27 + 6828), r4);
    MemoryInline::FlatWrite32((r27 + 6832), r28);
    MemoryInline::FlatWrite8((r27 + 6836), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r27 + 6837), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r27 + 6838), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r27 + 6840), r31);
    ctx->lr = 0x80561B68u;
    if constexpr (KnownRegArgsCpuCall<0x80503690u>(&func_80503690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80503690_1E26 = func_80503690_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80503690_1E26);
        r4 = static_cast<uint32_t>(regargs_result_80503690_1E26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80503690u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = 0x80660000u;
    r3 = 0x80650000u;
    r4 = (r4 + -23640);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -872));
    MemoryInline::FlatWrite32(r27, r4);
    r0 = (r4 + 32);
    r5 = (r4 + 184);
    r4 = (r4 + 428);
    MemoryInline::FlatWrite32((r27 + 92), r0);
    r3 = (r3 + 6096);
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 280), r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 6660), 0, 488u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r27 + 6660), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r27 + 6900), r31);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r27 + 6904), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r27 + 6908), r31);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r27 + 6912), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 256u, (r27 + 6916), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 260u, (r27 + 6920), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 264u, (r27 + 6924), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r27 + 6928), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 272u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 272u, (r27 + 6932), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 276u, (r27 + 6936), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 280u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 280u, (r27 + 6940), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 284u, (r27 + 6944), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 300u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 300u, (r27 + 6960), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 304u, (r27 + 6964), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 320u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 320u, (r27 + 6980), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 324u, (r27 + 6984), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 424u, (r27 + 7084), r3);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 440u, (r27 + 7100), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 444u, (r27 + 7104), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 445u, (r27 + 7105), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r27 + 7108), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r27 + 7116), r31);
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r27 + 7120), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 464u, (r27 + 7124), r31);
    MemoryInline::WriteResolved8(guest_range_0, 468u, (r27 + 7128), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 469u, (r27 + 7129), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 470u, (r27 + 7130), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 471u, (r27 + 7131), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 472u, (r27 + 7132), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 476u, (r27 + 7136), r31);
    MemoryInline::WriteResolved8(guest_range_0, 480u, (r27 + 7140), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 481u, (r27 + 7141), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 484u, (r27 + 7144), r0);
}

loc_80561C20:
{
    r11 = (r1 + 32);
    r3 = r27;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80561AB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80561AB4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80561AB4 func_80561AB4 preserves=true fpr_mask=0x00000000
