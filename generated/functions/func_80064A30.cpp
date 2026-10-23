#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064C68(CpuContext* ctx);
extern "C" uint32_t func_80064C68_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80064C78(CpuContext* ctx);
extern "C" uint32_t func_80064C78_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80064A30_ra38_1f0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80064A30;

loc_80064A30:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r30 = r4;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r31 = (r0 & 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
}

loc_80064A60:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80064A78;
    }
}

loc_80064A64:
{
}

loc_80064A68:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_80064AD4;
    }
}

loc_80064A6C:
{
}

loc_80064A70:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_80064B54;
    }
}

loc_80064A74:
{
    goto loc_80064BC4;
}

loc_80064A78:
{
    r4 = (r1 + 16);
    r0 = MemoryInline::FlatRead32((r30 + 32));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = r29;
    r4 = (r30 + 8);
    ctx->lr = 0x80064A98u;
    if constexpr (KnownRegArgsCpuCall<0x80064C78u>(&func_80064C78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80064C78_A94 = func_80064C78_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064C78_A94;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80064C78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32048));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8007A688u>(ctx);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r4 = MemoryInline::FlatRead32((r30 + 36));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8007A708u>(ctx);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32048));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A648u>(ctx);
    goto loc_80064BE4;
}

loc_80064AD4:
{
    r3 = (r1 + 44);
    r4 = (r30 + 20);
    r5 = (r30 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32044));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r4 = (r1 + 12);
    r0 = MemoryInline::FlatRead32((r30 + 32));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = r29;
    r4 = (r1 + 32);
    ctx->lr = 0x80064B14u;
    if constexpr (KnownRegArgsCpuCall<0x80064C78u>(&func_80064C78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80064C78_1445 = func_80064C78_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064C78_1445;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80064C78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32040));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32048));
    f3.d = f2.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A6C8u>(ctx);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32040));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32048));
    f3.d = f2.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A748u>(ctx);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32048));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A648u>(ctx);
    goto loc_80064BE4;
}

loc_80064B54:
{
    r3 = (r1 + 20);
    r4 = (r30 + 20);
    r5 = (r30 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 20);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r30 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = r29;
    r4 = (r30 + 8);
    ctx->lr = 0x80064B90u;
    if constexpr (KnownRegArgsCpuCall<0x80064C78u>(&func_80064C78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80064C78_1DDC = func_80064C78_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064C78_1DDC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80064C78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    r4 = MemoryInline::FlatRead32((r30 + 48));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8007A688u>(ctx);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r4 = MemoryInline::FlatRead32((r30 + 36));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8007A708u>(ctx);
    r3 = r29;
    r4 = (r1 + 20);
    ctx->lr = 0x80064BC0u;
    if constexpr (KnownRegArgsCpuCall<0x80064C68u>(&func_80064C68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80064C68_23D9 = func_80064C68_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064C68_23D9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80064C68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_80064BE4;
}

loc_80064BC4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 105;
    r5 = 0x80590000u;
    r5 = (r5 + -13736);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80064BE4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80064BE4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 16);
}

loc_80064BF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80064BFC;
    }
}

loc_80064BF4:
{
    r3 = r29;
    // inline leaf 0x80064C58 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C58
}

loc_80064BFC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 32);
}

loc_80064C08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80064C14;
    }
}

loc_80064C0C:
{
    r3 = r29;
    // inline leaf 0x80064C48 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C48
}

loc_80064C14:
{
    r3 = r29;
    // inline leaf 0x80064C38 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C38
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80064A30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80064A30_ra38_1f0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80064A30 func_80064A30 preserves=true fpr_mask=0x00000000
