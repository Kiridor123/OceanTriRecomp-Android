#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80087F6C(CpuContext* ctx);
extern "C" uint64_t func_80087F6C_ra28_fe_18_0(CpuContext*, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" void func_80087D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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

    MKW_GUEST_ENTER(0x80087D30u);
    goto loc_80087D30;

loc_80087D30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r5 = 1;
}

loc_80087D4C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80087DE8;
    }
}

loc_80087D50:
{
    r25 = 0;
    r28 = r3;
    r27 = 30;
    r26 = (r1 + 8);
    r29 = (r4 & 65535);
    r31 = 60;
    r30 = 0;
}

loc_80087D6C:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_80087D74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80087D94;
    }
}

loc_80087D78:
{
    MemoryInline::FlatWrite32(r26, r27);
    r3 = r29;
    ctx->lr = 0x80087D84u;
    if constexpr (KnownRegArgsCpuCall<0x80087F6Cu>(&func_80087F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80087F6C_8C2 = func_80087F6C_ra28_fe_18_0(ctx, r3, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_80087F6C_8C2);
        r4 = static_cast<uint32_t>(regargs_result_80087F6C_8C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80087F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    }
    r4 = MemoryInline::FlatRead32(r26);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009B330u>(ctx);
    r5 = 0;
    goto loc_80087DAC;
}

loc_80087D94:
{
}

loc_80087D98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80087DA8;
    }
}

loc_80087D9C:
{
    MemoryInline::FlatWrite32(r26, r30);
    r5 = 0;
    goto loc_80087DAC;
}

loc_80087DA8:
{
    MemoryInline::FlatWrite32(r26, r31);
}

loc_80087DAC:
{
    r28 = (r28 + 4);
    r27 = (r27 + 3);
    r26 = (r26 + 4);
    r25 = (r25 + 1);
}

loc_80087DC0:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(8))) {
        goto loc_80087D6C;
    }
}

loc_80087DC4:
{
}

loc_80087DC8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80087DD8;
    }
}

loc_80087DCC:
{
    r3 = (r13 + -17708);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80087CF0u>(ctx);
    goto loc_80087DE8;
}

loc_80087DD8:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009B1A4u>(ctx);
    r3 = (r13 + -17708);
    // inline leaf 0x80087CE4 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80087CE4
}

loc_80087DE8:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000183B gpr_return=0x00000018 fpr_read=0x00003EFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80087D30 func_80087D30 preserves=true fpr_mask=0x00000000
