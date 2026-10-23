#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805284B0(CpuContext* ctx);
extern "C" uint64_t func_805284B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80528540(CpuContext* ctx);
extern "C" uint64_t func_80528540_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80528700_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    goto loc_80528700;

loc_80528700:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r4 = MemoryInline::FlatRead32((r13 + -13344));
    r0 = 2;
    r27 = r3;
    r29 = MemoryInline::FlatRead32(r3);
    r30 = (r4 + 9728);
    r4 = 0;
    r5 = r30;
    ctr = r0;
    // nop
}

loc_80528738:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80528740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80528748;
    }
}

loc_80528744:
{
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80528748:
{
    r3 = MemoryInline::FlatRead32((r5 + 52));
}

loc_80528750:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80528758;
    }
}

loc_80528754:
{
    MemoryInline::FlatWrite32((r5 + 52), r0);
}

loc_80528758:
{
    r3 = MemoryInline::FlatRead32((r5 + 104));
}

loc_80528760:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80528768;
    }
}

loc_80528764:
{
    MemoryInline::FlatWrite32((r5 + 104), r0);
}

loc_80528768:
{
    r3 = MemoryInline::FlatRead32((r5 + 156));
}

loc_80528770:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80528778;
    }
}

loc_80528774:
{
    MemoryInline::FlatWrite32((r5 + 156), r0);
}

loc_80528778:
{
    r3 = MemoryInline::FlatRead32((r5 + 208));
}

loc_80528780:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80528788;
    }
}

loc_80528784:
{
    MemoryInline::FlatWrite32((r5 + 208), r0);
}

loc_80528788:
{
    r3 = MemoryInline::FlatRead32((r5 + 260));
}

loc_80528790:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80528798;
    }
}

loc_80528794:
{
    MemoryInline::FlatWrite32((r5 + 260), r0);
}

loc_80528798:
{
    r3 = MemoryInline::FlatRead32((r5 + 312));
}

loc_805287A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805287A8;
    }
}

loc_805287A4:
{
    MemoryInline::FlatWrite32((r5 + 312), r0);
}

loc_805287A8:
{
    r3 = MemoryInline::FlatRead32((r5 + 364));
}

loc_805287B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805287B8;
    }
}

loc_805287B4:
{
    MemoryInline::FlatWrite32((r5 + 364), r0);
}

loc_805287B8:
{
    r5 = (r5 + 416);
    r4 = (r4 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80528738;
    }
}

loc_805287C4:
{
    r31 = 1;
    goto loc_80528814;
}

loc_805287CC:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 * 52);
    r28 = (r30 + r0);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
}

loc_805287E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805287F0;
    }
}

loc_805287E4:
{
}

loc_805287E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80528808;
    }
}

loc_805287EC:
{
    goto loc_8052880C;
}

loc_805287F0:
{
    r5 = MemoryInline::FlatRead32(r27);
    r3 = r28;
    r4 = r27;
    ctx->lr = 0x80528800u;
    if constexpr (KnownRegArgsCpuCall<0x80528540u>(&func_80528540)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80528540_145C = func_80528540_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80528540_145C);
        r4 = static_cast<uint32_t>(regargs_result_80528540_145C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80528540u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
    MemoryInline::FlatWrite32(r28, r31);
    goto loc_8052880C;
}

loc_80528808:
{
    MemoryInline::FlatWrite32(r28, r31);
}

loc_8052880C:
{
    r27 = (r27 + r29);
    r29 = MemoryInline::FlatRead32(r27);
}

loc_80528814:
{
    r0 = (r29 + 65536);
}

loc_8052881C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805287CC;
    }
}

loc_80528820:
{
    ctx->lr = 0x80528824u;
    if constexpr (KnownRegArgsCpuCall<0x805284B0u>(&func_805284B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_805284B0_1CB7 = func_805284B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805284B0_1CB7);
        r4 = static_cast<uint32_t>(regargs_result_805284B0_1CB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805284B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80528700(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80528700_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80528700 func_80528700 preserves=true fpr_mask=0x00000000
