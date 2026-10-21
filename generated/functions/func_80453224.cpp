#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80453224_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80453224u);
    goto loc_80453224;

loc_80453224:
{
    r6 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_8045322C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80453238;
    }
}

loc_80453230:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453238:
{
    r6 = (r6 + 65536);
    r6 = (r6 + -29596);
    r8 = 0;
    r7 = 0;
    r4 = (r4 & 65535);
    r0 = 2;
    ctr = r0;
}

loc_80453254:
{
    r0 = MemoryInline::FlatRead8((r6 + 30));
}

loc_8045325C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453298;
    }
}

loc_80453260:
{
    r0 = MemoryInline::FlatRead16((r6 + 32));
}

loc_80453268:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80453298;
    }
}

loc_8045326C:
{
    r0 = MemoryInline::FlatRead16((r6 + 34));
}

loc_80453274:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80453298;
    }
}

loc_80453278:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r8 = (r8 + 1);
}

loc_8045328C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r8))) {
        goto loc_80453298;
    }
}

loc_80453290:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453298:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r6 + 66));
}

loc_804532A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804532E0;
    }
}

loc_804532A8:
{
    r0 = MemoryInline::FlatRead16((r6 + 68));
}

loc_804532B0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_804532E0;
    }
}

loc_804532B4:
{
    r0 = MemoryInline::FlatRead16((r6 + 70));
}

loc_804532BC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_804532E0;
    }
}

loc_804532C0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r8 = (r8 + 1);
}

loc_804532D4:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r8))) {
        goto loc_804532E0;
    }
}

loc_804532D8:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804532E0:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r6 + 102));
}

loc_804532EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453328;
    }
}

loc_804532F0:
{
    r0 = MemoryInline::FlatRead16((r6 + 104));
}

loc_804532F8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80453328;
    }
}

loc_804532FC:
{
    r0 = MemoryInline::FlatRead16((r6 + 106));
}

loc_80453304:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80453328;
    }
}

loc_80453308:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r8 = (r8 + 1);
}

loc_8045331C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r8))) {
        goto loc_80453328;
    }
}

loc_80453320:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453328:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r6 + 138));
}

loc_80453334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453370;
    }
}

loc_80453338:
{
    r0 = MemoryInline::FlatRead16((r6 + 140));
}

loc_80453340:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80453370;
    }
}

loc_80453344:
{
    r0 = MemoryInline::FlatRead16((r6 + 142));
}

loc_8045334C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80453370;
    }
}

loc_80453350:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r8 = (r8 + 1);
}

loc_80453364:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r8))) {
        goto loc_80453370;
    }
}

loc_80453368:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453370:
{
    r7 = (r7 + 1);
    r6 = (r6 + 144);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80453254;
    }
}

loc_8045337C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80453224(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80453224_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453224 func_80453224 preserves=true fpr_mask=0x00000000
