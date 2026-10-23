#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80452FD8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_80452FD8;

loc_80452FD8:
{
    r6 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80452FE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80452FEC;
    }
}

loc_80452FE4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80452FEC:
{
    r7 = (r6 + 65536);
    r7 = (r7 + -31260);
    r9 = 0;
    r8 = 0;
    r6 = 1;
    r0 = (r4 & 255);
    r4 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = 8;
    ctr = r0;
}

loc_80453010:
{
    r0 = MemoryInline::FlatRead8((r7 + 49));
}

loc_80453018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045304C;
    }
}

loc_8045301C:
{
    r0 = MemoryInline::FlatRead8((r7 + 50));
    r0 = (r0 & r4);
}

loc_80453028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045304C;
    }
}

loc_8045302C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r9 = (r9 + 1);
}

loc_80453040:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r9))) {
        goto loc_8045304C;
    }
}

loc_80453044:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045304C:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead8((r7 + 101));
}

loc_80453058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045308C;
    }
}

loc_8045305C:
{
    r0 = MemoryInline::FlatRead8((r7 + 102));
    r0 = (r0 & r4);
}

loc_80453068:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045308C;
    }
}

loc_8045306C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r9 = (r9 + 1);
}

loc_80453080:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r9))) {
        goto loc_8045308C;
    }
}

loc_80453084:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045308C:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead8((r7 + 153));
}

loc_80453098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804530CC;
    }
}

loc_8045309C:
{
    r0 = MemoryInline::FlatRead8((r7 + 154));
    r0 = (r0 & r4);
}

loc_804530A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804530CC;
    }
}

loc_804530AC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r9 = (r9 + 1);
}

loc_804530C0:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r9))) {
        goto loc_804530CC;
    }
}

loc_804530C4:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804530CC:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead8((r7 + 205));
}

loc_804530D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045310C;
    }
}

loc_804530DC:
{
    r0 = MemoryInline::FlatRead8((r7 + 206));
    r0 = (r0 & r4);
}

loc_804530E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045310C;
    }
}

loc_804530EC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r9 = (r9 + 1);
}

loc_80453100:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r9))) {
        goto loc_8045310C;
    }
}

loc_80453104:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045310C:
{
    r8 = (r8 + 1);
    r7 = (r7 + 208);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80453010;
    }
}

loc_80453118:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80452FD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80452FD8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023F9 gpr_write=0x000003D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80452FD8 func_80452FD8 preserves=true fpr_mask=0x00000000
