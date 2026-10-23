#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C9B00(CpuContext* ctx);
extern "C" uint64_t func_804C9B00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80440FBC_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
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

    goto loc_80440FBC;

loc_80440FBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = 0x806E0000u;
    r3 = (r25 + -30656);
    r4 = 1;
    r5 = 0x80600000u;
    r5 = (r5 + 31168);
    r6 = 0x806E0000u;
    r6 = (r6 + 30944);
    ctx->lr = 0x80440FF0u;
    if constexpr (KnownRegArgsCpuCall<0x804C9B00u>(&func_804C9B00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804C9B00_881 = func_804C9B00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804C9B00_881);
        r4 = static_cast<uint32_t>(regargs_result_804C9B00_881 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804C9B00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0;
    // inline leaf 0x800D0640 (15 guest instruction(s))
}

loc_inl1_0x800D0640:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
}

loc_inl1_0x800D064C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(32))) {
        goto loc_inl1_0x800D0658;
    }
}

loc_inl1_0x800D0650:
{
    r3 = 0;
    goto loc_inl1_cont_800D0640;
}

loc_inl1_0x800D0658:
{
    r0 = (r3 * 56);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 188));
}

loc_inl1_0x800D0668:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D0674;
    }
}

loc_inl1_0x800D066C:
{
    r3 = 0;
    goto loc_inl1_cont_800D0640;
}

loc_inl1_0x800D0674:
{
    r3 = MemoryInline::FlatRead32((r3 + 224));
}

loc_inl1_cont_800D0640:
{
    // end of inlined leaf 0x800D0640
    r4 = r3;
    r30 = (r25 + -30656);
    r3 = (r30 + 160);
    r5 = 24576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r29 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r3 = 0x80600000u;
    r31 = (r3 + 31096);
    r25 = 3;
}

loc_80441028:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r31_addr_2 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_2);
    r3 = (r3 + 1);
    // inline leaf 0x800D0640 (15 guest instruction(s))
}

loc_inl2_0x800D0640:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
}

loc_inl2_0x800D064C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(32))) {
        goto loc_inl2_0x800D0658;
    }
}

loc_inl2_0x800D0650:
{
    r3 = 0;
    goto loc_inl2_cont_800D0640;
}

loc_inl2_0x800D0658:
{
    r0 = (r3 * 56);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 188));
}

loc_inl2_0x800D0668:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800D0674;
    }
}

loc_inl2_0x800D066C:
{
    r3 = 0;
    goto loc_inl2_cont_800D0640;
}

loc_inl2_0x800D0674:
{
    r3 = MemoryInline::FlatRead32((r3 + 224));
}

loc_inl2_cont_800D0640:
{
    // end of inlined leaf 0x800D0640
    r4 = r3;
    r3 = (r30 + r28);
    r3 = (r3 + 24736);
    r5 = 4608;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead16((r30 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r26));
    r3 = (r3 & ~r0);
    r0 = (r26 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r31_addr_3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32(r31_addr_3);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
    r0 = (r3 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r30 + 8), static_cast<uint16_t>(r0));
    r29 = (r29 + 1);
    r28 = (r28 + 4608);
    r27 = (r27 + 4);
    r26 = (r26 + 2);
}

loc_80441088:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(8))) {
        goto loc_80441028;
    }
}

loc_8044108C:
{
    r3 = 0x806E0000u;
    r6 = (r3 + -30656);
    r3 = (r0 & 65535);
    r0 = 3;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = (r3 & ~r0);
    r0 = (r5 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x80600000u;
    r3 = (r3 + 31096);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r4 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 8), static_cast<uint16_t>(r0));
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80440FBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80440FBC_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80440FBC func_80440FBC preserves=true fpr_mask=0x00000000
