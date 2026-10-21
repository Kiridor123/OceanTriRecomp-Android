#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF250(CpuContext* ctx);
extern "C" uint64_t func_804EF250_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804F90C0(CpuContext* ctx);
extern "C" void func_804F90C0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F9280(CpuContext* ctx);
extern "C" uint64_t func_804F9280_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804F8A00_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x804F8A00u);
    goto loc_804F8A00;

loc_804F8A00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r5;
    r29 = r4;
    r0 = MemoryInline::FlatRead8((r4 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F8B3C;
    }
}

loc_804F8A2C:
{
    ctx->lr = 0x804F8A30u;
    if constexpr (KnownRegArgsCpuCall<0x804EF250u>(&func_804EF250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EF250_6B4 = func_804EF250_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EF250_6B4);
        r4 = static_cast<uint32_t>(regargs_result_804EF250_6B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EF250u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 + -3);
}

loc_804F8A38:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804F8A4C;
    }
}

loc_804F8A3C:
{
    r0 = (r3 + -6);
}

loc_804F8A44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804F8AAC;
    }
}

loc_804F8A48:
{
    goto loc_804F8B3C;
}

loc_804F8A4C:
{
}

loc_804F8A50:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804F8A5C;
    }
}

loc_804F8A54:
{
}

loc_804F8A58:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(2))) {
        goto loc_804F8A64;
    }
}

loc_804F8A5C:
{
    r7 = (r2 + -1648);
    goto loc_804F8A68;
}

loc_804F8A64:
{
    r7 = (r2 + -1640);
}

loc_804F8A68:
{
}

loc_804F8A6C:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(1))) {
        goto loc_804F8A90;
    }
}

loc_804F8A70:
{
    r5 = MemoryInline::FlatRead16((r7 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r29 + 48);
    r6 = MemoryInline::FlatRead16((r7 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (r29 + 49);
    r7 = MemoryInline::FlatRead16(r7);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r8 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804F90C0u>(&func_804F90C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        func_804F90C0_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804F90C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_804F8B3C;
}

loc_804F8A90:
{
    r5 = MemoryInline::FlatRead16((r7 + 6));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r29 + 48);
    r6 = MemoryInline::FlatRead16(r7);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (r29 + 49);
    r7 = 0;
    ctx->lr = 0x804F8AA8u;
    if constexpr (KnownRegArgsCpuCall<0x804F9280u>(&func_804F9280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804F9280_132A = func_804F9280_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_804F9280_132A);
        r4 = static_cast<uint32_t>(regargs_result_804F9280_132A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x804F9280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    }
    goto loc_804F8B3C;
}

loc_804F8AAC:
{
}

loc_804F8AB0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804F8ABC;
    }
}

loc_804F8AB4:
{
}

loc_804F8AB8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(2))) {
        goto loc_804F8AC4;
    }
}

loc_804F8ABC:
{
    r31 = (r2 + -1632);
    goto loc_804F8AC8;
}

loc_804F8AC4:
{
    r31 = (r2 + -1624);
}

loc_804F8AC8:
{
}

loc_804F8ACC:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(1))) {
        goto loc_804F8B0C;
    }
}

loc_804F8AD0:
{
    r5 = MemoryInline::FlatRead16((r31 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r29 + 44);
    r6 = MemoryInline::FlatRead16((r31 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (r29 + 46);
    r7 = MemoryInline::FlatRead16(r31);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r8 = 1;
    if constexpr (KnownRegArgsCpuCall<0x804F90C0u>(&func_804F90C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        func_804F90C0_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804F90C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r5 = MemoryInline::FlatRead16((r31 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r29 + 48);
    r6 = MemoryInline::FlatRead16((r31 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (r29 + 50);
    r7 = MemoryInline::FlatRead16(r31);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r8 = 1;
    if constexpr (KnownRegArgsCpuCall<0x804F90C0u>(&func_804F90C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        func_804F90C0_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804F90C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_804F8B3C;
}

loc_804F8B0C:
{
    r5 = MemoryInline::FlatRead16((r31 + 6));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r29 + 44);
    r6 = MemoryInline::FlatRead16(r31);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (r29 + 46);
    r7 = 1;
    ctx->lr = 0x804F8B24u;
    if constexpr (KnownRegArgsCpuCall<0x804F9280u>(&func_804F9280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804F9280_243C = func_804F9280_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_804F9280_243C);
        r4 = static_cast<uint32_t>(regargs_result_804F9280_243C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x804F9280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    }
    r5 = MemoryInline::FlatRead16((r31 + 6));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r29 + 48);
    r6 = MemoryInline::FlatRead16(r31);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (r29 + 50);
    r7 = 1;
    ctx->lr = 0x804F8B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x804F9280u>(&func_804F9280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804F9280_29E1 = func_804F9280_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_804F9280_29E1);
        r4 = static_cast<uint32_t>(regargs_result_804F9280_29E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x804F9280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    }
}

loc_804F8B3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F8A00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F8A00_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F8A00 func_804F8A00 preserves=true fpr_mask=0x00000000
