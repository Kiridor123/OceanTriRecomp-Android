#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A5CC0(CpuContext* ctx);
extern "C" uint64_t func_804A5CC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804A60A0(CpuContext* ctx);
extern "C" uint64_t func_804A60A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CD630(CpuContext* ctx);
extern "C" void func_804CD630_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804A5890_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_804A5890;

loc_804A5890:
{
    MemoryHw::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    r6 = -872415232;
    MemoryHw::FlatWriteRam32((r1 + 740), r0);
    r0 = -41;
    r3 = (r1 + 8);
    r31 = r4;
    r5 = MemoryHw::FlatRead16((r6 + 20490));
    r0 = (r5 & r0);
    r0 = (r0 | 128);
    MemoryHw::FlatWrite16((r6 + 20490), static_cast<uint16_t>(r0));
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl0_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl0_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl0_cont_804CD870;
}

loc_inl0_return:
{
}

loc_inl0_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 8);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl1_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl1_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl1_0x804CD668;
    }
}

loc_inl1_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl1_cont_804CD630;
}

loc_inl1_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl1_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
}

loc_804A58CC:
{
    // inline leaf 0x804A55B0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20484));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804A55B0
}

loc_804A58D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A58CC;
    }
}

loc_804A58D8:
{
    // inline leaf 0x804A55C0 (5 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20484));
    r3 = MemoryHw::FlatRead16((r3 + 20486));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3_mrot_0 = (r3_rot_3 & -65536);
    r3_mdest_0 = (r3 & 65535);
    r3 = (r3_mdest_0 | r3_mrot_0);
    // end of inlined leaf 0x804A55C0
    r4 = MemoryHw::FlatRead32((r13 + -15796));
    guest_range_0 = MemoryHw::ResolveRangeHost((r4 + 8), 0, 52u, true, false);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r4 + 8));
    r0 = (r0 & 2);
}

loc_804A58E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A5900;
    }
}

loc_804A58EC:
{
    r0 = (r3 + 590282752);
}

loc_804A58F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804A5900;
    }
}

loc_804A58F8:
{
    r3 = -590282752;
    r3 = (r3 + 3);
}

loc_804A5900:
{
    r0 = (r3 + 590282752);
}

loc_804A5908:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804A5930;
    }
}

loc_804A590C:
{
}

loc_804A5910:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804A5954;
    }
}

loc_804A5914:
{
}

loc_804A5918:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804A5978;
    }
}

loc_804A591C:
{
}

loc_804A5920:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804A5AE0;
    }
}

loc_804A5924:
{
}

loc_804A5928:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_804A5C80;
    }
}

loc_804A592C:
{
    goto loc_804A5C98;
}

loc_804A5930:
{
    r0 = 1;
    MemoryHw::FlatWrite32(r4, r0);
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r12 = MemoryHw::FlatRead32((r3 + 40));
}

loc_804A5944:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5C98;
    }
}

loc_804A5948:
{
    ctr = r12;
    ctx->lr = 0x804A5950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_804A5C98;
}

loc_804A5954:
{
    r0 = 1;
    MemoryHw::FlatWrite32(r4, r0);
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r12 = MemoryHw::FlatRead32((r3 + 44));
}

loc_804A5968:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5C98;
    }
}

loc_804A596C:
{
    ctr = r12;
    ctx->lr = 0x804A5974u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_804A5C98;
}

loc_804A5978:
{
    r0 = MemoryHw::FlatRead32((r13 + -15816));
}

loc_804A5980:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A5A18;
    }
}

loc_804A5984:
{
    r0 = MemoryHw::FlatRead32((r13 + -15812));
}

loc_804A598C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A59D0;
    }
}

loc_804A5990:
{
    r3 = -841940992;
    r3 = (r3 + 3);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A599C:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_13 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A59A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A599C;
    }
}

loc_804A59A8:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -15812), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    MemoryHw::FlatWrite32((r13 + -15816), r0);
    r12 = MemoryHw::FlatRead32((r3 + 44));
}

loc_804A59C0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5C98;
    }
}

loc_804A59C4:
{
    ctr = r12;
    ctx->lr = 0x804A59CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_804A5C98;
}

loc_804A59D0:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A59DC:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A59E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A59DC;
    }
}

loc_804A59E8:
{
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r4 = MemoryHw::FlatRead32((r13 + -15812));
    ctx->lr = 0x804A59F4u;
    if constexpr (KnownRegArgsCpuCall<0x804A5CC0u>(&func_804A5CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5CC0_2D4F = func_804A5CC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A5CC0_2D4F);
        r4 = static_cast<uint32_t>(regargs_result_804A5CC0_2D4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A5CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r4 = 2;
    r0 = 0;
    MemoryHw::FlatWrite32(r3, r4);
    r3 = MemoryHw::FlatRead32((r13 + -15812));
    MemoryHw::FlatWrite32((r13 + -15796), r3);
    MemoryHw::FlatWrite32((r13 + -15812), r0);
    MemoryHw::FlatWrite32((r13 + -15816), r0);
    goto loc_804A5C98;
}

loc_804A5A18:
{
    r0 = MemoryHw::ReadResolved32(guest_range_0, 48u, (r4 + 56));
}

loc_804A5A20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A5AA0;
    }
}

loc_804A5A24:
{
    r0 = MemoryHw::FlatRead32((r13 + -15800));
}

loc_804A5A2C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A5A64;
    }
}

loc_804A5A30:
{
    r3 = -841940992;
    r3 = (r3 + 3);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5A3C:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_17 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5A44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5A3C;
    }
}

loc_804A5A48:
{
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r12 = MemoryHw::FlatRead32((r3 + 44));
}

loc_804A5A54:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5C98;
    }
}

loc_804A5A58:
{
    ctr = r12;
    ctx->lr = 0x804A5A60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_804A5C98;
}

loc_804A5A64:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5A70:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_19 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5A78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5A70;
    }
}

loc_804A5A7C:
{
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r4 = MemoryHw::FlatRead32((r13 + -15800));
    ctx->lr = 0x804A5A88u;
    if constexpr (KnownRegArgsCpuCall<0x804A5CC0u>(&func_804A5CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5CC0_3D41 = func_804A5CC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A5CC0_3D41);
        r4 = static_cast<uint32_t>(regargs_result_804A5CC0_3D41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A5CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r0 = 2;
    MemoryHw::FlatWrite32(r3, r0);
    r0 = MemoryHw::FlatRead32((r13 + -15800));
    MemoryHw::FlatWrite32((r13 + -15796), r0);
    goto loc_804A5C98;
}

loc_804A5AA0:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5AAC:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_21 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5AB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5AAC;
    }
}

loc_804A5AB8:
{
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r4 = MemoryHw::FlatRead32((r3 + 56));
    ctx->lr = 0x804A5AC4u;
    if constexpr (KnownRegArgsCpuCall<0x804A5CC0u>(&func_804A5CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5CC0_44DD = func_804A5CC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A5CC0_44DD);
        r4 = static_cast<uint32_t>(regargs_result_804A5CC0_44DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A5CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r0 = 2;
    MemoryHw::FlatWrite32(r3, r0);
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r0 = MemoryHw::FlatRead32((r3 + 56));
    MemoryHw::FlatWrite32((r13 + -15796), r0);
    goto loc_804A5C98;
}

loc_804A5AE0:
{
    r0 = MemoryHw::FlatRead32((r13 + -15816));
}

loc_804A5AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A5B60;
    }
}

loc_804A5AEC:
{
    r0 = MemoryHw::FlatRead32((r13 + -15812));
}

loc_804A5AF4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_804A5B54;
    }
}

loc_804A5AF8:
{
    r12 = MemoryHw::ReadResolved32(guest_range_0, 40u, (r4 + 48));
}

loc_804A5B00:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5B10;
    }
}

loc_804A5B04:
{
    r3 = r4;
    ctr = r12;
    ctx->lr = 0x804A5B10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_804A5B10:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5B1C:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5B24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5B1C;
    }
}

loc_804A5B28:
{
    r4 = MemoryHw::FlatRead32((r13 + -15812));
    r3 = 0;
    ctx->lr = 0x804A5B34u;
    if constexpr (KnownRegArgsCpuCall<0x804A5CC0u>(&func_804A5CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5CC0_50BD = func_804A5CC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A5CC0_50BD);
        r4 = static_cast<uint32_t>(regargs_result_804A5CC0_50BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A5CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    if constexpr (KnownRegArgsCpuCall<0x804A60A0u>(&func_804A60A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A60A0_53A4 = func_804A60A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A60A0_53A4);
        r4 = static_cast<uint32_t>(regargs_result_804A60A0_53A4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A60A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryHw::FlatRead32((r13 + -15812));
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -15796), r3);
    MemoryHw::FlatWrite32((r13 + -15812), r0);
    MemoryHw::FlatWrite32((r13 + -15816), r0);
    goto loc_804A5C98;
}

loc_804A5B54:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -15812), r0);
    MemoryHw::FlatWrite32((r13 + -15816), r0);
}

loc_804A5B60:
{
    r0 = MemoryHw::ReadResolved32(guest_range_0, 48u, (r4 + 56));
}

loc_804A5B68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A5C1C;
    }
}

loc_804A5B6C:
{
    r0 = MemoryHw::FlatRead32((r13 + -15800));
}

loc_804A5B74:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A5BC0;
    }
}

loc_804A5B78:
{
    r12 = MemoryHw::ReadResolved32(guest_range_0, 40u, (r4 + 48));
}

loc_804A5B80:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5B90;
    }
}

loc_804A5B84:
{
    r3 = r4;
    ctr = r12;
    ctx->lr = 0x804A5B90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_804A5B90:
{
    r3 = -841940992;
    r3 = (r3 + 2);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5B9C:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5BA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5B9C;
    }
}

loc_804A5BA8:
{
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r0 = 3;
    MemoryHw::FlatWrite32(r3, r0);
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    if constexpr (KnownRegArgsCpuCall<0x804A60A0u>(&func_804A60A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A60A0_600A = func_804A60A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A60A0_600A);
        r4 = static_cast<uint32_t>(regargs_result_804A60A0_600A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A60A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804A5C98;
}

loc_804A5BC0:
{
    r12 = MemoryHw::ReadResolved32(guest_range_0, 40u, (r4 + 48));
}

loc_804A5BC8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5BD8;
    }
}

loc_804A5BCC:
{
    r3 = r4;
    ctr = r12;
    ctx->lr = 0x804A5BD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_804A5BD8:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5BE4:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5BEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5BE4;
    }
}

loc_804A5BF0:
{
    r4 = MemoryHw::FlatRead32((r13 + -15796));
    r0 = 3;
    r3 = 0;
    MemoryHw::FlatWrite32(r4, r0);
    r4 = MemoryHw::FlatRead32((r13 + -15800));
    ctx->lr = 0x804A5C08u;
    if constexpr (KnownRegArgsCpuCall<0x804A5CC0u>(&func_804A5CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5CC0_698C = func_804A5CC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A5CC0_698C);
        r4 = static_cast<uint32_t>(regargs_result_804A5CC0_698C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A5CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryHw::FlatRead32((r13 + -15800));
    MemoryHw::FlatWrite32((r13 + -15796), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15804));
    if constexpr (KnownRegArgsCpuCall<0x804A60A0u>(&func_804A60A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A60A0_6CDB = func_804A60A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A60A0_6CDB);
        r4 = static_cast<uint32_t>(regargs_result_804A60A0_6CDB >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A60A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804A5C98;
}

loc_804A5C1C:
{
    r12 = MemoryHw::ReadResolved32(guest_range_0, 40u, (r4 + 48));
}

loc_804A5C24:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5C34;
    }
}

loc_804A5C28:
{
    r3 = r4;
    ctr = r12;
    ctx->lr = 0x804A5C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_804A5C34:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5C40:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20480));
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5C48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5C40;
    }
}

loc_804A5C4C:
{
    r4 = MemoryHw::FlatRead32((r13 + -15796));
    r0 = 3;
    r3 = 0;
    MemoryHw::FlatWrite32(r4, r0);
    r4 = MemoryHw::FlatRead32((r13 + -15796));
    r4 = MemoryHw::FlatRead32((r4 + 56));
    ctx->lr = 0x804A5C68u;
    if constexpr (KnownRegArgsCpuCall<0x804A5CC0u>(&func_804A5CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5CC0_768E = func_804A5CC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A5CC0_768E);
        r4 = static_cast<uint32_t>(regargs_result_804A5CC0_768E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A5CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryHw::FlatRead32((r13 + -15796));
    r3 = MemoryHw::FlatRead32((r3 + 56));
    MemoryHw::FlatWrite32((r13 + -15796), r3);
    r3 = MemoryHw::FlatRead32((r3 + 60));
    if constexpr (KnownRegArgsCpuCall<0x804A60A0u>(&func_804A60A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A60A0_7A07 = func_804A60A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804A60A0_7A07);
        r4 = static_cast<uint32_t>(regargs_result_804A60A0_7A07 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A60A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804A5C98;
}

loc_804A5C80:
{
    r12 = MemoryHw::ReadResolved32(guest_range_0, 44u, (r4 + 52));
}

loc_804A5C88:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804A5C98;
    }
}

loc_804A5C8C:
{
    r3 = r4;
    ctr = r12;
    ctx->lr = 0x804A5C98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_804A5C98:
{
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl22_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl22_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl22_return;
    }
}

loc_inl22_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl22_cont_804CD870;
}

loc_inl22_return:
{
}

loc_inl22_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CD630u>(&func_804CD630)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_804CD630_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804CD630u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryHw::FlatRead32((r1 + 740));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A5890(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A5890_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A5890 func_804A5890 preserves=true fpr_mask=0x00000000
