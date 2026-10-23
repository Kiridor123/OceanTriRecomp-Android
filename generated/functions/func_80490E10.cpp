#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80490E10_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t ctr = ctx->ctr;

    goto loc_80490E10;

loc_80490E10:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = 0x80740000u;
    r26 = r3;
    r31 = (r31 + -6152);
    r27 = r4;
    r0 = MemoryInline::FlatRead8((r31 + 1024));
    r28 = r5;
}

loc_80490E40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80490E4C;
    }
}

loc_80490E44:
{
    r3 = 1;
    goto loc_80490F88;
}

loc_80490E4C:
{
    r29 = 0;
}

loc_80490E50:
{
    r3 = r26;
    r4 = (r31 + 1);
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_897 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_897);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_897 >> 32);
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

loc_80490E64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490E78;
    }
}

loc_80490E68:
{
    r29 = (r29 + 1);
    r31 = (r31 + 52);
}

loc_80490E74:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(16))) {
        goto loc_80490E50;
    }
}

loc_80490E78:
{
}

loc_80490E7C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(16))) {
        goto loc_80490F1C;
    }
}

loc_80490E80:
{
    r3 = 0x80740000u;
    r0 = 2;
    r3 = (r3 + -6152);
    r29 = 0;
    ctr = r0;
}

loc_80490E94:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80490E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490EA0:
{
    r0 = MemoryInline::FlatRead8((r3 + 52));
    r29 = (r29 + 1);
}

loc_80490EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490EB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 104));
    r29 = (r29 + 1);
}

loc_80490EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490EC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 156));
    r29 = (r29 + 1);
}

loc_80490ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490ED0:
{
    r0 = MemoryInline::FlatRead8((r3 + 208));
    r29 = (r29 + 1);
}

loc_80490EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490EE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 260));
    r29 = (r29 + 1);
}

loc_80490EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490EF0:
{
    r0 = MemoryInline::FlatRead8((r3 + 312));
    r29 = (r29 + 1);
}

loc_80490EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490F00:
{
    r0 = MemoryInline::FlatRead8((r3 + 364));
    r29 = (r29 + 1);
}

loc_80490F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490F1C;
    }
}

loc_80490F10:
{
    r3 = (r3 + 416);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80490E94;
    }
}

loc_80490F1C:
{
}

loc_80490F20:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(16))) {
        goto loc_80490F2C;
    }
}

loc_80490F24:
{
    r3 = 3;
    goto loc_80490F88;
}

loc_80490F2C:
{
    r30 = (r29 * 52);
    r31 = 0x80740000u;
    r31 = (r31 + -6152);
    r31_addr_1 = (r31 + r30);
    r0 = MemoryInline::FlatRead8(r31_addr_1);
}

loc_80490F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80490F70;
    }
}

loc_80490F44:
{
    r0 = 1;
    r3 = (r31 + r30);
    r31_addr_2 = (r31 + r30);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r0));
    r4 = r26;
    r3 = (r3 + 1);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + r30);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_80490F70:
{
    r4 = 0x80740000u;
    r3 = 0;
    r4 = (r4 + -6152);
    r4 = (r4 + r30);
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r29));
}

loc_80490F88:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80490E10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80490E10_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80490E10 func_80490E10 preserves=true fpr_mask=0x00000000
