#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E0778(CpuContext* ctx);
extern "C" uint64_t func_802E0778_ra28_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802E0BB8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802E0BB8u);
    goto loc_802E0BB8;

loc_802E0BB8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r3 & 65535);
    ctx->lr = 0x802E0BCCu;
    if constexpr (KnownRegArgsCpuCall<0x802E0778u>(&func_802E0778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E0778_602 = func_802E0778_ra28_2_18_0(ctx, r3, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0778_602);
        r4 = static_cast<uint32_t>(regargs_result_802E0778_602 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E0778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_802E0BD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E0BDC;
    }
}

loc_802E0BD4:
{
    r3 = 1;
    goto loc_802E0CD4;
}

loc_802E0BDC:
{
    r5 = 1;
    r0 = 5;
    ctr = r0;
}

loc_802E0BE8:
{
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802E0BF0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802E0CD0;
    }
}

loc_802E0BF4:
{
    r0 = (r4 + -1);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 4095);
}

loc_802E0C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E0C30;
    }
}

loc_802E0C0C:
{
}

loc_802E0C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802E0C50;
    }
}

loc_802E0C14:
{
}

loc_802E0C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802E0C70;
    }
}

loc_802E0C1C:
{
}

loc_802E0C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802E0C90;
    }
}

loc_802E0C24:
{
}

loc_802E0C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802E0CB0;
    }
}

loc_802E0C2C:
{
    goto loc_802E0CCC;
}

loc_802E0C30:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r4_addr_6 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_6);
    r0 = (r5 & 65535);
}

loc_802E0C44:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_802E0CCC;
    }
}

loc_802E0C48:
{
    r5 = r4;
    goto loc_802E0CCC;
}

loc_802E0C50:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r4_addr_5 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_5);
    r0 = (r5 & 65535);
}

loc_802E0C64:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_802E0CCC;
    }
}

loc_802E0C68:
{
    r5 = r4;
    goto loc_802E0CCC;
}

loc_802E0C70:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 * 6);
    r4_addr_4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_4);
    r0 = (r5 & 65535);
}

loc_802E0C84:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_802E0CCC;
    }
}

loc_802E0C88:
{
    r5 = r4;
    goto loc_802E0CCC;
}

loc_802E0C90:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 * 12);
    r4_addr_3 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_3);
    r0 = (r5 & 65535);
}

loc_802E0CA4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_802E0CCC;
    }
}

loc_802E0CA8:
{
    r5 = r4;
    goto loc_802E0CCC;
}

loc_802E0CB0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_2);
    r0 = (r5 & 65535);
}

loc_802E0CC4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_802E0CCC;
    }
}

loc_802E0CC8:
{
    r5 = r4;
}

loc_802E0CCC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802E0BE8;
    }
}

loc_802E0CD0:
{
    r3 = r5;
}

loc_802E0CD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E0BB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E0BB8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E0BB8 func_802E0BB8 preserves=true fpr_mask=0x00000000
