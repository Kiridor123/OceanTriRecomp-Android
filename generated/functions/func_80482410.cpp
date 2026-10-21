#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80482410_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80482410u);
    goto loc_80482410;

loc_80482410:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r4 = 0x80740000u;
    r27 = r3;
    r4 = (r4 + -17608);
    r30 = 0;
    r29 = (r4 + 52);
}

loc_80482438:
{
    r0 = MemoryInline::FlatRead8((r29 + 281));
}

loc_80482440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482460;
    }
}

loc_80482444:
{
    r4 = r27;
    r3 = (r29 + 8);
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_606 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_606);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_606 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80482458:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80482460;
    }
}

loc_8048245C:
{
    goto loc_80482474;
}

loc_80482460:
{
    r30 = (r30 + 1);
    r29 = (r29 + 284);
}

loc_8048246C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(4))) {
        goto loc_80482438;
    }
}

loc_80482470:
{
    r29 = 0;
}

loc_80482474:
{
}

loc_80482478:
{
    r28 = 0;
    r31 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8048248C;
    }
}

loc_80482484:
{
    r28 = MemoryInline::FlatRead16((r29 + 2));
    goto loc_804824B0;
}

loc_8048248C:
{
    r30 = 0x80740000u;
    r4 = r27;
    r30 = (r30 + -17608);
    r5 = 6;
    r3 = (r30 + 1584);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_B73 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_B73);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_B73 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804824A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804824B0;
    }
}

loc_804824AC:
{
    r28 = MemoryInline::FlatRead16((r30 + 1620));
}

loc_804824B0:
{
}

loc_804824B4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80482574;
    }
}

loc_804824B8:
{
    r0 = (r28 & 8192);
}

loc_804824BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804824C8;
    }
}

loc_804824C0:
{
    r31 = 1021;
    goto loc_80482574;
}

loc_804824C8:
{
    r0 = (r28 & 4096);
}

loc_804824CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804824D8;
    }
}

loc_804824D0:
{
    r31 = 679;
    goto loc_80482574;
}

loc_804824D8:
{
    r0 = (r28 & 512);
}

loc_804824DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804824E8;
    }
}

loc_804824E0:
{
    r31 = 552;
    goto loc_80482574;
}

loc_804824E8:
{
    r0 = (r28 & 32768);
}

loc_804824EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804824F8;
    }
}

loc_804824F0:
{
    r31 = 339;
    goto loc_80482574;
}

loc_804824F8:
{
    r0 = (r28 & 256);
}

loc_804824FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80482508;
    }
}

loc_80482500:
{
    r31 = 367;
    goto loc_80482574;
}

loc_80482508:
{
    r0 = (r28 & 16384);
}

loc_8048250C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482518;
    }
}

loc_80482510:
{
    r31 = 224;
    goto loc_80482574;
}

loc_80482518:
{
    r0 = (r28 & 2048);
}

loc_8048251C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482528;
    }
}

loc_80482520:
{
    r31 = 183;
    goto loc_80482574;
}

loc_80482528:
{
    r0 = (r28 & 1024);
}

loc_8048252C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482538;
    }
}

loc_80482530:
{
    r31 = 121;
    goto loc_80482574;
}

loc_80482538:
{
    r0 = (r28 & 4);
}

loc_8048253C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80482548;
    }
}

loc_80482540:
{
    r31 = 83;
    goto loc_80482574;
}

loc_80482548:
{
    r0 = (r28 & 2);
}

loc_8048254C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80482558;
    }
}

loc_80482550:
{
    r31 = 54;
    goto loc_80482574;
}

loc_80482558:
{
    r0 = (r28 & 16);
}

loc_8048255C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482568;
    }
}

loc_80482560:
{
    r31 = 27;
    goto loc_80482574;
}

loc_80482568:
{
    r0 = (r28 & 8);
}

loc_8048256C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482574;
    }
}

loc_80482570:
{
    r31 = 17;
}

loc_80482574:
{
}

loc_80482578:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1021))) {
        goto loc_80482594;
    }
}

loc_8048257C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -18928);
    r0 = MemoryInline::FlatRead16((r3 + 124));
}

loc_8048258C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1017))) {
        goto loc_80482594;
    }
}

loc_80482590:
{
    r31 = 1017;
}

loc_80482594:
{
    r11 = (r1 + 32);
    r3 = r31;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80482410(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80482410_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80482410 func_80482410 preserves=true fpr_mask=0x00000000
