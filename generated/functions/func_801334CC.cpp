#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801334CC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801334CCu);
    goto loc_801334CC;

loc_801334CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_644 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_644);
        r4 = static_cast<uint32_t>(regargs_result_80126098_644 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = 0;
    r0 = (r27 & 255);
}

loc_801334F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80133508;
    }
}

loc_801334FC:
{
}

loc_80133500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80133554;
    }
}

loc_80133504:
{
    goto loc_80133648;
}

loc_80133508:
{
    r3 = MemoryInline::FlatRead32((r3 + 160));
    r3 = MemoryInline::FlatRead32((r3 + 76));
}

loc_80133514:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80133528;
    }
}

loc_80133518:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80133520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80133528;
    }
}

loc_80133524:
{
    r31 = r0;
}

loc_80133528:
{
    r28 = 300;
    r29 = 240;
    r30 = MemoryInline::FlatRead8((r26 + 2330));
    r0 = (r30 + 1);
    MemoryInline::FlatWrite8((r26 + 2330), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_80133544:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(20))) {
        goto loc_801335A4;
    }
}

loc_80133548:
{
    r0 = 20;
    MemoryInline::FlatWrite8((r26 + 2330), static_cast<uint8_t>(r0));
    goto loc_801335A4;
}

loc_80133554:
{
    r3 = MemoryInline::FlatRead32((r3 + 160));
    r3 = MemoryInline::FlatRead32((r3 + 76));
}

loc_80133560:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80133574;
    }
}

loc_80133564:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8013356C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80133574;
    }
}

loc_80133570:
{
    r31 = r0;
}

loc_80133574:
{
    r28 = 150;
    r29 = 150;
    r30 = MemoryInline::FlatRead8((r26 + 2331));
    r0 = (r30 + 1);
    MemoryInline::FlatWrite8((r26 + 2331), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_80133590:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(20))) {
        goto loc_801335A4;
    }
}

loc_80133594:
{
    r0 = 20;
    MemoryInline::FlatWrite8((r26 + 2331), static_cast<uint8_t>(r0));
}

loc_801335A4:
{
}

loc_801335A8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801335DC;
    }
}

loc_801335AC:
{
    r0 = (r27 & 255);
}

loc_801335B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801335C4;
    }
}

loc_801335B8:
{
}

loc_801335BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801335D0;
    }
}

loc_801335C0:
{
    goto loc_8013361C;
}

loc_801335C4:
{
    r0 = 900;
    MemoryInline::FlatWrite16((r26 + 2386), static_cast<uint16_t>(r0));
    goto loc_8013361C;
}

loc_801335D0:
{
    r0 = 300;
    MemoryInline::FlatWrite16((r26 + 2386), static_cast<uint16_t>(r0));
    goto loc_8013361C;
}

loc_801335DC:
{
    r3 = r26;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_801335E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801335F8;
    }
}

loc_801335EC:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r26 + 2386), static_cast<uint16_t>(r0));
    goto loc_8013361C;
}

loc_801335F8:
{
    r3 = r26;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80133604:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80133614;
    }
}

loc_80133608:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r26 + 2386), static_cast<uint16_t>(r0));
    goto loc_8013361C;
}

loc_80133614:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r26 + 2386), static_cast<uint16_t>(r0));
}

loc_8013361C:
{
    r0 = (r30 & 255);
    r4 = (r28 * r0);
    r3 = MemoryInline::FlatRead16((r26 + 2386));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 - r4);
}

loc_80133630:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r29))) {
        goto loc_8013363C;
    }
}

loc_80133634:
{
    MemoryInline::FlatWrite16((r26 + 2386), static_cast<uint16_t>(r29));
    goto loc_80133648;
}

loc_8013363C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r3 - r0);
    MemoryInline::FlatWrite16((r26 + 2386), static_cast<uint16_t>(r0));
}

loc_80133648:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801334CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801334CC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801334CC func_801334CC preserves=true fpr_mask=0x00000000
