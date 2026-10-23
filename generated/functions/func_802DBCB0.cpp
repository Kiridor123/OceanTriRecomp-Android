#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DDACC(CpuContext* ctx);
extern "C" uint64_t func_802DDACC_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802DBCB0_ra18_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_802DBCB0;

loc_802DBCB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBCB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBCD8;
    }
}

loc_802DBCBC:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBCC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DBCD8;
    }
}

loc_802DBCC8:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = MemoryInline::FlatRead16((r29 + 8));
}

loc_802DBCD4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802DBCFC;
    }
}

loc_802DBCD8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r3 = 0;
    r4 = (r1 + 56);
    ctx->lr = 0x802DBCECu;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DDACC_6D3 = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_6D3);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_6D3 >> 32);
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
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 60);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBCFC:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 8));
    MemoryInline::FlatWrite16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWrite8((r30 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 39), static_cast<uint8_t>(r3));
}

loc_802DBFE4:
{
    r3 = 1;
}

loc_802DBFF8:
{
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DBCB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DBCB0_ra18_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE000001F gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DBCB0 func_802DBCB0 preserves=true fpr_mask=0x00000000
