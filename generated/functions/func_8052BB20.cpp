#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052BB20(CpuContext* ctx);
extern "C" uint64_t func_8052BB20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052BB20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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

    MKW_GUEST_ENTER(0x8052BB20u);
    goto loc_8052BB20;

loc_8052BB20:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
}

loc_8052BB38:
{
    r23 = r3;
    r31 = r4;
    r25 = (r13 + -13296);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052BB8C;
    }
}

loc_8052BB48:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8052BB58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_8052BB70;
}

loc_8052BB5C:
{
}

loc_8052BB60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r25))) {
        goto loc_8052BB6C;
    }
}

loc_8052BB64:
{
    r0 = 1;
    goto loc_8052BB7C;
}

loc_8052BB6C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8052BB70:
{
}

loc_8052BB74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052BB5C;
    }
}

loc_8052BB78:
{
    r0 = 0;
}

loc_8052BB7C:
{
}

loc_8052BB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052BB8C;
    }
}

loc_8052BB84:
{
    r3 = r23;
    goto loc_8052BB90;
}

loc_8052BB8C:
{
    r3 = 0;
}

loc_8052BB90:
{
}

loc_8052BB94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052BB9C;
    }
}

loc_8052BB98:
{
    MemoryInline::FlatWrite32((r3 + 248), r31);
}

loc_8052BB9C:
{
    r30 = MemoryInline::FlatRead32((r23 + 20));
    r27 = (r23 + 20);
    r23 = (r13 + -13296);
    r24 = (r13 + -13296);
    goto loc_8052BCAC;
}

loc_8052BBB0:
{
    r25 = (r30 + -4);
}

loc_8052BBB4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8052BC00;
    }
}

loc_8052BBB8:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8052BBCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_8052BBE4;
}

loc_8052BBD0:
{
}

loc_8052BBD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r24))) {
        goto loc_8052BBE0;
    }
}

loc_8052BBD8:
{
    r0 = 1;
    goto loc_8052BBF0;
}

loc_8052BBE0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8052BBE4:
{
}

loc_8052BBE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052BBD0;
    }
}

loc_8052BBEC:
{
    r0 = 0;
}

loc_8052BBF0:
{
}

loc_8052BBF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052BC00;
    }
}

loc_8052BBF8:
{
    r3 = r25;
    goto loc_8052BC04;
}

loc_8052BC00:
{
    r3 = 0;
}

loc_8052BC04:
{
}

loc_8052BC08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052BC10;
    }
}

loc_8052BC0C:
{
    MemoryInline::FlatWrite32((r3 + 248), r31);
}

loc_8052BC10:
{
    r29 = MemoryInline::FlatRead32((r25 + 20));
    r26 = (r25 + 20);
    goto loc_8052BCA0;
}

loc_8052BC1C:
{
    r25 = (r29 + -4);
}

loc_8052BC20:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8052BC6C;
    }
}

loc_8052BC24:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8052BC38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_8052BC50;
}

loc_8052BC3C:
{
}

loc_8052BC40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_8052BC4C;
    }
}

loc_8052BC44:
{
    r0 = 1;
    goto loc_8052BC5C;
}

loc_8052BC4C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8052BC50:
{
}

loc_8052BC54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052BC3C;
    }
}

loc_8052BC58:
{
    r0 = 0;
}

loc_8052BC5C:
{
}

loc_8052BC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052BC6C;
    }
}

loc_8052BC64:
{
    r3 = r25;
    goto loc_8052BC70;
}

loc_8052BC6C:
{
    r3 = 0;
}

loc_8052BC70:
{
}

loc_8052BC74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052BC7C;
    }
}

loc_8052BC78:
{
    MemoryInline::FlatWrite32((r3 + 248), r31);
}

loc_8052BC7C:
{
    r25 = (r25 + 20);
    r28 = MemoryInline::FlatRead32(r25);
    goto loc_8052BC94;
}

loc_8052BC84:
{
    r4 = r31;
    r3 = (r28 + -4);
    ctx->lr = 0x8052BC90u;
    if constexpr (KnownRegArgsCpuCall<0x8052BB20u>(&func_8052BB20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8052BB20_2067 = func_8052BB20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052BB20_2067);
        r4 = static_cast<uint32_t>(regargs_result_8052BB20_2067 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8052BB20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    r28 = MemoryInline::FlatRead32(r28);
}

loc_8052BC94:
{
}

loc_8052BC98:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r25))) {
        goto loc_8052BC84;
    }
}

loc_8052BC9C:
{
    r29 = MemoryInline::FlatRead32(r29);
}

loc_8052BCA0:
{
}

loc_8052BCA4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r26))) {
        goto loc_8052BC1C;
    }
}

loc_8052BCA8:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_8052BCAC:
{
}

loc_8052BCB0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r27))) {
        goto loc_8052BBB0;
    }
}

loc_8052BCB4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

extern "C" void func_8052BB20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052BB20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052BB20 func_8052BB20 preserves=true fpr_mask=0x00000000
