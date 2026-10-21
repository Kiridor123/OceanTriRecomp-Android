#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BD8F8(CpuContext* ctx);
extern "C" uint64_t func_802BD8F8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802BD78C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    MKW_GUEST_ENTER(0x802BD78Cu);
    goto loc_802BD78C;

loc_802BD78C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 67));
}

loc_802BD7B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD7D8;
    }
}

loc_802BD7BC:
{
}

loc_802BD7C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802BD86C;
    }
}

loc_802BD7C4:
{
}

loc_802BD7C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802BD89C;
    }
}

loc_802BD7CC:
{
}

loc_802BD7D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802BD8CC;
    }
}

loc_802BD7D4:
{
    goto loc_802BD8D8;
}

loc_802BD7D8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 124), r0);
    r6 = 0;
    r3 = 0x805D0000u;
    r3 = (r3 + 13092);
    goto loc_802BD824;
}

loc_802BD7F0:
{
    r0 = MemoryInline::FlatRead8((r4 + 138));
}

loc_802BD7F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r5))) {
        goto loc_802BD81C;
    }
}

loc_802BD7FC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x806C0000u;
    r3 = (r3 + -6576);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite32((r4 + 124), r0);
    r0 = (r6 & 255);
    MemoryInline::FlatWrite8((r4 + 253), static_cast<uint8_t>(r0));
    goto loc_802BD830;
}

loc_802BD81C:
{
    r3 = (r3 + 4);
    r6 = (r6 + 1);
}

loc_802BD824:
{
    r5 = MemoryInline::FlatRead16(r3);
}

loc_802BD82C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_802BD7F0;
    }
}

loc_802BD830:
{
    r0 = MemoryInline::FlatRead32((r4 + 124));
}

loc_802BD838:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BD844;
    }
}

loc_802BD83C:
{
    r31 = 1;
    goto loc_802BD8D8;
}

loc_802BD844:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x802BD8F8u>(&func_802BD8F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BD8F8_E41 = func_802BD8F8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BD8F8_E41);
        r4 = static_cast<uint32_t>(regargs_result_802BD8F8_E41 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BD8F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r30 + 256), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r30 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 70), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 67));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 67), static_cast<uint8_t>(r0));
}

loc_802BD86C:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x802BD878u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x802BD938u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = MemoryInline::FlatRead16((r30 + 70));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150357112);
}

loc_802BD880:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802BD890;
    }
}

loc_802BD884:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 70), static_cast<uint16_t>(r0));
    goto loc_802BD8D8;
}

loc_802BD890:
{
    r3 = MemoryInline::FlatRead8((r30 + 67));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 67), static_cast<uint8_t>(r0));
}

loc_802BD89C:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x802BD8A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x802BD938u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_802BD8AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802BD8C0;
    }
}

loc_802BD8B0:
{
    r3 = MemoryInline::FlatRead16((r30 + 68));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150357168);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    goto loc_802BD8D8;
}

loc_802BD8C0:
{
    r3 = MemoryInline::FlatRead8((r30 + 67));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 67), static_cast<uint8_t>(r0));
}

loc_802BD8CC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r31 = 1;
}

loc_802BD8D8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BD78C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BD78C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BD78C func_802BD78C preserves=true fpr_mask=0x00000000
