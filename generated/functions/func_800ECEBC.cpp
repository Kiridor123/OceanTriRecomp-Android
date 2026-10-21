#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A69A0(CpuContext* ctx);
extern "C" uint64_t func_804A69A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_800ECEBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x800ECEBCu);
    goto loc_800ECEBC;

loc_800ECEBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r4;
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -17416));
    r6 = MemoryInline::FlatRead8((r3 + 169));
    r4 = MemoryInline::FlatRead8((r3 + 170));
}

loc_800ECEF0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r6))) {
        goto loc_800ED064;
    }
}

loc_800ECEF4:
{
    r4 = MemoryInline::FlatRead8((r3 + 137));
}

loc_800ECEFC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r4))) {
        goto loc_800ED064;
    }
}

loc_800ECF00:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
}

loc_800ECF08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800ED064;
    }
}

loc_800ECF0C:
{
    r4 = MemoryInline::FlatRead32((r3 + 204));
}

loc_800ECF14:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800ECF24;
    }
}

loc_800ECF18:
{
    r4 = MemoryInline::FlatRead32((r3 + 176));
}

loc_800ECF20:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r4))) {
        goto loc_800ED064;
    }
}

loc_800ECF24:
{
    r5 = MemoryInline::FlatRead32((r3 + 144));
    r4 = (r6 * r0);
    r30 = (r5 + r4);
    MemoryInline::FlatWrite32((r3 + 56), r29);
    r6 = MemoryInline::FlatRead32((r3 + 64));
    r4 = MemoryInline::FlatRead8((r3 + 211));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r13 + -17420));
}

loc_800ECF4C:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r4))) {
        goto loc_800ECF6C;
    }
}

loc_800ECF50:
{
    r0 = r5;
    r4 = MemoryInline::FlatRead32((r3 + 204));
}

loc_800ECF5C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800ECFE4;
    }
}

loc_800ECF60:
{
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r4));
    goto loc_800ECFE4;
}

loc_800ECF6C:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
}

loc_800ECF74:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800ECFA8;
    }
}

loc_800ECF78:
{
    r6 = MemoryInline::FlatRead32((r3 + 172));
    r4 = MemoryInline::FlatRead32((r13 + -17416));
    r4 = (r6 + r4);
}

loc_800ECF88:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r5))) {
        goto loc_800ECFE4;
    }
}

loc_800ECF8C:
{
    r0 = (r5 - r6);
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 224));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 224), r4);
    goto loc_800ECFE4;
}

loc_800ECFA8:
{
    r5 = MemoryInline::FlatRead32((r3 + 176));
    r4 = MemoryInline::FlatRead32((r13 + -17416));
    r5 = (r5 + r4);
}

loc_800ECFB8:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r6))) {
        goto loc_800ECFC0;
    }
}

loc_800ECFBC:
{
    r0 = (r5 - r6);
}

loc_800ECFC0:
{
    r4 = MemoryInline::FlatRead8((r3 + 209));
}

loc_800ECFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800ECFE4;
    }
}

loc_800ECFCC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17412));
    r4 = (r6 - r4);
}

loc_800ECFD8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_800ECFE4;
    }
}

loc_800ECFDC:
{
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r4));
}

loc_800ECFE4:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r4 = MemoryInline::FlatRead8((r3 + 211));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r5 = MemoryInline::FlatRead32((r3 + 172));
    r3 = (r5 + r0);
}

loc_800ED000:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_800ED008;
    }
}

loc_800ED004:
{
    r0 = (r4 - r5);
}

loc_800ED008:
{
    r3 = r0;
    r4 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EA81Cu>(ctx);
    r3 = ctx->gpr[3];
    r27 = r3;
    r28 = MemoryInline::FlatRead8((r31 + 169));
    r3 = r29;
    r0 = 8192;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F7Cu>(ctx);
    r3 = r29;
    r0 = 65536;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 169));
    MemoryInline::FlatWrite8((r31 + 170), static_cast<uint8_t>(r0));
    r3 = (r31 + 12);
    r4 = r30;
    r5 = r27;
    r6 = MemoryInline::FlatRead32((r31 + 172));
    r7 = 0x800F0000u;
    r7 = (r7 + -22812);
    r8 = 0;
    ctx->lr = 0x800ED064u;
    if constexpr (KnownRegArgsCpuCall<0x804A69A0u>(&func_804A69A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_804A69A0_19C4 = func_804A69A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A69A0_19C4);
        r4 = static_cast<uint32_t>(regargs_result_804A69A0_19C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804A69A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800ED064:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800ECEBC func_800ECEBC preserves=true fpr_mask=0x00000000
