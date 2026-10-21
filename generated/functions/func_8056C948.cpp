#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80527930(CpuContext* ctx);
extern "C" uint64_t func_80527930_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80529EA0(CpuContext* ctx);
extern "C" uint64_t func_80529EA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8052A6C0(CpuContext* ctx);
extern "C" uint64_t func_8052A6C0_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_8056C948_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x8056C948u);
    goto loc_8056C948;

loc_8056C948:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 144));
}

loc_8056C970:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8056C9EC;
    }
}

loc_8056C974:
{
    r29 = (r4 + 3264);
    r30 = 0;
    r31 = 0x80570000u;
}

loc_8056C980:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = r29;
    r4 = (r31 + -14036);
    r5 = (r1 + 8);
    ctx->lr = 0x8056C994u;
    if constexpr (KnownRegArgsCpuCall<0x80527930u>(&func_80527930)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80527930_961 = func_80527930_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80527930_961);
        r4 = static_cast<uint32_t>(regargs_result_80527930_961 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80527930u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8056C994:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8056C99C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056C994;
    }
}

loc_8056C9A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8056C9A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8056C9C4;
    }
}

loc_8056C9AC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + 65536);
}

loc_8056C9B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65531))) {
        goto loc_8056C980;
    }
}

loc_8056C9BC:
{
    r3 = 1;
    goto loc_8056CA68;
}

loc_8056C9C4:
{
    r4 = 0x80570000u;
    r5 = 0x80570000u;
    r6 = 0x80570000u;
    r3 = MemoryInline::FlatRead32((r28 + 144));
    r4 = (r4 + -14688);
    r5 = (r5 + -14532);
    r6 = (r6 + -14376);
    ctx->lr = 0x8056C9E4u;
    if constexpr (KnownRegArgsCpuCall<0x80529EA0u>(&func_80529EA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80529EA0_12B3 = func_80529EA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80529EA0_12B3);
        r4 = static_cast<uint32_t>(regargs_result_80529EA0_12B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80529EA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r30 = r3;
    goto loc_8056CA60;
}

loc_8056C9EC:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80570000u;
    r28 = r3;
    r3 = (r4 + -14688);
    // inline leaf 0x8052A080 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 2720));
    MemoryInline::FlatWrite32((r4 + 2720), r0);
    // end of inlined leaf 0x8052A080
    r4 = 0x80570000u;
    r29 = r3;
    r3 = (r4 + -14532);
    // inline leaf 0x8052A0A0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 2724));
    MemoryInline::FlatWrite32((r4 + 2724), r0);
    // end of inlined leaf 0x8052A0A0
    r4 = 0x80570000u;
    r30 = r3;
    r3 = (r4 + -14376);
    // inline leaf 0x8052A0C0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 2728));
    MemoryInline::FlatWrite32((r4 + 2728), r0);
    // end of inlined leaf 0x8052A0C0
}

loc_8056CA24:
{
    r31 = r3;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8056CA3C;
    }
}

loc_8056CA2C:
{
}

loc_8056CA30:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8056CA3C;
    }
}

loc_8056CA34:
{
}

loc_8056CA38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056CA54;
    }
}

loc_8056CA3C:
{
    r3 = r29;
    // inline leaf 0x8052A080 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 2720));
    MemoryInline::FlatWrite32((r4 + 2720), r0);
    // end of inlined leaf 0x8052A080
    r3 = r30;
    // inline leaf 0x8052A0A0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 2724));
    MemoryInline::FlatWrite32((r4 + 2724), r0);
    // end of inlined leaf 0x8052A0A0
    r3 = r31;
    // inline leaf 0x8052A0C0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 2728));
    MemoryInline::FlatWrite32((r4 + 2728), r0);
    // end of inlined leaf 0x8052A0C0
}

loc_8056CA54:
{
    r3 = r28;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl7_0x804D1330:
{
}

loc_inl7_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x804D1344;
    }
}

loc_inl7_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl7_0x804D1348;
}

loc_inl7_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl7_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl7_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r30 = 0;
}

loc_8056CA60:
{
    ctx->lr = 0x8056CA64u;
    if constexpr (KnownRegArgsCpuCall<0x8052A6C0u>(&func_8052A6C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8052A6C0_2522 = func_8052A6C0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_8052A6C0_2522);
        r4 = static_cast<uint32_t>(regargs_result_8052A6C0_2522 >> 32);
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
        InvokeDirectCpu<0x8052A6C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
}

loc_8056CA68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8056C948(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056C948_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056C948 func_8056C948 preserves=true fpr_mask=0x00000000
