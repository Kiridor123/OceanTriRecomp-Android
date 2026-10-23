#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80455DEC(CpuContext* ctx);
extern "C" uint64_t func_80455DEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804539A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804539A4;

loc_804539A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_804539B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804539C4;
    }
}

loc_804539BC:
{
    r3 = 0;
    goto loc_80453A10;
}

loc_804539C4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15783));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804539D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804539EC;
    }
}

loc_804539D8:
{
}

loc_804539DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-2))) {
        goto loc_804539F4;
    }
}

loc_804539E0:
{
}

loc_804539E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80453A04;
    }
}

loc_804539E8:
{
    goto loc_80453A0C;
}

loc_804539EC:
{
    r3 = 0;
    goto loc_80453A10;
}

loc_804539F4:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 1;
    // inline leaf 0x803FE4A4 (11 guest instruction(s))
}

loc_inl1_0x803FE4A4:
{
}

loc_inl1_0x803FE4A8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl1_0x803FE4C8;
    }
}

loc_inl1_0x803FE4AC:
{
    r5 = (r3 + 65536);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -10740));
    r3 = (r5 + r0);
    r3 = (r3 + -11255);
    goto loc_inl1_cont_803FE4A4;
}

loc_inl1_0x803FE4C8:
{
    r3 = 0;
}

loc_inl1_cont_803FE4A4:
{
    // end of inlined leaf 0x803FE4A4
    goto loc_80453A10;
}

loc_80453A04:
{
    ctx->lr = 0x80453A08u;
    if constexpr (KnownRegArgsCpuCall<0x80455DECu>(&func_80455DEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80455DEC_BA6 = func_80455DEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80455DEC_BA6);
        r4 = static_cast<uint32_t>(regargs_result_80455DEC_BA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80455DECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80453A10;
}

loc_80453A0C:
{
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl2_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl2_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x80455E4C;
    }
}

loc_inl2_0x80455E48:
{
    r3 = 0;
}

loc_inl2_0x80455E4C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl2_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
}

loc_80453A10:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804539A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804539A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804539A4 func_804539A4 preserves=true fpr_mask=0x00000000
