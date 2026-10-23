#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214F54(CpuContext* ctx);
extern "C" uint64_t func_80214F54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802150C0(CpuContext* ctx);
extern "C" uint64_t func_802150C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802151D4(CpuContext* ctx);
extern "C" uint64_t func_802151D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8033E9C4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_8033E9C4;

loc_8033E9C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = r3;
    r4 = 65536;
    r31 = (r4 + -1);
    r30 = r31;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 148u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
}

loc_8033E9F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8033EA18;
    }
}

loc_8033E9F4:
{
}

loc_8033E9F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8033EA4C;
    }
}

loc_8033E9FC:
{
}

loc_8033EA00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8033EAB8;
    }
}

loc_8033EA04:
{
}

loc_8033EA08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8033EB5C;
    }
}

loc_8033EA0C:
{
}

loc_8033EA10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8033ECA4;
    }
}

loc_8033EA14:
{
    goto loc_8033ECA8;
}

loc_8033EA18:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 80u, (r3 + 80));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 393);
    r31 = (r0 & 65535);
}

loc_8033EA28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EA2C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r0 & 128);
}

loc_8033EA40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EA44:
{
    r31 = 392;
    goto loc_8033ECA8;
}

loc_8033EA4C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_8033EA54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033EA64;
    }
}

loc_8033EA58:
{
}

loc_8033EA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8033EAA4;
    }
}

loc_8033EA60:
{
    goto loc_8033ECA8;
}

loc_8033EA64:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033EA6C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8033EA98;
    }
}

loc_8033EA70:
{
    r31 = 399;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 114u, (r3 + 114));
    r4 = 1;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 112u, (r3 + 112));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
}

loc_8033EA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EA90:
{
    r30 = 402;
    goto loc_8033ECA8;
}

loc_8033EA98:
{
    r31 = 400;
    r30 = 401;
    goto loc_8033ECA8;
}

loc_8033EAA4:
{
    r31 = 403;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r5 + 68));
    ctx->lr = 0x8033EAB4u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802151D4_1389 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_1389);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_1389 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8033ECA8;
}

loc_8033EAB8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_8033EAC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033EAE0;
    }
}

loc_8033EAC4:
{
}

loc_8033EAC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8033EB0C;
    }
}

loc_8033EACC:
{
}

loc_8033EAD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8033EB40;
    }
}

loc_8033EAD4:
{
}

loc_8033EAD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8033EB54;
    }
}

loc_8033EADC:
{
    goto loc_8033ECA8;
}

loc_8033EAE0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 118u, (r3 + 118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033EAE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(2))) {
        goto loc_8033EAF8;
    }
}

loc_8033EAEC:
{
    r31 = 405;
    r30 = 406;
    goto loc_8033ECA8;
}

loc_8033EAF8:
{
    r31 = 404;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r5 + 68));
    ctx->lr = 0x8033EB08u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802151D4_1E10 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_1E10);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_1E10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8033ECA8;
}

loc_8033EB0C:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 22));
}

loc_8033EB14:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_8033EB20;
    }
}

loc_8033EB18:
{
    r31 = 407;
    goto loc_8033ECA8;
}

loc_8033EB20:
{
    r31 = 408;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 112u, (r3 + 112));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8033EB34:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EB38:
{
    r30 = 409;
    goto loc_8033ECA8;
}

loc_8033EB40:
{
    r31 = 410;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r5 + 68));
    ctx->lr = 0x8033EB50u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802151D4_273B = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_273B);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_273B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8033ECA8;
}

loc_8033EB54:
{
    r31 = 411;
    goto loc_8033ECA8;
}

loc_8033EB5C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_8033EB64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033EB94;
    }
}

loc_8033EB68:
{
}

loc_8033EB6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8033EBBC;
    }
}

loc_8033EB70:
{
}

loc_8033EB74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8033EBC4;
    }
}

loc_8033EB78:
{
}

loc_8033EB7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8033EBF8;
    }
}

loc_8033EB80:
{
}

loc_8033EB84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8033EC0C;
    }
}

loc_8033EB88:
{
}

loc_8033EB8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8033EC90;
    }
}

loc_8033EB90:
{
    goto loc_8033ECA8;
}

loc_8033EB94:
{
    r31 = 412;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 114u, (r3 + 114));
    r4 = 1;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 112u, (r3 + 112));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
}

loc_8033EBB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EBB4:
{
    r30 = 413;
    goto loc_8033ECA8;
}

loc_8033EBBC:
{
    r31 = 414;
    goto loc_8033ECA8;
}

loc_8033EBC4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 54u, (r3 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 415);
    r31 = (r0 & 65535);
}

loc_8033EBD4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8033ECA8;
    }
}

loc_8033EBD8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 144));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 52u, (r3 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8033EBEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EBF0:
{
    r30 = 417;
    goto loc_8033ECA8;
}

loc_8033EBF8:
{
    r31 = 418;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r5 + 68));
    ctx->lr = 0x8033EC08u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802151D4_374C = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_374C);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_374C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8033ECA8;
}

loc_8033EC0C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_8033EC14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EC18:
{
    r31 = 419;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 56u, (r3 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 36));
    r0 = (r3 & 1);
}

loc_8033EC34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033EC40;
    }
}

loc_8033EC38:
{
    r30 = 420;
    goto loc_8033ECA8;
}

loc_8033EC40:
{
    r0 = (r3 & 2);
}

loc_8033EC48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033EC54;
    }
}

loc_8033EC4C:
{
    r30 = 421;
    goto loc_8033ECA8;
}

loc_8033EC54:
{
    r0 = (r3 & 48);
}

loc_8033EC5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033EC68;
    }
}

loc_8033EC60:
{
    r30 = 422;
    goto loc_8033ECA8;
}

loc_8033EC68:
{
    r0 = (r3 & 4);
}

loc_8033EC70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033EC7C;
    }
}

loc_8033EC74:
{
    r30 = 423;
    goto loc_8033ECA8;
}

loc_8033EC7C:
{
    r0 = (r3 & 8);
}

loc_8033EC84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033ECA8;
    }
}

loc_8033EC88:
{
    r30 = 424;
    goto loc_8033ECA8;
}

loc_8033EC90:
{
    r31 = 426;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r5 + 68));
    ctx->lr = 0x8033ECA0u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802151D4_444C = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_444C);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_444C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8033ECA8;
}

loc_8033ECA4:
{
    r31 = 427;
}

loc_8033ECA8:
{
    r0 = (r31 & 65535);
}

loc_8033ECB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8033ECDC;
    }
}

loc_8033ECB4:
{
    r3 = 6263;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    ctx->lr = 0x8033ECC0u;
    if constexpr (KnownRegArgsCpuCall<0x80214F54u>(&func_80214F54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80214F54_4B7F = func_80214F54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80214F54_4B7F);
        r4 = static_cast<uint32_t>(regargs_result_80214F54_4B7F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80214F54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r30 & 65535);
}

loc_8033ECC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8033ECDC;
    }
}

loc_8033ECCC:
{
    r3 = 6263;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r5 = 2;
    ctx->lr = 0x8033ECDCu;
    if constexpr (KnownRegArgsCpuCall<0x802150C0u>(&func_802150C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802150C0_5269 = func_802150C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802150C0_5269);
        r4 = static_cast<uint32_t>(regargs_result_802150C0_5269 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802150C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8033ECDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033E9C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033E9C4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033E9C4 func_8033E9C4 preserves=true fpr_mask=0x00000000
