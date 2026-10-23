#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B6F0(CpuContext* ctx);
extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8047EAD4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8047EAD4;

loc_8047EAD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -18476);
    r30 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 182));
}

loc_8047EAFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047EB18;
    }
}

loc_8047EB00:
{
    r0 = (r4 + 152);
}

loc_8047EB08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8047EB18;
    }
}

loc_8047EB0C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r4 + 182), static_cast<uint8_t>(r0));
    goto loc_8047EB6C;
}

loc_8047EB18:
{
    r0 = MemoryInline::FlatRead8((r4 + 214));
    r30 = 1;
}

loc_8047EB24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047EB40;
    }
}

loc_8047EB28:
{
    r0 = (r4 + 184);
}

loc_8047EB30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8047EB40;
    }
}

loc_8047EB34:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r4 + 214), static_cast<uint8_t>(r0));
    goto loc_8047EB6C;
}

loc_8047EB40:
{
    r0 = MemoryInline::FlatRead8((r4 + 246));
    r30 = 2;
}

loc_8047EB4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047EB68;
    }
}

loc_8047EB50:
{
    r0 = (r4 + 216);
}

loc_8047EB58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8047EB68;
    }
}

loc_8047EB5C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r4 + 246), static_cast<uint8_t>(r0));
    goto loc_8047EB6C;
}

loc_8047EB68:
{
    r30 = 3;
}

loc_8047EB6C:
{
}

loc_8047EB70:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(3))) {
        goto loc_8047EBB4;
    }
}

loc_8047EB74:
{
    r3 = 14;
    ctx->lr = 0x8047EB7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80477E60_C59 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_C59);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_C59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047EB80:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047EBB4;
    }
}

loc_8047EB88:
{
    r4 = 0x80740000u;
    r5 = 266;
    r4 = (r4 + -18476);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
    r0 = (r0_rot_1 & 8160);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r5));
    r4 = (r4 + r0);
    r4 = (r4 + 176);
    r3 = (r3 + 8);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r3 = r31;
    ctx->lr = 0x8047EBB4u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8047B6F0_153D = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_153D);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_153D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8047B6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047EBB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047EAD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047EAD4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8047EAD4 func_8047EAD4 preserves=true fpr_mask=0x00000000
