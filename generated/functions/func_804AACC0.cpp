#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804AB870(CpuContext* ctx);
extern "C" uint64_t func_804AB870_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_804AACC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804AACC0;

loc_804AACC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r30 = r3;
}

loc_804AACEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_804AACF8;
    }
}

loc_804AACF0:
{
    r31 = 1;
    goto loc_804AAD60;
}

loc_804AACF8:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_804AAD00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_804AAD0C;
    }
}

loc_804AAD04:
{
    r31 = 4;
    goto loc_804AAD60;
}

loc_804AAD0C:
{
    r31 = 0x80750000u;
    r0 = MemoryInline::FlatRead32((r13 + -15600));
    r31 = (r31 + -29872);
}

loc_804AAD1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_804AAD5C;
    }
}

loc_804AAD20:
{
    ctx->lr = 0x804AAD24u;
    if constexpr (KnownRegArgsCpuCall<0x804AB870u>(&func_804AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804AB870_85A = func_804AB870_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804AB870_85A);
        r4 = static_cast<uint32_t>(regargs_result_804AB870_85A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804AAD28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804AAD44;
    }
}

loc_804AAD2C:
{
}

loc_804AAD30:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r3))) {
        goto loc_804AAD3C;
    }
}

loc_804AAD34:
{
    r31 = 1;
    goto loc_804AAD60;
}

loc_804AAD3C:
{
    r31 = MemoryInline::FlatRead32((r29 + 12));
    goto loc_804AAD60;
}

loc_804AAD44:
{
}

loc_804AAD48:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r31))) {
        goto loc_804AAD54;
    }
}

loc_804AAD4C:
{
    r31 = 0;
    goto loc_804AAD60;
}

loc_804AAD54:
{
    r31 = MemoryInline::FlatRead32((r29 + 12));
    goto loc_804AAD60;
}

loc_804AAD5C:
{
    r31 = MemoryInline::FlatRead32((r29 + 12));
}

loc_804AAD60:
{
    r3 = r30;
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
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804AACC0 func_804AACC0 preserves=true fpr_mask=0x00000000
