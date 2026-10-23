#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C07E0(CpuContext* ctx);
extern "C" uint64_t func_804C07E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8081A090(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8081A090;

loc_8081A090:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r31 = 0;
    r3 = 0x80860000u;
    r28 = (r3 + 21488);
    r3 = 0x80860000u;
    r27 = (r3 + 21472);
    r3 = 0x80860000u;
    r26 = (r3 + 21320);
    r3 = 0x80860000u;
    r25 = (r3 + 21520);
    r3 = 0x80860000u;
    r24 = (r3 + 21504);
    r30 = 0;
}

loc_8081A0D4:
{
    r3 = r31;
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF040u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32(r27, r3);
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWrite32((r26 + 12), r0);
    r3 = r31;
    r4 = r25;
    r5 = 16;
    ctx->lr = 0x8081A0FCu;
    if constexpr (KnownRegArgsCpuCall<0x804C07E0u>(&func_804C07E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_804C07E0_9AC = func_804C07E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C07E0_9AC);
        r4 = static_cast<uint32_t>(regargs_result_804C07E0_9AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x804C07E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    MemoryInline::FlatWrite32(r24, r3);
    r0 = MemoryInline::FlatRead32(r24);
}

loc_8081A108:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081A11C;
    }
}

loc_8081A10C:
{
    r3 = r25;
    r4 = 0;
    r5 = 176;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8081A11C:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r3 + 4);
}

loc_8081A128:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8081A13C;
    }
}

loc_8081A12C:
{
}

loc_8081A130:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-7))) {
        goto loc_8081A13C;
    }
}

loc_8081A134:
{
}

loc_8081A138:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081A1A0;
    }
}

loc_8081A13C:
{
    MemoryInline::FlatWrite32(r26, r25);
    r3 = MemoryInline::FlatRead32(r26);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    r4 = (r26 + 4);
    ctx->lr = 0x8081A150u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80819E18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r29 = r3;
    r3 = MemoryInline::FlatRead32(r26);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 112));
    r3 = (r26 + 4);
    ctx->lr = 0x8081A168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80819D40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = (r29 | r3);
}

loc_8081A170:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081A1A4;
    }
}

loc_8081A174:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead8((r3 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8081A184:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8081A1A4;
    }
}

loc_8081A188:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
    r3 = MemoryInline::FlatRead32(r26);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
    goto loc_8081A1A4;
}

loc_8081A1A0:
{
    MemoryInline::FlatWrite32(r26, r30);
}

loc_8081A1A4:
{
    r28 = (r28 + 4);
    r27 = (r27 + 4);
    r26 = (r26 + 16);
    r25 = (r25 + 2816);
    r24 = (r24 + 4);
    r31 = (r31 + 1);
}

loc_8081A1C0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_8081A0D4;
    }
}

loc_8081A1C4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F3F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081A090 func_8081A090 preserves=true fpr_mask=0x00000000
