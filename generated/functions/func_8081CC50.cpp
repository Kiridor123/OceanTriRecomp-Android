#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EFF30(CpuContext* ctx);
extern "C" uint64_t func_804EFF30_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_8081CC50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8081CC50;

loc_8081CC50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 65));
}

loc_8081CC6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081CCD8;
    }
}

loc_8081CC70:
{
    r5 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 17588));
    r5 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r4 = MemoryInline::FlatRead32(r31);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r6 = fctiwzword0;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    ctx->lr = 0x8081CCA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8081DC90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x8081CCA8u;
    if constexpr (KnownRegArgsCpuCall<0x804EFF30u>(&func_804EFF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EFF30_83C = func_804EFF30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EFF30_83C);
        r4 = static_cast<uint32_t>(regargs_result_804EFF30_83C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFF30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8081CCAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081CCD8;
    }
}

loc_8081CCB0:
{
    r0 = MemoryInline::FlatRead8((r31 + 66));
}

loc_8081CCB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081CCC8;
    }
}

loc_8081CCBC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    MemoryInline::FlatWrite32((r31 + 52), r4);
    MemoryInline::FlatWrite32((r31 + 48), r3);
}

loc_8081CCC8:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r0));
}

loc_8081CCD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081CC50 func_8081CC50 preserves=true fpr_mask=0x00000000
