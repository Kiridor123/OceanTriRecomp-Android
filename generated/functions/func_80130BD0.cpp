#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012ED54(CpuContext* ctx);
extern "C" uint32_t func_8012ED54_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80137784(CpuContext* ctx);
extern "C" uint64_t func_80137784_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80130BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80130BD0;

loc_80130BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r29 = r4;
    r31 = r5;
    r5 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r5 & 1);
}

loc_80130C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80130D24;
    }
}

loc_80130C04:
{
    r0 = (r5 & 524288);
}

loc_80130C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80130C14;
    }
}

loc_80130C10:
{
    goto loc_80130D24;
}

loc_80130C14:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80130C1C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80130C70;
    }
}

loc_80130C20:
{
    ctx->lr = 0x80130C24u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012ED54_8D8 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_8D8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80130C28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80130C70;
    }
}

loc_80130C2C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28208));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r29 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80130C68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130C70;
    }
}

loc_80130C6C:
{
    r29 = -1;
}

loc_80130C70:
{
    r3 = MemoryInline::FlatRead16((r30 + 2210));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r0 = (0 - r0);
}

loc_80130C80:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_80130CAC;
    }
}

loc_80130C84:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2210), static_cast<uint16_t>(r0));
    r3 = r30;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80130C98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80130D24;
    }
}

loc_80130C9C:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80130CA8u;
    if constexpr (KnownRegArgsCpuCall<0x80137784u>(&func_80137784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137784_14D1 = func_80137784_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137784_14D1);
        r4 = static_cast<uint32_t>(regargs_result_80137784_14D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137784u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80130D24;
}

loc_80130CAC:
{
    r0 = (r31 & 65535);
}

loc_80130CB4:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80130CBC;
    }
}

loc_80130CB8:
{
    r31 = r3;
}

loc_80130CBC:
{
    r3 = MemoryInline::FlatRead16((r30 + 2210));
    r0 = (r29 & 65535);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r30 + 2210), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = (r31 & 65535);
}

loc_80130CD8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80130CE0;
    }
}

loc_80130CDC:
{
    MemoryInline::FlatWrite16((r30 + 2210), static_cast<uint16_t>(r31));
}

loc_80130CE0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80130CE8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80130D24;
    }
}

loc_80130CEC:
{
    r3 = r30;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80130CF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80130D0C;
    }
}

loc_80130CFC:
{
    r3 = r30;
    r4 = 3;
    ctx->lr = 0x80130D08u;
    if constexpr (KnownRegArgsCpuCall<0x80137784u>(&func_80137784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137784_1E34 = func_80137784_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137784_1E34);
        r4 = static_cast<uint32_t>(regargs_result_80137784_1E34 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137784u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80130D24;
}

loc_80130D0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2207));
}

loc_80130D14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80130D24;
    }
}

loc_80130D18:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80130D24u;
    if constexpr (KnownRegArgsCpuCall<0x80137784u>(&func_80137784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137784_2269 = func_80137784_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137784_2269);
        r4 = static_cast<uint32_t>(regargs_result_80137784_2269 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137784u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80130D24:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80130BD0 func_80130BD0 preserves=true fpr_mask=0x00000000
