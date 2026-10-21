#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050739C(CpuContext* ctx);
extern "C" uint64_t func_8050739C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80507198_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80507198u);
    goto loc_80507198;

loc_80507198:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = MemoryInline::FlatRead32((r13 + -13984));
    r5 = r6;
    goto loc_805071C8;
}

loc_805071B4:
{
}

loc_805071B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_805071C0;
    }
}

loc_805071BC:
{
    goto loc_8050725C;
}

loc_805071C0:
{
    r3 = (r3 + 1);
    r5 = (r5 + 4);
}

loc_805071C8:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_805071D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805071B4;
    }
}

loc_805071D4:
{
    r4 = r6;
    r3 = 0;
    goto loc_805071F4;
}

loc_805071E0:
{
}

loc_805071E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(63))) {
        goto loc_805071EC;
    }
}

loc_805071E8:
{
    goto loc_8050725C;
}

loc_805071EC:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
}

loc_805071F4:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_805071FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805071E0;
    }
}

loc_80507200:
{
    r4 = r6;
    r3 = 0;
    goto loc_80507220;
}

loc_8050720C:
{
}

loc_80507210:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(63))) {
        goto loc_80507218;
    }
}

loc_80507214:
{
    goto loc_8050725C;
}

loc_80507218:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
}

loc_80507220:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80507228:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8050720C;
    }
}

loc_8050722C:
{
    r3 = 0;
    goto loc_80507248;
}

loc_80507234:
{
}

loc_80507238:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(63))) {
        goto loc_80507240;
    }
}

loc_8050723C:
{
    goto loc_8050725C;
}

loc_80507240:
{
    r3 = (r3 + 1);
    r6 = (r6 + 4);
}

loc_80507248:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_80507250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80507234;
    }
}

loc_80507254:
{
    r3 = 63;
    if constexpr (KnownRegArgsCpuCall<0x8050739Cu>(&func_8050739C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8050739C_C93 = func_8050739C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8050739C_C93);
        r4 = static_cast<uint32_t>(regargs_result_8050739C_C93 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8050739Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8050725C:
{
    r0 = (r3 & 65535);
    r4 = MemoryInline::FlatRead32((r13 + -13984));
}

loc_80507268:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(288))) {
        goto loc_80507274;
    }
}

loc_8050726C:
{
    r0 = 1;
    goto loc_80507284;
}

loc_80507274:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 131070);
    r0 = (r3 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_80507284:
{
}

loc_80507288:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80507294;
    }
}

loc_8050728C:
{
    r3 = 13;
    goto loc_80507298;
}

loc_80507294:
{
    r3 = 26;
}

loc_80507298:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80507198(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80507198_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80507198 func_80507198 preserves=true fpr_mask=0x00000000
