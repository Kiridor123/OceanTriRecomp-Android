#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CC7B0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804CC7B0;

loc_804CC7B0:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = -847249408;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r31 = r3;
    r5 = MemoryHw::FlatRead32((r4 + 384));
    r5 = (r5 & -257);
    r5 = (r5 | r0);
    r0 = (r5 & -129);
    MemoryHw::FlatWrite32((r4 + 384), r0);
    r0 = MemoryHw::FlatRead32((r4 + 464));
    r0 = (r0 & 1073741823);
    MemoryHw::FlatWrite32((r4 + 464), r0);
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r4 = 1125908480;
    r28 = r3;
    r30 = (r4 + -8573);
    r29 = 0x80000000u;
}

loc_804CC80C:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r0 = MemoryHw::FlatRead32((r29 + 248));
    r3 = (r3 - r28);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_3 & 131071);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_804CC830:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_804CC80C;
    }
}

loc_804CC834:
{
}

loc_804CC838:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804CC864;
    }
}

loc_804CC83C:
{
    r4 = -847249408;
    r3 = -133955584;
    r5 = MemoryHw::FlatRead32((r4 + 460));
    r0 = (r3 + -64);
    r3 = (r5 & -262081);
    r3 = (r3 | 4032);
    r0 = (r3 & r0);
    r0 = (r0 | 73662464);
    MemoryHw::FlatWrite32((r4 + 460), r0);
    goto loc_804CC888;
}

loc_804CC864:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 460));
    r0 = (r0 & -262081);
    r0 = (r0 | 65472);
    r0 = (r0 & -64);
    r0 = (r0 | 14);
    r0 = (r0 & -133955585);
    r0 = (r0 | 78643200);
    MemoryHw::FlatWrite32((r3 + 460), r0);
}

loc_804CC888:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r4 = 1125908480;
    r31 = r3;
    r30 = (r4 + -8573);
    r29 = 0x80000000u;
}

loc_804CC89C:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r0 = MemoryHw::FlatRead32((r29 + 248));
    r3 = (r3 - r31);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & -8);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_5 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_6 & 131071);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_804CC8C0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_804CC89C;
    }
}

loc_804CC8C4:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 464));
    r0 = (r0 & -268435457);
    MemoryHw::FlatWrite32((r3 + 464), r0);
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r4 = 1125908480;
    r31 = r3;
    r30 = (r4 + -8573);
    r29 = 0x80000000u;
}

loc_804CC8E8:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r0 = MemoryHw::FlatRead32((r29 + 248));
    r3 = (r3 - r31);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_6 & -8);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_8 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_9 & 131071);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_804CC90C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_804CC8E8;
    }
}

loc_804CC910:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 464));
    r0 = (r0 & -1073741825);
    r0 = (r0 | 1073741824);
    MemoryHw::FlatWrite32((r3 + 464), r0);
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r4 = 1125908480;
    r31 = r3;
    r30 = (r4 + -8573);
    r29 = 0x80000000u;
}

loc_804CC938:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r0 = MemoryHw::FlatRead32((r29 + 248));
    r3 = (r3 - r31);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_8 & -8);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_11 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_12 & 131071);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_804CC95C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_804CC938;
    }
}

loc_804CC960:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 464));
    r0 = (r0 & 2147483647);
    r0 = (r0 | -2147483648);
    MemoryHw::FlatWrite32((r3 + 464), r0);
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r4 = 1125908480;
    r29 = r3;
    r30 = (r4 + -8573);
    r31 = 0x80000000u;
}

loc_804CC988:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r0 = MemoryHw::FlatRead32((r31 + 248));
    r3 = (r3 - r29);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_10 & -8);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_14 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_15 & 131071);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_804CC9AC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_804CC988;
    }
}

loc_804CC9B0:
{
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_804CC7B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CC7B0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CC7B0 func_804CC7B0 preserves=true fpr_mask=0x00000000
