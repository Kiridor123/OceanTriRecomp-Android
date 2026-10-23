#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802D3B98_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_802D3B98;

loc_802D3B98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r7 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 968));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802D3BBC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D3BEC;
    }
}

loc_802D3BC0:
{
    r6 = MemoryInline::FlatRead16((r3 + 966));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 966), static_cast<uint16_t>(r0));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 & 65535);
}

loc_802D3BD8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_802D3BF4;
    }
}

loc_802D3BDC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWrite16((r3 + 966), static_cast<uint16_t>(r0));
    r7 = 1;
    goto loc_802D3BF4;
}

loc_802D3BEC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 966), static_cast<uint16_t>(r0));
}

loc_802D3BF4:
{
    r0 = MemoryInline::FlatRead8((r3 + 974));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802D3C00:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D3C30;
    }
}

loc_802D3C04:
{
    r6 = MemoryInline::FlatRead16((r3 + 972));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 972), static_cast<uint16_t>(r0));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 & 65535);
}

loc_802D3C1C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_802D3C38;
    }
}

loc_802D3C20:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWrite16((r3 + 972), static_cast<uint16_t>(r0));
    r7 = 1;
    goto loc_802D3C38;
}

loc_802D3C30:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 972), static_cast<uint16_t>(r0));
}

loc_802D3C38:
{
    r0 = MemoryInline::FlatRead8((r3 + 1150));
}

loc_802D3C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D3C78;
    }
}

loc_802D3C44:
{
    r6 = MemoryInline::FlatRead16((r3 + 1152));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 1152), static_cast<uint16_t>(r0));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 & 65535);
}

loc_802D3C5C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_802D3C80;
    }
}

loc_802D3C60:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWrite16((r3 + 1152), static_cast<uint16_t>(r0));
    r7 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 905), static_cast<uint8_t>(r0));
    goto loc_802D3C80;
}

loc_802D3C78:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1152), static_cast<uint16_t>(r0));
}

loc_802D3C80:
{
}

loc_802D3C84:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(1))) {
        goto loc_802D3D04;
    }
}

loc_802D3C88:
{
    r0 = (r5 & 255);
}

loc_802D3C90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D3CB0;
    }
}

loc_802D3C94:
{
    r3 = (r3 + 432);
    r4 = (r31 + 376);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r31;
    // inline leaf 0x802D3D1C (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 966), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 972), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1152), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D3D1C
    r3 = 0;
    goto loc_802D3D08;
}

loc_802D3CB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 856));
}

loc_802D3CB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D3CC8;
    }
}

loc_802D3CBC:
{
    r0 = MemoryInline::FlatRead8((r3 + 860));
}

loc_802D3CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D3CFC;
    }
}

loc_802D3CC8:
{
    r3 = (r3 + 376);
    r4 = (r31 + 432);
    ctx->lr = 0x802D3CD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13248));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D3CDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D3CFC;
    }
}

loc_802D3CE0:
{
    r3 = (r31 + 432);
    r4 = (r31 + 376);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r31;
    // inline leaf 0x802D3D1C (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 966), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 972), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1152), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D3D1C
    r3 = 0;
    goto loc_802D3D08;
}

loc_802D3CFC:
{
    r3 = 1;
    goto loc_802D3D08;
}

loc_802D3D04:
{
    r3 = 0;
}

loc_802D3D08:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D3B98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D3B98_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D3B98 func_802D3B98 preserves=true fpr_mask=0x00000000
