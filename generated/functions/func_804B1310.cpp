#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD630(CpuContext* ctx);
extern "C" void func_804CD630_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804B1310_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B1310u);
    goto loc_804B1310;

loc_804B1310:
{
    MemoryHw::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 740), r0);
    r29 = r4;
    r0 = (r3 + -9);
    r3 = 1431633920;
    r3 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r31 = (r3 + r0);
    r3 = (r31 * 20);
    r0 = -855638016;
    r3 = (r0 + r3);
    r0 = MemoryHw::FlatRead32((r3 + 26624));
    r0 = (r0 & 2037);
}

loc_804B1358:
{
    r0 = (r0 | 2);
    MemoryHw::FlatWrite32((r3 + 26624), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r3 = 0x80750000u;
    r3 = (r3 + -28640);
    r3_addr_0 = (r3 + r0);
    r30 = MemoryHw::FlatRead32(r3_addr_0);
}

loc_804B1374:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804B13AC;
    }
}

loc_804B1378:
{
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl0_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl0_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl0_cont_804CD870;
}

loc_inl0_return:
{
}

loc_inl0_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804CD630u>(&func_804CD630)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        func_804CD630_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CD630u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    r4 = r29;
    r12 = r30;
    ctr = r12;
    ctx->lr = 0x804B139Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl1_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl1_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl1_cont_804CD870;
}

loc_inl1_return:
{
}

loc_inl1_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804CD630u>(&func_804CD630)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        func_804CD630_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CD630u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804B13AC:
{
    r0 = MemoryHw::FlatRead32((r1 + 740));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B1310(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B1310_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B1310 func_804B1310 preserves=true fpr_mask=0x00000000
