#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80120518(CpuContext* ctx);
extern "C" uint64_t func_80120518_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80120554(CpuContext* ctx);
extern "C" uint64_t func_80120554_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80120594_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80120594;

loc_80120594:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    r5 = MemoryInline::FlatRead16((r3 + 2070));
    r0 = MemoryInline::FlatRead32((r3 + 448));
    r0 = (r0 - r5);
    r30 = (r0 & 65535);
    r4 = (r4 & 255);
    ctx->lr = 0x801205CCu;
    if constexpr (KnownRegArgsCpuCall<0x80120518u>(&func_80120518)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80120518_540 = func_80120518_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80120518_540);
        r4 = static_cast<uint32_t>(regargs_result_80120518_540 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80120518u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_801205D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801205EC;
    }
}

loc_801205D8:
{
}

loc_801205DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80120604;
    }
}

loc_801205E0:
{
}

loc_801205E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80120628;
    }
}

loc_801205E8:
{
    goto loc_8012066C;
}

loc_801205EC:
{
}

loc_801205F0:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(32768))) {
        goto loc_801205FC;
    }
}

loc_801205F4:
{
    r30 = 1;
    goto loc_80120670;
}

loc_801205FC:
{
    r30 = 0;
    goto loc_80120670;
}

loc_80120604:
{
    r3 = (r30 + 65536);
    r0 = (r3 + -16384);
    r0 = (r0 & 65535);
}

loc_80120614:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32767))) {
        goto loc_80120620;
    }
}

loc_80120618:
{
    r30 = 2;
    goto loc_80120670;
}

loc_80120620:
{
    r30 = 3;
    goto loc_80120670;
}

loc_80120628:
{
    r3 = (r30 + 65536);
    r0 = (r3 + -8192);
    r0 = (r0 & 65535);
}

loc_80120638:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(49151))) {
        goto loc_80120644;
    }
}

loc_8012063C:
{
    r30 = 2;
    goto loc_80120670;
}

loc_80120644:
{
}

loc_80120648:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(24576))) {
        goto loc_80120654;
    }
}

loc_8012064C:
{
    r30 = 1;
    goto loc_80120670;
}

loc_80120654:
{
}

loc_80120658:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(40960))) {
        goto loc_80120664;
    }
}

loc_8012065C:
{
    r30 = 3;
    goto loc_80120670;
}

loc_80120664:
{
    r30 = 0;
    goto loc_80120670;
}

loc_8012066C:
{
    r30 = 4;
}

loc_80120670:
{
    r3 = r31;
    r4 = (r29 & 255);
    ctx->lr = 0x8012067Cu;
    if constexpr (KnownRegArgsCpuCall<0x80120554u>(&func_80120554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80120554_103C = func_80120554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80120554_103C);
        r4 = static_cast<uint32_t>(regargs_result_80120554_103C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80120554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_80120684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80120694;
    }
}

loc_80120688:
{
}

loc_8012068C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801206A0;
    }
}

loc_80120690:
{
    goto loc_8012070C;
}

loc_80120694:
{
    r0 = MemoryInline::FlatRead16((r31 + 2070));
    MemoryInline::FlatWrite32((r31 + 448), r0);
    goto loc_8012070C;
}

loc_801206A0:
{
}

loc_801206A4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(2))) {
        goto loc_801206C4;
    }
}

loc_801206A8:
{
}

loc_801206AC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(3))) {
        goto loc_801206D0;
    }
}

loc_801206B0:
{
}

loc_801206B4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_801206E8;
    }
}

loc_801206B8:
{
}

loc_801206BC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801206FC;
    }
}

loc_801206C0:
{
    goto loc_8012070C;
}

loc_801206C4:
{
    r0 = MemoryInline::FlatRead16((r31 + 2070));
    MemoryInline::FlatWrite32((r31 + 448), r0);
    goto loc_8012070C;
}

loc_801206D0:
{
    r3 = MemoryInline::FlatRead16((r31 + 2070));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 448), r0);
    goto loc_8012070C;
}

loc_801206E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 2070));
    r0 = (r3 + 16384);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 448), r0);
    goto loc_8012070C;
}

loc_801206FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 2070));
    r0 = (r3 + -16384);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 448), r0);
}

loc_8012070C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80120594(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80120594_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80120594 func_80120594 preserves=true fpr_mask=0x00000000
