#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_809D6C34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_809D6CF4_loc_0 = 0;
    uint32_t addr_lhax_809D6D38_loc_0 = 0;
    uint32_t addr_lhax_809D6D7C_loc_0 = 0;
    uint32_t addr_lhax_809D6DC0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    MKW_GUEST_ENTER(0x809D6C34u);
    goto loc_809D6C34;

loc_809D6C34:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = 0x80A80000u;
    r31 = (r3 + -31488);
    r0 = MemoryInline::FlatRead8((r31 + 53));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D6C60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D6FC4;
    }
}

loc_809D6C64:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r0 = 853;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r0 = 479;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D6C90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809D6CAC;
    }
}

loc_809D6C94:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -107);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -107);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
}

loc_809D6CAC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D6CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D6CE4;
    }
}

loc_809D6CC8:
{
}

loc_809D6CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809D6D28;
    }
}

loc_809D6CD0:
{
}

loc_809D6CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809D6D6C;
    }
}

loc_809D6CD8:
{
}

loc_809D6CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_809D6DB0;
    }
}

loc_809D6CE0:
{
    goto loc_809D6FC4;
}

loc_809D6CE4:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 11304);
    addr_lhax_809D6CF4_loc_0 = (r3 + r4);
    r0 = MemoryInline::FlatRead16(addr_lhax_809D6CF4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r5 = (r31 + r4);
    r4 = (r5 + 108);
    r5 = (r5 + 140);
    ctx->lr = 0x809D6D24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_809D6FC4;
}

loc_809D6D28:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 11336);
    addr_lhax_809D6D38_loc_0 = (r3 + r4);
    r0 = MemoryInline::FlatRead16(addr_lhax_809D6D38_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r5 = (r31 + r4);
    r4 = (r5 + 172);
    r5 = (r5 + 200);
    ctx->lr = 0x809D6D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_809D6FC4;
}

loc_809D6D6C:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 11368);
    addr_lhax_809D6D7C_loc_0 = (r3 + r4);
    r0 = MemoryInline::FlatRead16(addr_lhax_809D6D7C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r5 = (r31 + r4);
    r4 = (r5 + 228);
    r5 = (r5 + 240);
    ctx->lr = 0x809D6DACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_809D6FC4;
}

loc_809D6DB0:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 11368);
    addr_lhax_809D6DC0_loc_0 = (r3 + r4);
    r0 = MemoryInline::FlatRead16(addr_lhax_809D6DC0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    r30 = MemoryInline::FlatRead32((r31 + 68));
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    r4 = (r30 & 255);
    r0 = MemoryInline::FlatRead32((r31 + 48));
}

loc_809D6DF0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_809D6E2C;
    }
}

loc_809D6DF4:
{
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -7440));
    stackword7 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_25DE = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_25DE;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r3 & 255);
    r0 = (r30 & -256);
    r0 = (r0 | r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_809D6E2C:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r1 + 8);
    r5 = (r31 + r0);
    r4 = (r5 + 228);
    r5 = (r5 + 240);
    ctx->lr = 0x809D6E48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r30 = MemoryInline::FlatRead32((r31 + 68));
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    r0 = (r30 & 255);
    r0_subfic_ra_1 = r0;
    r0 = (255 - r0_subfic_ra_1);
    r29 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r31 + 48));
}

loc_809D6E64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_809D6E94;
    }
}

loc_809D6E68:
{
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -7440));
    stackword11 = r29;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r0 = 1127219200;
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_2FB6 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2FB6;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r29 = (r3 & 255);
}

loc_809D6E94:
{
    r0 = (r30 & -256);
    r0 = (r0 | r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r1 + 8);
    r5 = (r31 + r0);
    r4 = (r5 + 228);
    r5 = (r5 + 240);
    ctx->lr = 0x809D6EC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_809D6EC4:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_809D6FC4;
    }
}

loc_809D6EC8:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
}

loc_809D6ED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D6EE0;
    }
}

loc_809D6ED4:
{
}

loc_809D6ED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809D6F54;
    }
}

loc_809D6EDC:
{
    goto loc_809D6FC4;
}

loc_809D6EE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_809D6EF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D6F00;
    }
}

loc_809D6EF4:
{
    r3 = MemoryInline::FlatRead16((r31 + 86));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 16);
    MemoryInline::FlatWriteRam16((r31 + 86), static_cast<uint16_t>(r0));
}

loc_809D6F00:
{
    r0 = MemoryInline::FlatRead16((r31 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_809D6F08:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(255))) {
        goto loc_809D6F1C;
    }
}

loc_809D6F0C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam16((r31 + 86), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 84), static_cast<uint8_t>(r0));
}

loc_809D6F1C:
{
    r3 = MemoryInline::FlatRead16((r31 + 86));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 68));
    r0 = (r0 & -256);
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r1 + 8);
    r5 = (r31 + r0);
    r4 = (r5 + 228);
    r5 = (r5 + 240);
    ctx->lr = 0x809D6F50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_809D6FC4;
}

loc_809D6F54:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_809D6F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D6F74;
    }
}

loc_809D6F68:
{
    r3 = MemoryInline::FlatRead16((r31 + 86));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -16);
    MemoryInline::FlatWriteRam16((r31 + 86), static_cast<uint16_t>(r0));
}

loc_809D6F74:
{
    r0 = MemoryInline::FlatRead16((r31 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_809D6F7C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_809D6F90;
    }
}

loc_809D6F80:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r31 + 86), static_cast<uint16_t>(r0));
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 84), static_cast<uint8_t>(r0));
}

loc_809D6F90:
{
    r3 = MemoryInline::FlatRead16((r31 + 86));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 68));
    r0 = (r0 & -256);
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r1 + 8);
    r5 = (r31 + r0);
    r4 = (r5 + 228);
    r5 = (r5 + 240);
    ctx->lr = 0x809D6FC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_809D6FC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D6C34 func_809D6C34 preserves=true fpr_mask=0x00000000
