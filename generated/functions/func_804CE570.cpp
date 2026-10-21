#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CE570_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804CE570u);
    goto loc_804CE570;

loc_804CE570:
{
}

loc_804CE574:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804CE6C0;
    }
}

loc_804CE578:
{
    r6 = 4;
    r0 = 2;
    goto loc_804CE698;
}

loc_804CE588:
{
    r10 = 0;
    ctr = r0;
}

loc_804CE590:
{
    r9 = (r10 & 1);
}

loc_804CE594:
{
    r8 = 240;
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804CE5A0;
    }
}

loc_804CE59C:
{
    r8 = 15;
}

loc_804CE5A0:
{
    r5 = (0 - r9);
    r7 = MemoryInline::FlatRead8(r4);
    r5 = (r5 | r9);
    r5 = (static_cast<int32_t>(r5) >> 31);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = (r6 & ~r5);
    r7 = (r7 & r8);
    r5 = (r5 & 255);
    r5 = PPC_Sraw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r5));
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_804CE5DC;
    }
}

loc_804CE5C8:
{
}

loc_804CE5CC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(10))) {
        goto loc_804CE5DC;
    }
}

loc_804CE5D0:
{
    r5 = (r5 + 48);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    goto loc_804CE600;
}

loc_804CE5DC:
{
}

loc_804CE5E0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(10))) {
        goto loc_804CE5F8;
    }
}

loc_804CE5E4:
{
}

loc_804CE5E8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(16))) {
        goto loc_804CE5F8;
    }
}

loc_804CE5EC:
{
    r5 = (r5 + 87);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    goto loc_804CE600;
}

loc_804CE5F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804CE600:
{
}

loc_804CE604:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804CE60C;
    }
}

loc_804CE608:
{
    r4 = (r4 + 1);
}

loc_804CE60C:
{
    r10 = (r10 + 1);
    r8 = 240;
    r9 = (r10 & 1);
}

loc_804CE618:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804CE620;
    }
}

loc_804CE61C:
{
    r8 = 15;
}

loc_804CE620:
{
    r5 = (0 - r9);
    r7 = MemoryInline::FlatRead8(r4);
    r5 = (r5 | r9);
    r5 = (static_cast<int32_t>(r5) >> 31);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = (r6 & ~r5);
    r7 = (r7 & r8);
    r5 = (r5 & 255);
    r5 = PPC_Sraw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r5));
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_804CE65C;
    }
}

loc_804CE648:
{
}

loc_804CE64C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(10))) {
        goto loc_804CE65C;
    }
}

loc_804CE650:
{
    r5 = (r5 + 48);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    goto loc_804CE680;
}

loc_804CE65C:
{
}

loc_804CE660:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(10))) {
        goto loc_804CE678;
    }
}

loc_804CE664:
{
}

loc_804CE668:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(16))) {
        goto loc_804CE678;
    }
}

loc_804CE66C:
{
    r5 = (r5 + 87);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    goto loc_804CE680;
}

loc_804CE678:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804CE680:
{
}

loc_804CE684:
{
    r3 = (r3 + 2);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804CE690;
    }
}

loc_804CE68C:
{
    r4 = (r4 + 1);
}

loc_804CE690:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CE590;
    }
}

loc_804CE698:
{
    r5 = MemoryInline::FlatRead8(r4);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804CE588;
    }
}

loc_804CE6A4:
{
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804CE588;
    }
}

loc_804CE6B0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804CE6C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CE570(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CE570_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CE570 func_804CE570 preserves=true fpr_mask=0x00000000
