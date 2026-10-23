#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274ED0(CpuContext* ctx);
extern "C" uint64_t func_80274ED0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80317BE8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80317BE8;

loc_80317BE8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r21 = r3;
    r22 = r5;
    r23 = r6;
    r30 = MemoryInline::FlatRead32(r4);
    r20 = MemoryInline::FlatRead32((r4 + 4));
    r29 = MemoryInline::FlatRead32((r4 + 8));
    r28 = MemoryInline::FlatRead32((r4 + 12));
    r19 = MemoryInline::FlatRead32((r4 + 16));
    r27 = MemoryInline::FlatRead32((r4 + 20));
    r26 = 0;
    r31 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    r25 = 0;
    r24 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_9BB = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_9BB;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80317C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317E14;
    }
}

loc_80317C48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317C60;
    }
}

loc_80317C4C:
{
}

loc_80317C50:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80317D70;
    }
}

loc_80317C54:
{
}

loc_80317C58:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80317C78;
    }
}

loc_80317C5C:
{
    goto loc_80317F94;
}

loc_80317C60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_80317C64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317F54;
    }
}

loc_80317C68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317F94;
    }
}

loc_80317C6C:
{
}

loc_80317C70:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_80317F10;
    }
}

loc_80317C74:
{
    goto loc_80317EB8;
}

loc_80317C78:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317C80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80317C8C;
    }
}

loc_80317C84:
{
}

loc_80317C88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317F94;
    }
}

loc_80317C8C:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317C94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80317CA0;
    }
}

loc_80317C98:
{
}

loc_80317C9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317CE0;
    }
}

loc_80317CA0:
{
    r3 = r28;
    ctx->lr = 0x80317CA8u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_1365 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_1365);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_1365 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80317CAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80317CE4;
    }
}

loc_80317CB0:
{
    r24 = MemoryInline::FlatRead8((r3 + 7));
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317CBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317CCC;
    }
}

loc_80317CC0:
{
    r0 = (r24 + 6);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80317CE4;
}

loc_80317CCC:
{
}

loc_80317CD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317CE4;
    }
}

loc_80317CD4:
{
    r0 = (r24 + 10);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80317CE4;
}

loc_80317CE0:
{
    r22 = (r22 & 247);
}

loc_80317CE4:
{
    r3 = r30;
    ctx->lr = 0x80317CECu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_1985 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_1985);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_1985 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80317CF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80317CF8;
    }
}

loc_80317CF4:
{
    r25 = MemoryInline::FlatRead8((r3 + 7));
}

loc_80317CF8:
{
    r26 = (r26 | 1);
    r4 = MemoryInline::FlatRead8(r30);
}

loc_80317D04:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(11))) {
        goto loc_80317D14;
    }
}

loc_80317D08:
{
    r0 = (r25 + 6);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80317D24;
}

loc_80317D14:
{
}

loc_80317D18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(13))) {
        goto loc_80317D24;
    }
}

loc_80317D1C:
{
    r0 = (r25 + 10);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80317D24:
{
    r3 = (r22 & 255);
    r0 = (r3 & 8);
}

loc_80317D30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317F94;
    }
}

loc_80317D34:
{
    r0 = (r3 & 1);
}

loc_80317D3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317F94;
    }
}

loc_80317D40:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80317D4C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80317F94;
    }
}

loc_80317D50:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317D58:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80317F94;
    }
}

loc_80317D5C:
{
    r0 = 4;
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80317D68;
    }
}

loc_80317D64:
{
    r0 = 2;
}

loc_80317D68:
{
    r26 = (r26 | r0);
    goto loc_80317F94;
}

loc_80317D70:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317D78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317DB4;
    }
}

loc_80317D7C:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_80317D84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317DB4;
    }
}

loc_80317D88:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80317D90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317DB4;
    }
}

loc_80317D94:
{
    r3 = r21;
    r4 = r28;
    r5 = r27;
    r6 = (r1 + 8);
    ctx->lr = 0x80317DA8u;
    if constexpr (KnownRegArgsCpuCall<0x80274ED0u>(&func_80274ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80274ED0_2668 = func_80274ED0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274ED0_2668);
        r4 = static_cast<uint32_t>(regargs_result_80274ED0_2668 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r24 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    goto loc_80317DB8;
}

loc_80317DB4:
{
    r22 = (r22 & 247);
}

loc_80317DB8:
{
    r3 = r21;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x80317DCCu;
    if constexpr (KnownRegArgsCpuCall<0x80274ED0u>(&func_80274ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80274ED0_2AE5 = func_80274ED0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274ED0_2AE5);
        r4 = static_cast<uint32_t>(regargs_result_80274ED0_2AE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = (r3 & 255);
    r26 = (r26 | 1);
    r3 = (r22 & 255);
    r0 = (r3 & 8);
}

loc_80317DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317F94;
    }
}

loc_80317DE4:
{
    r0 = (r3 & 1);
}

loc_80317DEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317F94;
    }
}

loc_80317DF0:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80317DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317F94;
    }
}

loc_80317E00:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317E0C;
    }
}

loc_80317E08:
{
    r0 = 2;
}

loc_80317E0C:
{
    r26 = (r26 | r0);
    goto loc_80317F94;
}

loc_80317E14:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317E1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317E58;
    }
}

loc_80317E20:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_80317E28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317E58;
    }
}

loc_80317E2C:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80317E34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317E58;
    }
}

loc_80317E38:
{
    r3 = 0;
    r4 = r28;
    r5 = r27;
    r6 = (r1 + 8);
    ctx->lr = 0x80317E4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80274ED0u>(&func_80274ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80274ED0_348C = func_80274ED0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274ED0_348C);
        r4 = static_cast<uint32_t>(regargs_result_80274ED0_348C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r24 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    goto loc_80317E5C;
}

loc_80317E58:
{
    r22 = (r22 & 247);
}

loc_80317E5C:
{
    r3 = 0;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x80317E70u;
    if constexpr (KnownRegArgsCpuCall<0x80274ED0u>(&func_80274ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80274ED0_3907 = func_80274ED0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274ED0_3907);
        r4 = static_cast<uint32_t>(regargs_result_80274ED0_3907 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = (r3 & 255);
    r26 = (r26 | 1);
    r3 = (r22 & 255);
    r0 = (r3 & 8);
}

loc_80317E84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317F94;
    }
}

loc_80317E88:
{
    r0 = (r3 & 1);
}

loc_80317E90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317F94;
    }
}

loc_80317E94:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80317EA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317F94;
    }
}

loc_80317EA4:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317EB0;
    }
}

loc_80317EAC:
{
    r0 = 2;
}

loc_80317EB0:
{
    r26 = (r26 | r0);
    goto loc_80317F94;
}

loc_80317EB8:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317EC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80317ECC;
    }
}

loc_80317EC4:
{
}

loc_80317EC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317F94;
    }
}

loc_80317ECC:
{
    r3 = r30;
    ctx->lr = 0x80317ED4u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_4166 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_4166);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_4166 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80317ED8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80317EE0;
    }
}

loc_80317EDC:
{
    r25 = MemoryInline::FlatRead8((r3 + 7));
}

loc_80317EE0:
{
    r26 = (r26 | 1);
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317EEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317EFC;
    }
}

loc_80317EF0:
{
    r0 = (r25 + 6);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80317F94;
}

loc_80317EFC:
{
}

loc_80317F00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317F94;
    }
}

loc_80317F04:
{
    r0 = (r25 + 10);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80317F94;
}

loc_80317F10:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317F18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317F94;
    }
}

loc_80317F1C:
{
    r0 = MemoryInline::FlatRead8(r20);
}

loc_80317F24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317F94;
    }
}

loc_80317F28:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80317F30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317F94;
    }
}

loc_80317F34:
{
    r3 = r21;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x80317F48u;
    if constexpr (KnownRegArgsCpuCall<0x80274ED0u>(&func_80274ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80274ED0_4A22 = func_80274ED0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274ED0_4A22);
        r4 = static_cast<uint32_t>(regargs_result_80274ED0_4A22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = (r3 & 255);
    r26 = (r26 | 1);
    goto loc_80317F94;
}

loc_80317F54:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317F5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317F94;
    }
}

loc_80317F60:
{
    r0 = MemoryInline::FlatRead8(r20);
}

loc_80317F68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317F94;
    }
}

loc_80317F6C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80317F74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317F94;
    }
}

loc_80317F78:
{
    r3 = 0;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x80317F8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80274ED0u>(&func_80274ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80274ED0_5077 = func_80274ED0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274ED0_5077);
        r4 = static_cast<uint32_t>(regargs_result_80274ED0_5077 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = (r3 & 255);
    r26 = (r26 | 1);
}

loc_80317F94:
{
    r0 = (r26 & 255);
    r0 = (r0 & 1);
}

loc_80317FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317FDC;
    }
}

loc_80317FA4:
{
    r0 = (r22 & 255);
    r0 = (r0 & 4);
}

loc_80317FB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317FD8;
    }
}

loc_80317FB4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80317FBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80317FCC;
    }
}

loc_80317FC0:
{
}

loc_80317FC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80317FD4;
    }
}

loc_80317FC8:
{
    goto loc_80317FD8;
}

loc_80317FCC:
{
    r26 = (r26 | 8);
    goto loc_80317FD8;
}

loc_80317FD4:
{
    r26 = (r26 | 16);
}

loc_80317FD8:
{
    MemoryInline::FlatWrite16(r23, static_cast<uint16_t>(r25));
}

loc_80317FDC:
{
    r3 = r26;
    r11 = (r1 + 80);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80317BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80317BE8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80317BE8 func_80317BE8 preserves=true fpr_mask=0x00000000
