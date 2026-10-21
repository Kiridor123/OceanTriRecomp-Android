#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012E958(CpuContext* ctx);
extern "C" uint32_t func_8012E958_ra8_2_8_0(CpuContext*, uint32_t, double);

extern "C" void func_8012E9CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8012E9CCu);
    goto loc_8012E9CC;

loc_8012E9CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
}

loc_8012E9EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EA24;
    }
}

loc_8012E9F0:
{
}

loc_8012E9F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8012EA48;
    }
}

loc_8012E9F8:
{
}

loc_8012E9FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8012EA6C;
    }
}

loc_8012EA00:
{
}

loc_8012EA04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8012EA90;
    }
}

loc_8012EA08:
{
}

loc_8012EA0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8012EAB4;
    }
}

loc_8012EA10:
{
}

loc_8012EA14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8012EAD8;
    }
}

loc_8012EA18:
{
}

loc_8012EA1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8012EAFC;
    }
}

loc_8012EA20:
{
    goto loc_8012EC84;
}

loc_8012EA24:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28164));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8012EA44u;
    if constexpr (KnownRegArgsCpuCall<0x8012E958u>(&func_8012E958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012E958_A79 = func_8012E958_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012E958_A79;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012E958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8012EC88;
}

loc_8012EA48:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28156));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8012EA68u;
    if constexpr (KnownRegArgsCpuCall<0x8012E958u>(&func_8012E958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012E958_F0A = func_8012E958_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012E958_F0A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012E958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8012EC88;
}

loc_8012EA6C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28152));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8012EA8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012E958u>(&func_8012E958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012E958_139B = func_8012E958_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012E958_139B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012E958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8012EC88;
}

loc_8012EA90:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28148));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8012EAB0u;
    if constexpr (KnownRegArgsCpuCall<0x8012E958u>(&func_8012E958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012E958_182E = func_8012E958_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012E958_182E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012E958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8012EC88;
}

loc_8012EAB4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28144));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8012EAD4u;
    if constexpr (KnownRegArgsCpuCall<0x8012E958u>(&func_8012E958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012E958_1CC1 = func_8012E958_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012E958_1CC1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012E958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8012EC88;
}

loc_8012EAD8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28140));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8012EAF8u;
    if constexpr (KnownRegArgsCpuCall<0x8012E958u>(&func_8012E958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012E958_2154 = func_8012E958_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012E958_2154;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012E958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8012EC88;
}

loc_8012EAFC:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r0 = (r3 & 65535);
    ctr = r0;
}

loc_8012EB1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8012EB5C;
    }
}

loc_8012EB20:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_8012EB28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EB54;
    }
}

loc_8012EB2C:
{
    r3 = MemoryInline::FlatRead8((r30 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8012EB38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EB54;
    }
}

loc_8012EB3C:
{
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8012EB48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EB54;
    }
}

loc_8012EB4C:
{
    r3 = 0;
    goto loc_8012EC88;
}

loc_8012EB54:
{
    r30 = (r30 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012EB20;
    }
}

loc_8012EB5C:
{
    r3 = 0x806A0000u;
    r5 = (r3 + 31072);
    r4 = 0;
    r0 = 32;
    ctr = r0;
}

loc_8012EB70:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8012EB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EBB0;
    }
}

loc_8012EB7C:
{
    r3 = MemoryInline::FlatRead8((r5 + 10));
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8012EB88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EBB0;
    }
}

loc_8012EB8C:
{
    r3 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8012EB98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EBB0;
    }
}

loc_8012EB9C:
{
    r0 = MemoryInline::FlatRead8((r5 + 12));
}

loc_8012EBA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012EBB0;
    }
}

loc_8012EBA8:
{
    r3 = 0;
    goto loc_8012EC88;
}

loc_8012EBB0:
{
    r0 = MemoryInline::FlatRead8((r5 + 68));
}

loc_8012EBB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EBF0;
    }
}

loc_8012EBBC:
{
    r3 = MemoryInline::FlatRead8((r5 + 78));
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8012EBC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EBF0;
    }
}

loc_8012EBCC:
{
    r3 = MemoryInline::FlatRead8((r5 + 70));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8012EBD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EBF0;
    }
}

loc_8012EBDC:
{
    r0 = MemoryInline::FlatRead8((r5 + 80));
}

loc_8012EBE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012EBF0;
    }
}

loc_8012EBE8:
{
    r3 = 0;
    goto loc_8012EC88;
}

loc_8012EBF0:
{
    r0 = MemoryInline::FlatRead8((r5 + 136));
}

loc_8012EBF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EC30;
    }
}

loc_8012EBFC:
{
    r3 = MemoryInline::FlatRead8((r5 + 146));
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8012EC08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EC30;
    }
}

loc_8012EC0C:
{
    r3 = MemoryInline::FlatRead8((r5 + 138));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8012EC18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EC30;
    }
}

loc_8012EC1C:
{
    r0 = MemoryInline::FlatRead8((r5 + 148));
}

loc_8012EC24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012EC30;
    }
}

loc_8012EC28:
{
    r3 = 0;
    goto loc_8012EC88;
}

loc_8012EC30:
{
    r0 = MemoryInline::FlatRead8((r5 + 204));
}

loc_8012EC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EC70;
    }
}

loc_8012EC3C:
{
    r3 = MemoryInline::FlatRead8((r5 + 214));
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8012EC48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EC70;
    }
}

loc_8012EC4C:
{
    r3 = MemoryInline::FlatRead8((r5 + 206));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8012EC58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EC70;
    }
}

loc_8012EC5C:
{
    r0 = MemoryInline::FlatRead8((r5 + 216));
}

loc_8012EC64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012EC70;
    }
}

loc_8012EC68:
{
    r3 = 0;
    goto loc_8012EC88;
}

loc_8012EC70:
{
    r4 = (r4 + 3);
    r5 = (r5 + 272);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012EB70;
    }
}

loc_8012EC7C:
{
    r3 = 1;
    goto loc_8012EC88;
}

loc_8012EC84:
{
    r3 = 0;
}

loc_8012EC88:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012E9CC func_8012E9CC preserves=true fpr_mask=0x00000000
