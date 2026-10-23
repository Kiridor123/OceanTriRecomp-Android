#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F6B2C(CpuContext* ctx);
extern "C" uint64_t func_800F6B2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800F6BD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800F6BD0;

loc_800F6BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r27 = r5;
    r30 = r6;
    r31 = r7;
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800F6B2Cu>(&func_800F6B2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F6B2C_964 = func_800F6B2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F6B2C_964);
        r4 = static_cast<uint32_t>(regargs_result_800F6B2C_964 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F6B2Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800F6C04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F6DFC;
    }
}

loc_800F6C08:
{
    r0 = (r28 & 255);
}

loc_800F6C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F6C28;
    }
}

loc_800F6C14:
{
}

loc_800F6C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800F6D08;
    }
}

loc_800F6C1C:
{
}

loc_800F6C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800F6D5C;
    }
}

loc_800F6C24:
{
    goto loc_800F6DB4;
}

loc_800F6C28:
{
    r0 = (r29 & 255);
}

loc_800F6C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800F6C48;
    }
}

loc_800F6C34:
{
}

loc_800F6C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800F6C78;
    }
}

loc_800F6C3C:
{
}

loc_800F6C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800F6CD8;
    }
}

loc_800F6C44:
{
    goto loc_800F6DBC;
}

loc_800F6C48:
{
    r0 = (r27 & 255);
}

loc_800F6C50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F6C68;
    }
}

loc_800F6C54:
{
    r4 = MemoryInline::FlatRead32((r13 + -17356));
    r0 = (r30 & 255);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r4_addr_12 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_12);
    goto loc_800F6DBC;
}

loc_800F6C68:
{
    r4 = MemoryInline::FlatRead32((r13 + -17336));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r4_addr_13 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_13);
    goto loc_800F6DBC;
}

loc_800F6C78:
{
    r0 = (r27 & 255);
}

loc_800F6C80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F6C98;
    }
}

loc_800F6C84:
{
    r4 = MemoryInline::FlatRead32((r13 + -17352));
    r0 = (r30 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4_addr_9 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_9);
    goto loc_800F6DBC;
}

loc_800F6C98:
{
}

loc_800F6C9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800F6CB8;
    }
}

loc_800F6CA0:
{
    r4 = MemoryInline::FlatRead32((r13 + -17352));
    r0 = (r30 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4_addr_10 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_10);
    r29 = 2;
    goto loc_800F6DBC;
}

loc_800F6CB8:
{
    r4 = MemoryInline::FlatRead32((r13 + -17348));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4_addr_11 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_11);
    r0 = (r30 & 255);
}

loc_800F6CCC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F6DBC;
    }
}

loc_800F6CD0:
{
    r29 = 2;
    goto loc_800F6DBC;
}

loc_800F6CD8:
{
    r0 = (r27 & 255);
}

loc_800F6CE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F6CF8;
    }
}

loc_800F6CE4:
{
    r4 = MemoryInline::FlatRead32((r13 + -17344));
    r0 = (r30 & 255);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4_addr_7 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_7);
    goto loc_800F6DBC;
}

loc_800F6CF8:
{
    r4 = MemoryInline::FlatRead32((r13 + -17340));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4_addr_8 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_8);
    goto loc_800F6DBC;
}

loc_800F6D08:
{
    r0 = (r29 & 255);
}

loc_800F6D10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800F6D28;
    }
}

loc_800F6D14:
{
}

loc_800F6D18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800F6D3C;
    }
}

loc_800F6D1C:
{
}

loc_800F6D20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800F6D50;
    }
}

loc_800F6D24:
{
    goto loc_800F6DBC;
}

loc_800F6D28:
{
    r4 = MemoryInline::FlatRead32((r13 + -17368));
    r0 = (r27 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4_addr_6 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_6);
    goto loc_800F6DBC;
}

loc_800F6D3C:
{
    r4 = MemoryInline::FlatRead32((r13 + -17376));
    r0 = (r27 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    goto loc_800F6DBC;
}

loc_800F6D50:
{
    r4 = MemoryInline::FlatRead32((r13 + -17372));
    r31 = r27;
    goto loc_800F6DBC;
}

loc_800F6D5C:
{
    r4 = (r29 & 255);
    r0 = (r4 + -1);
}

loc_800F6D68:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800F6D94;
    }
}

loc_800F6D6C:
{
}

loc_800F6D70:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_800F6DBC;
    }
}

loc_800F6D74:
{
    r4 = MemoryInline::FlatRead32((r13 + -17360));
    r0 = (r27 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = (r30 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    goto loc_800F6DBC;
}

loc_800F6D94:
{
    r4 = MemoryInline::FlatRead32((r13 + -17364));
    r0 = (r27 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_3 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    r0 = (r30 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4_addr_4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    goto loc_800F6DBC;
}

loc_800F6DB4:
{
    r3 = 255;
    goto loc_800F6E00;
}

loc_800F6DBC:
{
}

loc_800F6DC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F6DFC;
    }
}

loc_800F6DC4:
{
    r0 = (r31 & 255);
    r4_addr_15 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_15);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_800F6DD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800F6DF4;
    }
}

loc_800F6DDC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_800F6E00;
}

loc_800F6DF4:
{
    r3 = 255;
    goto loc_800F6E00;
}

loc_800F6DFC:
{
    r3 = 255;
}

loc_800F6E00:
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
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F6BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F6BD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F6BD0 func_800F6BD0 preserves=true fpr_mask=0x00000000
