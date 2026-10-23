#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012DBA0(CpuContext* ctx);
extern "C" uint64_t func_8012DBA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8012DC00_ra38_a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8012DC00;

loc_8012DC00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r29 = r3;
    r30 = r5;
    f31.d = f1.d;
    r31 = r6;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8012DC34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012DC40;
    }
}

loc_8012DC38:
{
    r3 = 0;
    goto loc_8012DCF8;
}

loc_8012DC40:
{
    r5 = MemoryInline::FlatRead8((r3 + 481));
    r0 = (r4 & 255);
}

loc_8012DC4C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8012DC58;
    }
}

loc_8012DC50:
{
    r3 = 0;
    goto loc_8012DCF8;
}

loc_8012DC58:
{
    ctx->lr = 0x8012DC5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012DBA0u>(&func_8012DBA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8012DBA0_87E = func_8012DBA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DBA0_87E);
        r4 = static_cast<uint32_t>(regargs_result_8012DBA0_87E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012DBA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8012DC60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012DCA8;
    }
}

loc_8012DC64:
{
    r0 = (r31 & 255);
}

loc_8012DC6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012DCA0;
    }
}

loc_8012DC70:
{
    r3 = r29;
    r4 = 11;
    r5 = 26;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl0_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl0_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl0_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D290:
{
    r3 = 1;
    goto loc_inl0_cont_8012D270;
}

loc_inl0_0x8012D298:
{
    r3 = 0;
}

loc_inl0_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_8012DC84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012DCA8;
    }
}

loc_8012DC88:
{
    r3 = r29;
    r4 = 11;
    r5 = 27;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl1_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl1_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl1_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D290:
{
    r3 = 1;
    goto loc_inl1_cont_8012D270;
}

loc_inl1_0x8012D298:
{
    r3 = 0;
}

loc_inl1_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_8012DC9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012DCA8;
    }
}

loc_8012DCA0:
{
    r3 = 0;
    goto loc_8012DCF8;
}

loc_8012DCA8:
{
    r0 = MemoryInline::FlatRead8((r29 + 482));
}

loc_8012DCB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012DCD4;
    }
}

loc_8012DCB4:
{
    r3 = r30;
    r4 = (r29 + 392);
    ctx->lr = 0x8012DCC0u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_1614 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_1614);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_1614 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8012DCC4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012DCF4;
    }
}

loc_8012DCCC:
{
    r3 = 1;
    goto loc_8012DCF8;
}

loc_8012DCD4:
{
    r3 = r30;
    r4 = (r29 + 392);
    ctx->lr = 0x8012DCE0u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_1C00 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_1C00);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_1C00 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8012DCE4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012DCF4;
    }
}

loc_8012DCEC:
{
    r3 = 1;
    goto loc_8012DCF8;
}

loc_8012DCF4:
{
    r3 = 0;
}

loc_8012DCF8:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012DC00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012DC00_ra38_a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x8000000A fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012DC00 func_8012DC00 preserves=true fpr_mask=0x00000000
