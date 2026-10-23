#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802682C4(CpuContext* ctx);
extern "C" uint64_t func_802682C4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026836C(CpuContext* ctx);
extern "C" uint64_t func_8026836C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80273570(CpuContext* ctx);
extern "C" uint64_t func_80273570_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80267B04_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80267B04;

loc_80267B04:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r31 = r4;
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80267B2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80267C04;
    }
}

loc_80267B30:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80267B38:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80267C04;
    }
}

loc_80267B3C:
{
    r0 = 0;
    r3 = 0x806B0000u;
    r28 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r28 + 300), static_cast<uint8_t>(r0));
    r27 = 0;
    r29 = 1;
    goto loc_80267BF8;
}

loc_80267B58:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80267B60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80267BF0;
    }
}

loc_80267B64:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_80267B6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80267B80;
    }
}

loc_80267B70:
{
    r3 = (r27 & 255);
    // inline leaf 0x8045166C (12 guest instruction(s))
}

loc_inl3_0x8045166C:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl3_0x80451674:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80451680;
    }
}

loc_inl3_0x80451678:
{
    r3 = 0;
    goto loc_inl3_cont_8045166C;
}

loc_inl3_0x80451680:
{
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 64));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
}

loc_inl3_cont_8045166C:
{
    // end of inlined leaf 0x8045166C
}

loc_80267B7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80267BF0;
    }
}

loc_80267B80:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80267B8C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_80267BF0;
    }
}

loc_80267B90:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8026836Cu>(&func_8026836C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026836C_1140 = func_8026836C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026836C_1140);
        r4 = static_cast<uint32_t>(regargs_result_8026836C_1140 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026836Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80267B9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80267BCC;
    }
}

loc_80267BA0:
{
    r3 = r27;
    ctx->lr = 0x80267BA8u;
    if constexpr (KnownRegArgsCpuCall<0x802682C4u>(&func_802682C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802682C4_14D2 = func_802682C4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802682C4_14D2);
        r4 = static_cast<uint32_t>(regargs_result_802682C4_14D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802682C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80267BB4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80267BC0;
    }
}

loc_80267BB8:
{
    r3 = r31;
    ctx->lr = 0x80267BC0u;
    if constexpr (KnownRegArgsCpuCall<0x80273570u>(&func_80273570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80273570_18BF = func_80273570_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273570_18BF);
        r4 = static_cast<uint32_t>(regargs_result_80273570_18BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80273570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80267BC0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80267BCC:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80267BD8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_80267BF0;
    }
}

loc_80267BDC:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8026836Cu>(&func_8026836C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026836C_1E5A = func_8026836C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026836C_1E5A);
        r4 = static_cast<uint32_t>(regargs_result_8026836C_1E5A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026836Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80267BE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80267BF0;
    }
}

loc_80267BEC:
{
    MemoryInline::FlatWriteRam8((r28 + 300), static_cast<uint8_t>(r29));
}

loc_80267BF0:
{
    r27 = (r27 + 1);
    r31 = (r31 + 2848);
}

loc_80267BF8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80267C00:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80267B58;
    }
}

loc_80267C04:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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

extern "C" void func_80267B04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80267B04_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80267B04 func_80267B04 preserves=true fpr_mask=0x00000000
