#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t mkw_fifo_burst_0[80];
    uint8_t mkw_fifo_burst_1[80];
    uint8_t mkw_fifo_burst_2[80];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804B9230u);
    goto loc_804B9230;

loc_804B9230:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_804B9238:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_804B9250;
    }
}

loc_804B9244:
{
}

loc_804B9248:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_804B935C;
    }
}

loc_804B924C:
{
    goto loc_804B9468;
}

loc_804B9250:
{
    r3 = -872349696;
    r0 = 97;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r0);
    r4 = 0x8C0E0000u;
    r4 = (r4 + -32768);
    r5 = 0x900E0000u;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = 0x8D0E0000u;
    r31 = 0x910E0000u;
    r30 = 0x8E0E0000u;
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r0);
    r5 = (r5 + -16384);
    r12 = 0x920E0000u;
    r11 = 0x8F0E0000u;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r10 = 0x930E0000u;
    r9 = -1408368640;
    r8 = -1341259776;
    mkw_fifo_burst_0[10] = static_cast<uint8_t>(r0);
    r4 = (r4 + -30720);
    r7 = -1391591424;
    r6 = -1324482560;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r5 = -1374814208;
    r4 = -1307705344;
    r31 = (r31 + -14336);
    mkw_fifo_burst_0[15] = static_cast<uint8_t>(r0);
    r30 = (r30 + -28672);
    r12 = (r12 + -12288);
    r11 = (r11 + -26624);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r10 = (r10 + -10240);
    r9 = (r9 + -24576);
    r8 = (r8 + -15360);
    mkw_fifo_burst_0[20] = static_cast<uint8_t>(r0);
    r7 = (r7 + -22528);
    r6 = (r6 + -13312);
    r5 = (r5 + -20480);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r30);
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[24] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r4 + -11264);
    mkw_fifo_burst_0[25] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r12);
        mkw_fifo_burst_0[26] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[27] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[28] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[29] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[30] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r11);
        mkw_fifo_burst_0[31] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[32] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[33] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[34] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[35] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r10);
        mkw_fifo_burst_0[36] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[37] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[38] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[39] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[40] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r9);
        mkw_fifo_burst_0[41] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[42] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[43] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[44] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[45] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r8);
        mkw_fifo_burst_0[46] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[47] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[48] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[49] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[50] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_0[51] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[52] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[53] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[54] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[55] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[56] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[57] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[58] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[59] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[60] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[61] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[62] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[63] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[64] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[65] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[66] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[67] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[68] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[69] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[70] = static_cast<uint8_t>(r0);
    r5 = -1358036992;
    r4 = -1290928128;
    r5 = (r5 + -18432);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[71] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[72] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[73] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[74] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r4 + -9216);
    mkw_fifo_burst_0[75] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[76] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[77] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[78] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[79] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 80u);
    goto loc_804B9570;
}

loc_804B935C:
{
    r3 = -872349696;
    r0 = 97;
    mkw_fifo_burst_1[0] = static_cast<uint8_t>(r0);
    r4 = 0x8C0E0000u;
    r4 = (r4 + -32768);
    r5 = 0x900E0000u;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_1[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = 0x8D0E0000u;
    r31 = 0x910E0000u;
    r30 = 0x8E0E0000u;
    mkw_fifo_burst_1[5] = static_cast<uint8_t>(r0);
    r5 = (r5 + -16384);
    r12 = 0x920E0000u;
    r11 = 0x8F0E0000u;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r10 = 0x930E0000u;
    r9 = -1408368640;
    r8 = -1341259776;
    mkw_fifo_burst_1[10] = static_cast<uint8_t>(r0);
    r4 = (r4 + -30720);
    r7 = -1391591424;
    r6 = -1324482560;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_1[11] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[12] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r5 = -1374814208;
    r4 = -1307705344;
    r31 = (r31 + -14336);
    mkw_fifo_burst_1[15] = static_cast<uint8_t>(r0);
    r30 = (r30 + -28672);
    r12 = (r12 + -12288);
    r11 = (r11 + -26624);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_1[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r10 = (r10 + -10240);
    r9 = (r9 + -24576);
    r8 = (r8 + -8192);
    mkw_fifo_burst_1[20] = static_cast<uint8_t>(r0);
    r7 = (r7 + -22528);
    r6 = (r6 + -6144);
    r5 = (r5 + -20480);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r30);
        mkw_fifo_burst_1[21] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[22] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[23] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[24] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r4 + -4096);
    mkw_fifo_burst_1[25] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r12);
        mkw_fifo_burst_1[26] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[27] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[28] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[29] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[30] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r11);
        mkw_fifo_burst_1[31] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[32] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[33] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[34] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[35] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r10);
        mkw_fifo_burst_1[36] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[37] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[38] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[39] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[40] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r9);
        mkw_fifo_burst_1[41] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[42] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[43] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[44] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[45] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r8);
        mkw_fifo_burst_1[46] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[47] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[48] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[49] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[50] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_1[51] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[52] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[53] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[54] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[55] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_1[56] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[57] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[58] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[59] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[60] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_1[61] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[62] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[63] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[64] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[65] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_1[66] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[67] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[68] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[69] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[70] = static_cast<uint8_t>(r0);
    r5 = -1358036992;
    r4 = -1290928128;
    r5 = (r5 + -18432);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_1[71] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[72] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[73] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[74] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r4 + -2048);
    mkw_fifo_burst_1[75] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_1[76] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[77] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[78] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[79] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 80u);
    goto loc_804B9570;
}

loc_804B9468:
{
    r3 = -872349696;
    r0 = 97;
    mkw_fifo_burst_2[0] = static_cast<uint8_t>(r0);
    r4 = 0x8C0E0000u;
    r4 = (r4 + -32768);
    r5 = 0x900E0000u;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_2[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = 0x8D0E0000u;
    r30 = 0x910E0000u;
    r31 = 0x8E0E0000u;
    mkw_fifo_burst_2[5] = static_cast<uint8_t>(r0);
    r5 = (r5 + -16384);
    r12 = 0x920E0000u;
    r11 = 0x8F0E0000u;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r10 = 0x930E0000u;
    r9 = -1408368640;
    r8 = -1341259776;
    mkw_fifo_burst_2[10] = static_cast<uint8_t>(r0);
    r4 = (r4 + -31744);
    r7 = -1391591424;
    r6 = -1324482560;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_2[11] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[12] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r5 = -1374814208;
    r4 = -1307705344;
    r30 = (r30 + -15360);
    mkw_fifo_burst_2[15] = static_cast<uint8_t>(r0);
    r31 = (r31 + -30720);
    r12 = (r12 + -14336);
    r11 = (r11 + -29696);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r30);
        mkw_fifo_burst_2[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r10 = (r10 + -13312);
    r9 = (r9 + -28672);
    r8 = (r8 + -12288);
    mkw_fifo_burst_2[20] = static_cast<uint8_t>(r0);
    r7 = (r7 + -27648);
    r6 = (r6 + -11264);
    r5 = (r5 + -26624);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_2[21] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[22] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[23] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[24] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r4 + -10240);
    mkw_fifo_burst_2[25] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r12);
        mkw_fifo_burst_2[26] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[27] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[28] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[29] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[30] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r11);
        mkw_fifo_burst_2[31] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[32] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[33] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[34] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[35] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r10);
        mkw_fifo_burst_2[36] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[37] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[38] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[39] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[40] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r9);
        mkw_fifo_burst_2[41] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[42] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[43] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[44] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[45] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r8);
        mkw_fifo_burst_2[46] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[47] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[48] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[49] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[50] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_2[51] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[52] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[53] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[54] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[55] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_2[56] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[57] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[58] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[59] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[60] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_2[61] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[62] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[63] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[64] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[65] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_2[66] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[67] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[68] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[69] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[70] = static_cast<uint8_t>(r0);
    r5 = -1358036992;
    r4 = -1290928128;
    r5 = (r5 + -25600);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_2[71] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[72] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[73] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[74] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r4 + -9216);
    mkw_fifo_burst_2[75] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_2[76] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[77] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[78] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[79] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 80u);
}

loc_804B9570:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9230 func_804B9230 preserves=true fpr_mask=0x00000000
