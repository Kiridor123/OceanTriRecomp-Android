#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E9010(CpuContext* ctx);
extern "C" uint32_t func_804E9010_ra308_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E9130(CpuContext* ctx);
extern "C" uint64_t func_804E9130_ra308_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E91A0(CpuContext* ctx);
extern "C" uint64_t func_804E91A0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_800401A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800401A8;

loc_800401A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = 0x80000000u;
    r3 = 274857984;
    r31 = (r3 + 19923);
    goto loc_800401E4;
}

loc_800401CC:
{
    r0 = MemoryInline::FlatRead32((r30 + 248));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r31) * static_cast<uint64_t>(r0)) >> 32));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r4 = (r4_rot_2 & 67108863);
    r3 = 0;
    ctx->lr = 0x800401E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804D5320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
}

loc_800401E4:
{
    // inline leaf 0x8003F588 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -18052));
    // end of inlined leaf 0x8003F588
    r3 = (r3 + -1);
    r0 = MemoryInline::FlatRead32((r13 + -18048));
}

loc_800401F4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_800401CC;
    }
}

loc_800401F8:
{
    r3 = MemoryInline::FlatRead32((r13 + -18088));
    ctx->lr = 0x80040200u;
    if constexpr (KnownRegArgsCpuCall<0x804E9130u>(&func_804E9130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E9130_B0C = func_804E9130_ra308_0_18_0(ctx, r3, r8, r9);
        r3 = static_cast<uint32_t>(regargs_result_804E9130_B0C);
        r4 = static_cast<uint32_t>(regargs_result_804E9130_B0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804E9130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r0 = MemoryInline::FlatRead8((r13 + -32768));
}

loc_80040208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004021C;
    }
}

loc_8004020C:
{
    r3 = 0;
    ctx->lr = 0x80040214u;
    if constexpr (KnownRegArgsCpuCall<0x804E91A0u>(&func_804E91A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E91A0_F1C = func_804E91A0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E91A0_F1C);
        r4 = static_cast<uint32_t>(regargs_result_804E91A0_F1C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804E91A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -32768), static_cast<uint8_t>(r0));
}

loc_8004021C:
{
    r0 = MemoryInline::FlatRead8((r13 + -18064));
}

loc_80040224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80040240;
    }
}

loc_80040228:
{
    r3 = MemoryInline::FlatRead8((r13 + -32767));
    ctx->lr = 0x80040230u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8003FA48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -18064), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r13 + -32767), static_cast<uint8_t>(r0));
}

loc_80040240:
{
    ctx->lr = 0x80040244u;
    if constexpr (KnownRegArgsCpuCall<0x804E9010u>(&func_804E9010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_804E9010_15A7 = func_804E9010_ra308_0_8_0(ctx, r3, r8, r9);
        r3 = regargs_result_804E9010_15A7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804E9010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r3 = MemoryInline::FlatRead8((r13 + -18044));
    // inline leaf 0x804EB2F0 (8 guest instruction(s))
}

loc_inl1_0x804EB2F0:
{
    r0 = MemoryInline::FlatRead8((r13 + -19585));
}

loc_inl1_0x804EB2F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x804EB2FC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    MemoryInline::FlatWrite8((r13 + -19585), static_cast<uint8_t>(r3));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r13 + -14224), r0);
    goto loc_inl1_cont_804EB2F0;
}

loc_inl1_return:
{
}

loc_inl1_cont_804EB2F0:
{
    // end of inlined leaf 0x804EB2F0
    r0 = MemoryInline::FlatRead32((r13 + -18084));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -18084), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r13 + -18096);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    MemoryInline::FlatWrite32((r13 + -18088), r0);
    // inline leaf 0x804777D0 (2 guest instruction(s))
    OSSystemCall();
    // end of inlined leaf 0x804777D0
    r31 = 0x80000000u;
    r3 = 274857984;
    r30 = (r3 + 19923);
    goto loc_80040294;
}

loc_8004027C:
{
    r0 = MemoryInline::FlatRead32((r31 + 248));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_5 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r0)) >> 32));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r4 = (r4_rot_4 & 67108863);
    r3 = 0;
    ctx->lr = 0x80040294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804D5320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
}

loc_80040294:
{
    // inline leaf 0x8003F588 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -18052));
    // end of inlined leaf 0x8003F588
    r0 = MemoryInline::FlatRead32((r13 + -18048));
}

loc_800402A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8004027C;
    }
}

loc_800402A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17848));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -17848), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -18048), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800401A8 func_800401A8 preserves=true fpr_mask=0x00000000
