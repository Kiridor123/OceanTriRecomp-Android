#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EB260(CpuContext* ctx);
extern "C" uint64_t func_804EB260_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804E6D90_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804E6D90;

loc_804E6D90:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
}

loc_804E6DA8:
{
    r31 = 0x80760000u;
    r31 = (r31 + -10800);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804E6F0C;
    }
}

loc_804E6DB4:
{
    r0 = (r4 + -1);
}

loc_804E6DBC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804E6DD8;
    }
}

loc_804E6DC0:
{
    r0 = (r4 + -4);
}

loc_804E6DC8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804E6F00;
    }
}

loc_804E6DCC:
{
}

loc_804E6DD0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804E6F00;
    }
}

loc_804E6DD4:
{
    goto loc_804E6F10;
}

loc_804E6DD8:
{
    r0 = MemoryInline::FlatRead32((r13 + -19636));
}

loc_804E6DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E6EE0;
    }
}

loc_804E6DE4:
{
    // inline leaf 0x804EB3A0 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r13 + -14224), r0);
    // end of inlined leaf 0x804EB3A0
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r5 = MemoryInline::FlatRead32((r13 + -14344));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -14360));
    r30 = r3;
    r28 = (r31 + 120);
    r29 = (r31 + 0);
    r3 = (r5 | r4);
    MemoryInline::FlatWrite32((r13 + -14344), r3);
    r27 = -1;
    MemoryInline::FlatWrite32((r13 + -14360), r0);
    r4 = MemoryInline::FlatRead32((r13 + -14336));
    r5 = MemoryInline::FlatRead32((r13 + -14332));
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r4 | r0);
    r3 = (r5 | r3);
    MemoryInline::FlatWrite32((r13 + -14332), r3);
    MemoryInline::FlatWrite32((r13 + -14336), r0);
    goto loc_804E6E98;
}

loc_804E6E38:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
}

loc_804E6E48:
{
    r0 = (r3 & r27);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_804E6E54;
    }
}

loc_804E6E50:
{
    goto loc_804E6E5C;
}

loc_804E6E54:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (r3 + 32);
}

loc_804E6E5C:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r5 = (63 - r4);
    r28_addr_2 = (r28 + r3);
    r0 = MemoryInline::FlatRead16(r28_addr_2);
    r4 = 1;
    r29_addr_2 = (r29 + r3);
    MemoryInline::FlatWrite16(r29_addr_2, static_cast<uint16_t>(r0));
    r3 = 0;
    // inline leaf 0x80457900 (9 guest instruction(s))
    r8 = (32 - r5);
    r9 = (r5 + -32);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    // end of inlined leaf 0x80457900
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = ~(r3 | r3);
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r4 = ~(r4 | r4);
    r0 = (r0 & r5);
    r3 = (r3 & r4);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
}

loc_804E6E98:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E6E38;
    }
}

loc_804E6EA8:
{
    r3 = (r31 + 240);
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r3 = r30;
    MemoryInline::FlatWrite32((r13 + -14240), r4);
    MemoryInline::FlatWrite32((r13 + -14244), r4);
    MemoryInline::FlatWrite32((r13 + -14300), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r13 + -14236));
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14320), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -19636), r0);
    goto loc_804E6F10;
}

loc_804E6EE0:
{
    r3 = MemoryInline::FlatRead32((r13 + -14320));
    r0 = MemoryInline::FlatRead32((r13 + -14236));
}

loc_804E6EEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804E6EF8;
    }
}

loc_804E6EF0:
{
    r3 = 0;
    goto loc_804E6F10;
}

loc_804E6EF8:
{
    r3 = 1;
    goto loc_804E6F10;
}

loc_804E6F00:
{
    ctx->lr = 0x804E6F04u;
    if constexpr (KnownRegArgsCpuCall<0x804EB260u>(&func_804EB260)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        const auto regargs_result_804EB260_1C7E = func_804EB260_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EB260_1C7E);
        r4 = static_cast<uint32_t>(regargs_result_804EB260_1C7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804EB260u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r3 = 1;
    goto loc_804E6F10;
}

loc_804E6F0C:
{
    r3 = 1;
}

loc_804E6F10:
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E6D90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E6D90_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000273B gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E6D90 func_804E6D90 preserves=true fpr_mask=0x00000000
