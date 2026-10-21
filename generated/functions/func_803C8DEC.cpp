#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804526CC(CpuContext* ctx);
extern "C" uint64_t func_804526CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C8DEC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803C8DECu);
    goto loc_803C8DEC;

loc_803C8DEC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    r3 = (r3 + 1548);
    r4 = 0;
    r5 = 352;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1542), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 1180));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 44);
    r3 = (r31 + r0);
    r7 = MemoryInline::FlatRead16((r3 + 1196));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r6 = 0;
    r0 = 2;
    ctr = r0;
}

loc_803C8E44:
{
    r0 = (r4 + r6);
}

loc_803C8E4C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_803C8E70;
    }
}

loc_803C8E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r31 + 1542));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 44);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 1556), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead16((r31 + 1542));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 1542), static_cast<uint16_t>(r0));
}

loc_803C8E70:
{
    r6 = (r6 + 1);
    r0 = (r4 + r6);
}

loc_803C8E7C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_803C8EA0;
    }
}

loc_803C8E80:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r31 + 1542));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 44);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 1556), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead16((r31 + 1542));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 1542), static_cast<uint16_t>(r0));
}

loc_803C8EA0:
{
    r6 = (r6 + 1);
    r0 = (r4 + r6);
}

loc_803C8EAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_803C8ED0;
    }
}

loc_803C8EB0:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r31 + 1542));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 44);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 1556), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead16((r31 + 1542));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 1542), static_cast<uint16_t>(r0));
}

loc_803C8ED0:
{
    r6 = (r6 + 1);
    r0 = (r4 + r6);
}

loc_803C8EDC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_803C8F00;
    }
}

loc_803C8EE0:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r31 + 1542));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 44);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 1556), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead16((r31 + 1542));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 1542), static_cast<uint16_t>(r0));
}

loc_803C8F00:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803C8E44;
    }
}

loc_803C8F08:
{
    r3 = (r31 + 1548);
    r5 = 8;
    ctx->lr = 0x803C8F14u;
    if constexpr (KnownRegArgsCpuCall<0x804526CCu>(&func_804526CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_804526CC_12E9 = func_804526CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804526CC_12E9);
        r4 = static_cast<uint32_t>(regargs_result_804526CC_12E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804526CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 1542), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r31 + 1540));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803C8F24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803C8F34;
    }
}

loc_803C8F28:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 1540), static_cast<uint16_t>(r0));
}

loc_803C8F34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C8DEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C8DEC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C8DEC func_803C8DEC preserves=true fpr_mask=0x00000000
