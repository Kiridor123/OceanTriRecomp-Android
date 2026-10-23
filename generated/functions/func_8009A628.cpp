#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052974(CpuContext* ctx);
extern "C" uint64_t func_80052974_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800534CC(CpuContext* ctx);
extern "C" uint64_t func_800534CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800534F0(CpuContext* ctx);
extern "C" uint64_t func_800534F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009A5F0(CpuContext* ctx);
extern "C" uint64_t func_8009A5F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8009A628_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8009A628;

loc_8009A628:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r30 = r10;
    ctx->lr = 0x8009A660u;
    if constexpr (KnownRegArgsCpuCall<0x80052974u>(&func_80052974)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80052974_94D = func_80052974_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052974_94D);
        r4 = static_cast<uint32_t>(regargs_result_80052974_94D >> 32);
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
        InvokeDirectCpu<0x80052974u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 & 1);
}

loc_8009A670:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009A67C;
    }
}

loc_8009A674:
{
    r3 = 0;
    goto loc_8009A70C;
}

loc_8009A67C:
{
}

loc_8009A680:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8009A690;
    }
}

loc_8009A684:
{
    r3 = r23;
    ctx->lr = 0x8009A68Cu;
    if constexpr (KnownRegArgsCpuCall<0x8009A5F0u>(&func_8009A5F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009A5F0_E9E = func_8009A5F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009A5F0_E9E);
        r4 = static_cast<uint32_t>(regargs_result_8009A5F0_E9E >> 32);
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
        InvokeDirectCpu<0x8009A5F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWrite32(r24, r3);
}

loc_8009A690:
{
}

loc_8009A694:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8009A6A4;
    }
}

loc_8009A698:
{
    r3 = r23;
    ctx->lr = 0x8009A6A0u;
    if constexpr (KnownRegArgsCpuCall<0x800534F0u>(&func_800534F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534F0_130E = func_800534F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534F0_130E);
        r4 = static_cast<uint32_t>(regargs_result_800534F0_130E >> 32);
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
        InvokeDirectCpu<0x800534F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r3));
}

loc_8009A6A4:
{
}

loc_8009A6A8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8009A6B8;
    }
}

loc_8009A6AC:
{
    r3 = r23;
    ctx->lr = 0x8009A6B4u;
    if constexpr (KnownRegArgsCpuCall<0x800534CCu>(&func_800534CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534CC_1798 = func_800534CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534CC_1798);
        r4 = static_cast<uint32_t>(regargs_result_800534CC_1798 >> 32);
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
        InvokeDirectCpu<0x800534CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r3));
}

loc_8009A6B8:
{
}

loc_8009A6BC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8009A6C8;
    }
}

loc_8009A6C0:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWrite32(r27, r0);
}

loc_8009A6C8:
{
}

loc_8009A6CC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8009A6D8;
    }
}

loc_8009A6D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
}

loc_8009A6D8:
{
}

loc_8009A6DC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8009A6E8;
    }
}

loc_8009A6E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
}

loc_8009A6E8:
{
}

loc_8009A6EC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8009A708;
    }
}

loc_8009A6F0:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r3 ^ 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8009A708:
{
    r3 = 1;
}

loc_8009A70C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009A628(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009A628_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009A628 func_8009A628 preserves=true fpr_mask=0x00000000
