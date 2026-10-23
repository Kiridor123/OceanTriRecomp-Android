#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80477E60;

loc_80477E60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80710000u;
}

loc_80477E70:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -3456);
    r30 = (r4 + 84);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80477EA8;
    }
}

loc_80477E88:
{
    r3 = 65536;
    r4 = 0x80610000u;
    r0 = (r3 + -10);
    r3 = (r0 & 65535);
    r4 = (r4 + 13784);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    r3 = 0;
    goto loc_80477FE8;
}

loc_80477EA8:
{
    r4 = (r30 + 196608);
    r31 = 0;
    r5 = MemoryInline::FlatRead8((r4 + -30073));
    goto loc_80477EE4;
}

loc_80477EB8:
{
    r4 = (r31 & 255);
    r4 = (r4 + 196608);
    r0 = (r4 + -30082);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & -16);
    r4 = (r4 + 196608);
    r0 = (r4 + -30316);
    r30_addr_3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(r30_addr_3);
}

loc_80477EDC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80477EF0;
    }
}

loc_80477EE0:
{
    r31 = (r31 + 1);
}

loc_80477EE4:
{
    r0 = (r31 & 255);
}

loc_80477EEC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_80477EB8;
    }
}

loc_80477EF0:
{
    r0 = (r31 & 255);
}

loc_80477EF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_80477F1C;
    }
}

loc_80477EFC:
{
    r3 = 65536;
    r4 = 0x80610000u;
    r0 = (r3 + -9);
    r3 = (r0 & 65535);
    r4 = (r4 + 13808);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    r3 = 0;
    goto loc_80477FE8;
}

loc_80477F1C:
{
    ctx->lr = 0x80477F20u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_D9B = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_D9B);
        r4 = static_cast<uint32_t>(regargs_result_80479610_D9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r6 = (r30 + 196608);
    r5 = 1;
    r7 = MemoryInline::FlatRead8((r6 + -30073));
    goto loc_80477FD4;
}

loc_80477F30:
{
    r4 = (r31 & 255);
    r3 = MemoryInline::FlatRead16((r6 + -30084));
    r4 = (r4 + 196608);
    r0 = (r4 + -30082);
    r30_addr_6 = (r30 + r0);
    r4 = MemoryInline::FlatRead8(r30_addr_6);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80477FD0;
    }
}

loc_80477F50:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 4080);
    r4 = (r6 + r0);
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = MemoryInline::FlatRead16((r4 + -30314));
}

loc_80477F64:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80477FD0;
    }
}

loc_80477F68:
{
    r30 = MemoryInline::FlatRead32((r4 + -30324));
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r4 + -30324), r0);
}

loc_80477F78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80477F84;
    }
}

loc_80477F7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + -30320), r0);
}

loc_80477F84:
{
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -30312), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + -30310));
}

loc_80477F9C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80477FA8;
    }
}

loc_80477FA0:
{
    r0 = MemoryInline::FlatRead16((r4 + -30312));
    MemoryInline::FlatWrite16((r4 + -30310), static_cast<uint16_t>(r0));
}

loc_80477FA8:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_17DD = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_17DD);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_17DD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    // inline leaf 0x804795D0 (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x804795D0
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r3));
    r4 = 1;
    r0 = 0;
    r3 = (r30 + 8);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_80477FE8;
}

loc_80477FD0:
{
    r31 = (r31 + 1);
}

loc_80477FD4:
{
    r0 = (r31 & 255);
}

loc_80477FDC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_80477F30;
    }
}

loc_80477FE0:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_1D55 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_1D55);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_1D55 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
}

loc_80477FE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80477E60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80477E60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80477E60 func_80477E60 preserves=true fpr_mask=0x00000000
