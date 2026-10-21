#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A67D0(CpuContext* ctx);
extern "C" uint64_t func_804A67D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A67D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x804A67D0u);
    goto loc_804A67D0;

loc_804A67D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
}

loc_804A67E8:
{
    r28 = r4;
    r29 = r5;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A67FC;
    }
}

loc_804A67F4:
{
    r3 = 0;
    goto loc_804A6980;
}

loc_804A67FC:
{
    r8 = MemoryInline::FlatRead32((r13 + -15768));
    r0 = (r3 * 12);
    r7 = MemoryInline::FlatRead32((r13 + -15772));
    r6 = (r8 + 4);
    r6_addr_1 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_1);
    r8_addr_1 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_1);
}

loc_804A6818:
{
    r0 = (r0 & 16777215);
    r30 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A682C;
    }
}

loc_804A6824:
{
    r4 = 0;
    goto loc_804A6920;
}

loc_804A682C:
{
    r0 = (r3 * 12);
    r6_addr_2 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_2);
    r8_addr_2 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_2);
}

loc_804A683C:
{
    r0 = (r0 & 16777215);
    r31 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A6850;
    }
}

loc_804A6848:
{
    r4 = 0;
    goto loc_804A68C8;
}

loc_804A6850:
{
    r3 = (r3 * 12);
    r8_addr_3 = (r8 + r3);
    r0 = MemoryInline::FlatRead32(r8_addr_3);
    r6_addr_3 = (r6 + r3);
    r3 = MemoryInline::FlatRead32(r6_addr_3);
    r0 = (r0 & 16777215);
    r27 = (r7 + r0);
    ctx->lr = 0x804A6868u;
    if constexpr (KnownRegArgsCpuCall<0x804A67D0u>(&func_804A67D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_804A67D0_F08 = func_804A67D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A67D0_F08);
        r4 = static_cast<uint32_t>(regargs_result_804A67D0_F08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804A67D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
}

loc_804A686C:
{
    r4 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_804A6878;
    }
}

loc_804A6874:
{
    goto loc_804A68C8;
}

loc_804A6878:
{
    r4 = (r3 + 1);
    r0 = 47;
    r6 = (r29 - r4);
    r28_addr_1 = (r28 + r3);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r0));
    r3 = (r28 + r4);
    r5 = r6;
    goto loc_804A68AC;
}

loc_804A6898:
{
    r0 = MemoryInline::FlatRead8(r27);
    r27 = (r27 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r5 = (r5 + -1);
}

loc_804A68AC:
{
}

loc_804A68B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804A68C0;
    }
}

loc_804A68B4:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A6898;
    }
}

loc_804A68C0:
{
    r0 = (r6 - r5);
    r4 = (r4 + r0);
}

loc_804A68C8:
{
}

loc_804A68CC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r29))) {
        goto loc_804A68D4;
    }
}

loc_804A68D0:
{
    goto loc_804A6920;
}

loc_804A68D4:
{
    r3 = (r4 + 1);
    r0 = 47;
    r6 = (r29 - r3);
    r28_addr_3 = (r28 + r4);
    MemoryInline::FlatWrite8(r28_addr_3, static_cast<uint8_t>(r0));
    r4 = (r28 + r3);
    r5 = r6;
    goto loc_804A6904;
}

loc_804A68F0:
{
    r0 = MemoryInline::FlatRead8(r31);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    r5 = (r5 + -1);
}

loc_804A6904:
{
}

loc_804A6908:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804A6918;
    }
}

loc_804A690C:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A68F0;
    }
}

loc_804A6918:
{
    r0 = (r6 - r5);
    r4 = (r3 + r0);
}

loc_804A6920:
{
}

loc_804A6924:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r29))) {
        goto loc_804A6930;
    }
}

loc_804A6928:
{
    r3 = r4;
    goto loc_804A6980;
}

loc_804A6930:
{
    r6 = (r4 + 1);
    r0 = 47;
    r5 = (r29 - r6);
    r28_addr_5 = (r28 + r4);
    MemoryInline::FlatWrite8(r28_addr_5, static_cast<uint8_t>(r0));
    r3 = (r28 + r6);
    r4 = r5;
    goto loc_804A6964;
}

loc_804A6950:
{
    r0 = MemoryInline::FlatRead8(r30);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r4 = (r4 + -1);
}

loc_804A6964:
{
}

loc_804A6968:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804A6978;
    }
}

loc_804A696C:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A6950;
    }
}

loc_804A6978:
{
    r0 = (r5 - r4);
    r3 = (r6 + r0);
}

loc_804A6980:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A67D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A67D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A67D0 func_804A67D0 preserves=true fpr_mask=0x00000000
