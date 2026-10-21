#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8A5C(CpuContext* ctx);
extern "C" uint64_t func_800E8A5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800E8B80_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800E8B80u);
    goto loc_800E8B80;

loc_800E8B80:
{
    MemoryInline::FlatWriteRam32((r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17440));
}

loc_800E8B9C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_800E8BA8;
    }
}

loc_800E8BA0:
{
    r3 = 0;
    goto loc_800E8D18;
}

loc_800E8BA8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -17440), r0);
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r7 = (r1 + 8);
    r6 = MemoryInline::FlatRead32((r13 + -17456));
    r0 = MemoryInline::FlatRead32((r13 + -17464));
    r8 = (r6 + r0);
    r10 = 0;
    r9 = 0;
    r5 = MemoryInline::FlatRead32((r13 + -17452));
    r3 = MemoryInline::FlatRead32((r13 + -17460));
    r4 = 0;
    r0 = 12;
    ctr = r0;
}

loc_800E8BEC:
{
    r0 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite32((r13 + -17456), r6);
}

loc_800E8C04:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_800E8C1C;
    }
}

loc_800E8C08:
{
    r10 = 1;
    MemoryInline::FlatWrite32((r13 + -17456), r4);
    r6 = 0;
    r8 = MemoryInline::FlatRead32((r13 + -17464));
    goto loc_800E8C2C;
}

loc_800E8C1C:
{
}

loc_800E8C20:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(1))) {
        goto loc_800E8C2C;
    }
}

loc_800E8C24:
{
}

loc_800E8C28:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_800E8CF8;
    }
}

loc_800E8C2C:
{
    r0 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite32((r13 + -17456), r6);
}

loc_800E8C44:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_800E8C5C;
    }
}

loc_800E8C48:
{
    r10 = 1;
    MemoryInline::FlatWrite32((r13 + -17456), r4);
    r6 = 0;
    r8 = MemoryInline::FlatRead32((r13 + -17464));
    goto loc_800E8C6C;
}

loc_800E8C5C:
{
}

loc_800E8C60:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(1))) {
        goto loc_800E8C6C;
    }
}

loc_800E8C64:
{
}

loc_800E8C68:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_800E8CF8;
    }
}

loc_800E8C6C:
{
    r0 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite32((r13 + -17456), r6);
}

loc_800E8C84:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_800E8C9C;
    }
}

loc_800E8C88:
{
    r10 = 1;
    MemoryInline::FlatWrite32((r13 + -17456), r4);
    r6 = 0;
    r8 = MemoryInline::FlatRead32((r13 + -17464));
    goto loc_800E8CAC;
}

loc_800E8C9C:
{
}

loc_800E8CA0:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(1))) {
        goto loc_800E8CAC;
    }
}

loc_800E8CA4:
{
}

loc_800E8CA8:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_800E8CF8;
    }
}

loc_800E8CAC:
{
    r0 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r0));
    r7 = (r7 + 4);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite32((r13 + -17456), r6);
}

loc_800E8CC8:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_800E8CE0;
    }
}

loc_800E8CCC:
{
    r10 = 1;
    MemoryInline::FlatWrite32((r13 + -17456), r4);
    r6 = 0;
    r8 = MemoryInline::FlatRead32((r13 + -17464));
    goto loc_800E8CF0;
}

loc_800E8CE0:
{
}

loc_800E8CE4:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(1))) {
        goto loc_800E8CF0;
    }
}

loc_800E8CE8:
{
}

loc_800E8CEC:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_800E8CF8;
    }
}

loc_800E8CF0:
{
    r9 = (r9 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E8BEC;
    }
}

loc_800E8CF8:
{
    r0 = MemoryInline::FlatRead32((r13 + -17464));
    r0 = (r8 - r0);
    MemoryInline::FlatWrite32((r13 + -17456), r0);
    r3 = r31;
    r4 = 384;
    r5 = (r1 + 8);
    r6 = 48;
    if constexpr (KnownRegArgsCpuCall<0x800E8A5Cu>(&func_800E8A5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_800E8A5C_15B9 = func_800E8A5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E8A5C_15B9);
        r4 = static_cast<uint32_t>(regargs_result_800E8A5C_15B9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800E8A5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    }
}

loc_800E8D18:
{
    r0 = MemoryInline::FlatRead32((r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E8B80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E8B80_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E8B80 func_800E8B80 preserves=true fpr_mask=0x00000000
