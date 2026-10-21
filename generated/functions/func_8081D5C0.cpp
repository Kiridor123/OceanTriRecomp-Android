#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046E070(CpuContext* ctx);
extern "C" uint64_t func_8046E070_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8081D5C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8081D5C0u);
    goto loc_8081D5C0;

loc_8081D5C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r5 = 0x80840000u;
}

loc_8081D5DC:
{
    r5 = (r5 + 20792);
    MemoryInline::FlatWrite32((r3 + 496), r5);
    r5 = 0x80870000u;
    r26 = r3;
    MemoryInline::FlatWriteRam32((r5 + -32336), r3);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8081D614;
    }
}

loc_8081D5F4:
{
    r3 = r4;
    r4 = (r26 + 464);
    ctx->lr = 0x8081D600u;
    if constexpr (KnownRegArgsCpuCall<0x8046E070u>(&func_8046E070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046E070_70D = func_8046E070_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E070_70D);
        r4 = static_cast<uint32_t>(regargs_result_8046E070_70D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8046E070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r26 + 492), static_cast<uint8_t>(r0));
    goto loc_8081D61C;
}

loc_8081D614:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 492), static_cast<uint8_t>(r0));
}

loc_8081D61C:
{
    r3 = (r26 + 416);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r28 = r26;
    r27 = 0;
    r29 = 0;
    r30 = -1;
    r31 = 1;
}

loc_8081D638:
{
    r3 = r28;
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    MemoryInline::FlatWrite32((r28 + 80), r29);
    r27 = (r27 + 1);
}

loc_8081D64C:
{
    MemoryInline::FlatWrite32((r28 + 88), r30);
    MemoryInline::FlatWrite8((r28 + 92), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 98), static_cast<uint8_t>(r31));
    r28 = (r28 + 104);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_8081D638;
    }
}

loc_8081D660:
{
    r11 = (r1 + 32);
    r3 = r26;
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081D5C0 func_8081D5C0 preserves=true fpr_mask=0x00000000
