#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804B1210_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804B1210;

loc_804B1210:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r3 = 0x80750000u;
    r3 = (r3 + -28640);
    r31 = (r3 + r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = r3;
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 4);
}

loc_804B1250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B1260;
    }
}

loc_804B1254:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804B12EC;
}

loc_804B1260:
{
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & -5);
    MemoryHw::FlatWrite32((r31 + 12), r0);
    r3 = (r28 * 20);
    r0 = -855638016;
    r3 = (r0 + r3);
    r30 = MemoryHw::FlatRead32((r3 + 26624));
    r0 = (r30 & 1029);
}

loc_804B1280:
{
    MemoryHw::FlatWrite32((r3 + 26624), r0);
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 8);
}

loc_804B128C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B12B8;
    }
}

loc_804B1290:
{
}

loc_804B1294:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804B12A4;
    }
}

loc_804B1298:
{
}

loc_804B129C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_804B12B0;
    }
}

loc_804B12A0:
{
    goto loc_804B12B8;
}

loc_804B12A4:
{
    r3 = 1048576;
    ctx->lr = 0x804B12ACu;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_DB6 = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_DB6);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_DB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_804B12B8;
}

loc_804B12B0:
{
    r3 = 131072;
    ctx->lr = 0x804B12B8u;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_112A = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_112A);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_112A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804B12B8:
{
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804B12C4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_804B12E8;
    }
}

loc_804B12C8:
{
    r0 = (r30 & 128);
}

loc_804B12CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B12E8;
    }
}

loc_804B12D0:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804B0D80u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_804B12EC;
}

loc_804B12E8:
{
    r3 = 1;
}

loc_804B12EC:
{
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B1210(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B1210_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B1210 func_804B1210 preserves=true fpr_mask=0x00000000
