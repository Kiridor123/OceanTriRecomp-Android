#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FC274(CpuContext* ctx);
extern "C" uint64_t func_803FC274_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8040E98C(CpuContext* ctx);
extern "C" uint64_t func_8040E98C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8040F1C0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8040F1C0u);
    goto loc_8040F1C0;

loc_8040F1C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r30 = r5;
    r28 = r6;
    r4 = (r5 & 255);
    // inline leaf 0x803FC274 (12 guest instruction(s))
}

loc_inl1_0x803FC274:
{
    r0 = MemoryInline::FlatRead8((r3 + 152));
}

loc_inl1_0x803FC27C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x803FC288;
    }
}

loc_inl1_0x803FC280:
{
    r3 = 0;
    goto loc_inl1_cont_803FC274;
}

loc_inl1_0x803FC288:
{
    r5 = MemoryInline::FlatRead32((r3 + 24768));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 24768));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 24768), r0);
    r3 = r5;
}

loc_inl1_cont_803FC274:
{
    // end of inlined leaf 0x803FC274
    r29 = 0;
    r31 = (r30 & 255);
    goto loc_8040F250;
}

loc_8040F1F8:
{
    r30 = (r29 & 255);
    r3 = r26;
    r28_addr_2 = (r28 + r30);
    r4 = MemoryInline::FlatRead8(r28_addr_2);
    if constexpr (KnownRegArgsCpuCall<0x803FC274u>(&func_803FC274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803FC274_A44 = func_803FC274_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803FC274_A44);
        r4 = static_cast<uint32_t>(regargs_result_803FC274_A44 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803FC274u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28_addr_3 = (r28 + r30);
    r0 = MemoryInline::FlatRead8(r28_addr_3);
}

loc_8040F210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8040F220;
    }
}

loc_8040F214:
{
}

loc_8040F218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8040F230;
    }
}

loc_8040F21C:
{
    goto loc_8040F240;
}

loc_8040F220:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead8(r27);
    ctx->lr = 0x8040F22Cu;
    if constexpr (KnownRegArgsCpuCall<0x8040E98Cu>(&func_8040E98C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8040E98C_ED1 = func_8040E98C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8040E98C_ED1);
        r4 = static_cast<uint32_t>(regargs_result_8040E98C_ED1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8040E98Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8040F24C;
}

loc_8040F230:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead8((r27 + 1));
    ctx->lr = 0x8040F23Cu;
    if constexpr (KnownRegArgsCpuCall<0x8040E98Cu>(&func_8040E98C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8040E98C_1240 = func_8040E98C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8040E98C_1240);
        r4 = static_cast<uint32_t>(regargs_result_8040E98C_1240 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8040E98Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8040F24C;
}

loc_8040F240:
{
    r3 = r26;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x803FC274u>(&func_803FC274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803FC274_1590 = func_803FC274_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803FC274_1590);
        r4 = static_cast<uint32_t>(regargs_result_803FC274_1590 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803FC274u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8040F24C:
{
    r29 = (r29 + 1);
}

loc_8040F250:
{
    r0 = (r29 & 255);
}

loc_8040F258:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_8040F1F8;
    }
}

loc_8040F25C:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8040F1C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8040F1C0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8040F1C0 func_8040F1C0 preserves=true fpr_mask=0x00000000
