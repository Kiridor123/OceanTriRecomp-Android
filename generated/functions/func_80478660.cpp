#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80478660_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80478660u);
    goto loc_80478660;

loc_80478660:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = (r4 + -8);
    r0 = (r31 & 1);
}

loc_80478678:
{
    r30 = r4;
    r29 = r3;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80478694;
    }
}

loc_8047868C:
{
    r0 = 0;
    goto loc_804786C0;
}

loc_80478694:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_8047869C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_804786BC;
    }
}

loc_804786A0:
{
    r3 = 0x80710000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_804786C0;
}

loc_804786BC:
{
    r0 = 0;
}

loc_804786C0:
{
    r4 = (r4 + r0);
    r0 = (r4 & 1);
}

loc_804786C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804786D4;
    }
}

loc_804786CC:
{
    r0 = 1;
    goto loc_804786F0;
}

loc_804786D4:
{
    r3 = -574947328;
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -8774);
    r3 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_804786F0:
{
    r0 = (r0 & 255);
}

loc_804786F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80478714;
    }
}

loc_804786F8:
{
    r3 = 65536;
    r4 = 0x80610000u;
    r0 = (r3 + -1);
    r3 = (r0 & 65535);
    r4 = (r4 + 13960);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    goto loc_80478784;
}

loc_80478714:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_8047871C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8047873C;
    }
}

loc_80478720:
{
    r3 = 65536;
    r4 = 0x80610000u;
    r0 = (r3 + -7);
    r3 = (r0 & 65535);
    r4 = (r4 + 14020);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    goto loc_80478784;
}

loc_8047873C:
{
    ctx->lr = 0x80478740u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80479610_CC4 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_CC4);
        r4 = static_cast<uint32_t>(regargs_result_80479610_CC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead32(r29);
}

loc_80478748:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047875C;
    }
}

loc_8047874C:
{
    r0 = (r3 + -8);
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite32(r29, r30);
    goto loc_8047876C;
}

loc_8047875C:
{
    MemoryInline::FlatWrite32(r29, r30);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 4), r30);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8047876C:
{
    r3 = MemoryInline::FlatRead16((r29 + 8));
    r0 = 2;
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804795E0_120B = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_120B);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_120B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80478784:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80478660(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80478660_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80478660 func_80478660 preserves=true fpr_mask=0x00000000
