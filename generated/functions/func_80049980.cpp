#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004BDBC(CpuContext* ctx);
extern "C" uint64_t func_8004BDBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004C578(CpuContext* ctx);
extern "C" uint64_t func_8004C578_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004CA04(CpuContext* ctx);
extern "C" uint64_t func_8004CA04_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004CE08(CpuContext* ctx);
extern "C" uint64_t func_8004CE08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004E888(CpuContext* ctx);
extern "C" uint64_t func_8004E888_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005BEA4(CpuContext* ctx);
extern "C" uint32_t func_8005BEA4_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80049980_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80049980u);
    goto loc_80049980;

loc_80049980:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r29 = r3;
    r3 = (r3 + 32);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 44);
    r4 = 0;
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 68);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 80);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 92);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 104);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 116);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 128);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 160);
    r4 = 0;
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 256);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 384);
    r4 = 0;
    r5 = 3200;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18394);
    r4 = 0;
    r5 = 88;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r26 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 15873), 0, 2619u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 15873), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved32(guest_range_0, 259u, (r29 + 16132), r26);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r29 + 15874), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite32((r29 + 24), r26);
    r0 = 36;
    MemoryInline::WriteResolved8(guest_range_0, 2617u, (r29 + 18490), static_cast<uint8_t>(r0));
    r0 = 44;
    MemoryInline::WriteResolved8(guest_range_0, 404u, (r29 + 16277), static_cast<uint8_t>(r0));
    r0 = 9;
    MemoryInline::WriteResolved8(guest_range_0, 405u, (r29 + 16278), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::WriteResolved8(guest_range_0, 406u, (r29 + 16279), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2618u, (r29 + 18491), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r29 + 15875), static_cast<uint8_t>(r26));
    r0 = 60;
    MemoryInline::FlatWrite32((r29 + 20892), r0);
    MemoryInline::FlatWrite16((r29 + 20896), static_cast<uint16_t>(r26));
    MemoryInline::FlatWrite16((r29 + 20898), static_cast<uint16_t>(r26));
    MemoryInline::FlatWrite8((r29 + 20900), static_cast<uint8_t>(r26));
    r25 = 1;
    MemoryInline::FlatWrite8((r29 + 20901), static_cast<uint8_t>(r25));
    r3 = (r29 + 20902);
    r4 = 0;
    r5 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 16184);
    r4 = 0;
    r5 = 36;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 16280);
    r4 = 0;
    r5 = 224;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18004);
    r4 = 0;
    r5 = 30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18482);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18512);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18528);
    r4 = 0;
    r5 = 120;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18648);
    r4 = 0;
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18904);
    r4 = 0;
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 18492);
    r4 = 255;
    r5 = 17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 21104);
    r4 = 0;
    r5 = 28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80049B6C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80049B8C;
    }
}

loc_80049B70:
{
}

loc_80049B74:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(1))) {
        goto loc_80049B94;
    }
}

loc_80049B78:
{
}

loc_80049B7C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(2))) {
        goto loc_80049B9C;
    }
}

loc_80049B80:
{
}

loc_80049B84:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(-1))) {
        goto loc_80049BA4;
    }
}

loc_80049B88:
{
    goto loc_80049BA8;
}

loc_80049B8C:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r26));
    goto loc_80049BA8;
}

loc_80049B94:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r25));
    goto loc_80049BA8;
}

loc_80049B9C:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r26));
    goto loc_80049BA8;
}

loc_80049BA4:
{
    r27 = 3;
}

loc_80049BA8:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 152), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 154), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 146), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 148), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 150), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 156), static_cast<uint16_t>(r0));
    r3 = r29;
    r0 = (r27 * 84);
    r4 = 0x80580000u;
    r4 = (r4 + 7080);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_0);
    r5 = 1;
    ctx->lr = 0x80049BE4u;
    if constexpr (KnownRegArgsCpuCall<0x8004C578u>(&func_8004C578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8004C578_2BA4 = func_8004C578_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C578_2BA4);
        r4 = static_cast<uint32_t>(regargs_result_8004C578_2BA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004C578u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = r3;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r0 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x80049BFCu;
    if constexpr (KnownRegArgsCpuCall<0x8004CA04u>(&func_8004CA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8004CA04_314A = func_8004CA04_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004CA04_314A);
        r4 = static_cast<uint32_t>(regargs_result_8004CA04_314A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004CA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r29;
    ctx->lr = 0x80049C04u;
    if constexpr (KnownRegArgsCpuCall<0x8004CE08u>(&func_8004CE08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8004CE08_35A1 = func_8004CE08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004CE08_35A1);
        r4 = static_cast<uint32_t>(regargs_result_8004CE08_35A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004CE08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r29;
    r4 = 7;
    r5 = 1;
    ctx->lr = 0x80049C14u;
    if constexpr (KnownRegArgsCpuCall<0x8004C578u>(&func_8004C578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8004C578_3A60 = func_8004C578_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C578_3A60);
        r4 = static_cast<uint32_t>(regargs_result_8004C578_3A60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004C578u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r29;
    ctx->lr = 0x80049C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8004AED4_3F6F = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_3F6F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = (r3 & 65535);
    r3 = (r29 + 384);
    r5 = 522;
    r6 = 1;
    r7 = (r1 + 10);
    ctx->lr = 0x80049C34u;
    if constexpr (KnownRegArgsCpuCall<0x8004BDBCu>(&func_8004BDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8004BDBC_4348 = func_8004BDBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BDBC_4348);
        r4 = static_cast<uint32_t>(regargs_result_8004BDBC_4348 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004BDBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80049C38:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(3))) {
        goto loc_80049C48;
    }
}

loc_80049C3C:
{
    r3 = 1194786816;
    r0 = (r3 + 13823);
    MemoryInline::FlatWrite32((r29 + 20), r0);
}

loc_80049C48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 14778), static_cast<uint8_t>(r0));
    r25 = 0;
}

loc_80049C54:
{
    r3 = r29;
    r4 = (r25 & 255);
    // inline leaf 0x8004D82C (17 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 42);
    r4 = (r3 + r0);
    r3 = 65536;
    r0 = (r3 + -1);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 13184), 0, 19u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r4 + 13184), r0);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r4 + 13186), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r4 + 13188), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r4 + 13196), r0);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r4 + 13198), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r4 + 13190), r0);
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r4 + 13192), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r4 + 13194), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r4 + 13200), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r4 + 13202), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004D82C
    r25 = (r25 + 1);
}

loc_80049C68:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(20))) {
        goto loc_80049C54;
    }
}

loc_80049C6C:
{
    r25 = 0;
}

loc_80049C70:
{
    r3 = r29;
    r4 = (r25 & 255);
    // inline leaf 0x8004DBA4 (11 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 30);
    r4 = (r3 + r0);
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 14024), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 14026), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 14028), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 14030), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004DBA4
    r25 = (r25 + 1);
}

loc_80049C84:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(20))) {
        goto loc_80049C70;
    }
}

loc_80049C88:
{
    r27 = 0;
    r26 = r29;
    r3 = 715849728;
    r25 = (r3 + -21845);
}

loc_80049C98:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl4_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl4_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CEF40;
    }
}

loc_inl4_0x800CEF3C:
{
    r0 = 1;
}

loc_inl4_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl4_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    MemoryInline::FlatWrite16((r26 + 21120), static_cast<uint16_t>(r3));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl5_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl5_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CEF40;
    }
}

loc_inl5_0x800CEF3C:
{
    r0 = 1;
}

loc_inl5_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl5_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r25)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 6);
    r0 = (r4 - r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r29 + r27);
    MemoryInline::FlatWrite8((r3 + 21112), static_cast<uint8_t>(r0));
    r26 = (r26 + 2);
    r27 = (r27 + 1);
}

loc_80049CDC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_80049C98;
    }
}

loc_80049CE0:
{
    r3 = (r29 + 14688);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x80580000u;
    r7 = (r3 + 7416);
    r3 = 1;
    goto loc_80049D28;
}

loc_80049D00:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (static_cast<int32_t>(r6) >> 3);
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 14688));
    r0 = (r6 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r5 + 14688), static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_80049D28:
{
    r6 = MemoryInline::FlatRead8(r7);
}

loc_80049D30:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(255))) {
        goto loc_80049D00;
    }
}

loc_80049D34:
{
    r3 = (r29 + 14770);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 65536;
    r0 = (r3 + -1);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 14754), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r29 + 14754), r0);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r29 + 14756), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r29 + 14758), r0);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r29 + 14760), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r29 + 14762), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r29 + 14764), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r29 + 14766), r0);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r29 + 14768), r0);
    }
    r3 = (r29 + 16504);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 14752), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r29 + 14753), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r29 + 14780), r0);
    MemoryInline::FlatWrite8((r29 + 15846), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 15847), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r29 + 21218), static_cast<uint16_t>(r3));
    r3 = 32;
    ctx->lr = 0x80049DA8u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_6BAD = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_6BAD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r28 = 0;
    r30 = (r29 + 16660);
    r29 = r3;
    r31 = 0x80000000u;
}

loc_80049DB8:
{
    r3 = r30;
    r4 = 0;
    r5 = 37;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r27 = MemoryInline::FlatRead32(r29);
    r26 = r30;
    r25 = 30;
}

loc_80049DD4:
{
    r3 = r27;
    ctx->lr = 0x80049DDCu;
    if constexpr (KnownRegArgsCpuCall<0x8005BEA4u>(&func_8005BEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005BEA4_6FB2 = func_8005BEA4_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_8005BEA4_6FB2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005BEA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80049DE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80049DF4;
    }
}

loc_80049DE4:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80049DF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80049ECC;
    }
}

loc_80049DF4:
{
    r0 = (r25 - r3);
}

loc_80049DFC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80049ECC;
    }
}

loc_80049E00:
{
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80049E08:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80049EC4;
    }
}

loc_80049E0C:
{
    r4 = (r3 + -8);
}

loc_80049E14:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_80049E9C;
    }
}

loc_80049E18:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80049E30;
    }
}

loc_80049E20:
{
    r0 = (r31 + -2);
}

loc_80049E28:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_80049E30;
    }
}

loc_80049E2C:
{
    r5 = 1;
}

loc_80049E30:
{
}

loc_80049E34:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80049E9C;
    }
}

loc_80049E38:
{
    r0 = (r4 + 7);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    ctr = r0;
}

loc_80049E48:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80049E9C;
    }
}

loc_80049E4C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r27, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r27);
    guest_range_5 = MemoryInline::ResolveRangeHost(r26, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r26, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r27 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r26 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r27 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r26 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r27 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r26 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r27 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r26 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r27 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r26 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r27 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r26 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r27 + 7));
    r27 = (r27 + 8);
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r26 + 7), static_cast<uint8_t>(r0));
    r26 = (r26 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80049E4C;
    }
}

loc_80049E9C:
{
    r0 = (r3 - r6);
    ctr = r0;
}

loc_80049EA8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r3))) {
        goto loc_80049EC4;
    }
}

loc_80049EAC:
{
    r0 = MemoryInline::FlatRead8(r27);
    r27 = (r27 + 1);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r26 = (r26 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80049EAC;
    }
}

loc_80049EC4:
{
    r25 = (r25 - r3);
    goto loc_80049DD4;
}

loc_80049ECC:
{
    r30 = (r30 + 37);
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_80049EDC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(12))) {
        goto loc_80049DB8;
    }
}

loc_80049EE0:
{
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8004E888u>(&func_8004E888)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8004E888_8316 = func_8004E888_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8004E888_8316);
        r4 = static_cast<uint32_t>(regargs_result_8004E888_8316 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004E888u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80049980(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80049980_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80049980 func_80049980 preserves=true fpr_mask=0x00000000
