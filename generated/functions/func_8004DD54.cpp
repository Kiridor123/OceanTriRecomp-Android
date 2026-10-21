#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004DA94(CpuContext* ctx);
extern "C" void func_8004DA94_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004DD54_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8004DD54u);
    goto loc_8004DD54;

loc_8004DD54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r4;
    r27 = r5;
    r29 = 0;
    r31 = (r3 + 14024);
}

loc_8004DD78:
{
    r3 = r31;
    r4 = (r26 & 65535);
    r5 = (r27 & 65535);
    // inline leaf 0x8004DA94 (11 guest instruction(s))
}

loc_inl1_0x8004DA94:
{
    r6 = MemoryInline::FlatRead16(r3);
    r0 = (r4 & 65535);
}

loc_inl1_0x8004DAA0:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8004DAAC;
    }
}

loc_inl1_0x8004DAA4:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r5));
    goto loc_inl1_cont_8004DA94;
}

loc_inl1_0x8004DAAC:
{
    r0 = (r5 & 65535);
}

loc_inl1_0x8004DAB4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8004DAB8:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    goto loc_inl1_cont_8004DA94;
}

loc_inl1_return:
{
}

loc_inl1_cont_8004DA94:
{
    // end of inlined leaf 0x8004DA94
    r28 = 0;
    r30 = (r31 + 2);
}

loc_8004DD90:
{
    r3 = r30;
    r4 = (r26 & 65535);
    r5 = (r27 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004DA94u>(&func_8004DA94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_8004DA94_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004DA94u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
    r30 = (r30 + 2);
    r28 = (r28 + 1);
}

loc_8004DDAC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_8004DD90;
    }
}

loc_8004DDB0:
{
    r31 = (r31 + 30);
    r29 = (r29 + 1);
}

loc_8004DDBC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(20))) {
        goto loc_8004DD78;
    }
}

loc_8004DDC0:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004DD54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004DD54_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004DD54 func_8004DD54 preserves=true fpr_mask=0x00000000
