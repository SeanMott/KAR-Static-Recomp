//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B55B0.hpp"
#include "fn_80066DF8.hpp"
#include "fn_800B04A8.hpp"
#include "fn_800B04A8.hpp"
#include "fn_800B55D8.hpp"
#include "fn_800B55D8.hpp"
#include "fn_800B3540.hpp"
#include "fn_800B3540.hpp"
#include "memset.hpp"
#include "fn_8006DC10.hpp"
#include "fn_800CD8E4.hpp"
#include "fn_800B5644.hpp"



void fn_800B3944(PPC::Runtime::GCContext* context)
{
/*800B3944 000B0744*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800B3948 000B0748*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B394C 000B074C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B3950 000B0750*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800B3954 000B0754*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*800B3958 000B0758*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_775 @ Get_MemoryOffset_HighBit);
/*800B395C 000B075C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800B3960 000B0760*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_775 @ Get_MemoryOffset_LowBit);
/*800B3964 000B0764*/ PPC::Runtime::ASM::bl(fn_800B55B0);
/*800B3968 000B0768*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*800B396C 000B076C*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*800B3970 000B0770*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*800B3974 000B0774*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*800B3978 000B0778*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800B397C 000B077C*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800B3980 000B0780*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*800B3984 000B0784*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x34);
/*800B3988 000B0788*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*800B398C 000B078C*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*800B3990 000B0790*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800B3994 000B0794*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3998 000B0798*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B399C 000B079C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800B39A0 000B07A0*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*800B39A4 000B07A4*/ PPC::Runtime::ASM::lis(context->r3, fn_800B04A8 @ Get_MemoryOffset_HighBit);
/*800B39A8 000B07A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r29));
/*800B39AC 000B07AC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_800B04A8 @ Get_MemoryOffset_LowBit);
/*800B39B0 000B07B0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800B39B4 000B07B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B39B8 000B07B8*/ PPC::Runtime::ASM::bl(fn_80429728);
/*800B39BC 000B07BC*/ PPC::Runtime::ASM::lis(context->r4, fn_800B55D8 @ Get_MemoryOffset_HighBit);
/*800B39C0 000B07C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B39C4 000B07C4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_800B55D8 @ Get_MemoryOffset_LowBit);
/*800B39C8 000B07C8*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*800B39CC 000B07CC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*800B39D0 000B07D0*/ PPC::Runtime::ASM::bl(fn_GObj_AddUserData);
/*800B39D4 000B07D4*/ PPC::Runtime::ASM::lis(context->r4, fn_800B3540 @ Get_MemoryOffset_HighBit);
/*800B39D8 000B07D8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B39DC 000B07DC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_800B3540 @ Get_MemoryOffset_LowBit);
/*800B39E0 000B07E0*/ PPC::Runtime::ASM::li(context->r5, 0xd);
/*800B39E4 000B07E4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*800B39E8 000B07E8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B39EC 000B07EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800B39F0 000B07F0*/ PPC::Runtime::ASM::li(context->r5, 0x118);
/*800B39F4 000B07F4*/ PPC::Runtime::ASM::bl(memset);
/*800B39F8 000B07F8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800B39FC 000B07FC*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800B3A00 000B0800*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800B3A04 000B0804*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*800B3A08 000B0808*/ PPC::Runtime::ASM::sth(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
/*800B3A0C 000B080C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r28));
/*800B3A10 000B0810*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A14 000B0814*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 6, 24, 25);
/*800B3A18 000B0818*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A1C 000B081C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A20 000B0820*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 4, 27, 27);
/*800B3A24 000B0824*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A28 000B0828*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A2C 000B082C*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 3, 28, 28);
/*800B3A30 000B0830*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A34 000B0834*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A38 000B0838*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 2, 29, 29);
/*800B3A3C 000B083C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B3A40 000B0840*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x71, context->r28));
/*800B3A44 000B0844*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r28));
/*800B3A48 000B0848*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*800B3A4C 000B084C*/ PPC::Runtime::ASM::bl(fn_8006DC10);
/*800B3A50 000B0850*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r28));
/*800B3A54 000B0854*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xd0);
/*800B3A58 000B0858*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3A5C 000B085C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r28));
/*800B3A60 000B0860*/ PPC::Runtime::ASM::bl(fn_800CD8E4);
/*800B3A64 000B0864*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B3A68 000B0868*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800B3A6C 000B086C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r28));
/*800B3A70 000B0870*/ PPC::Runtime::ASM::bl(fn_800B5644);
/*800B3A74 000B0874*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800B3A78 000B0878*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800B3A7C 000B087C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B3A80 000B0880*/ PPC::Runtime::ASM::bne(.L_800B3A94);
/*800B3A84 000B0884*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1dc);
/*800B3A88 000B0888*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x250);
/*800B3A8C 000B088C*/ PPC::Runtime::ASM::li(context->r4, 0x7ff);
/*800B3A90 000B0890*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800B3A94, 0x800B3A94) //this is a jump label
/*800B3A94 000B0894*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800B3A98 000B0898*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B3A9C 000B089C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800B3AA0 000B08A0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xe8);
/*800B3AA4 000B08A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B3AA8 000B08A8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800B3AAC 000B08AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B3AB0 000B08B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B3AB4 000B08B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*800B3AB8 000B08B8*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetInterest);
/*800B3ABC 000B08BC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800B3AC0 000B08C0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xf4);
/*800B3AC4 000B08C4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyePosition);
/*800B3AC8 000B08C8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*800B3ACC 000B08CC*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B3AD0 000B08D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800B3AD4 000B08D4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800B3AD8 000B08D8*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r31));
/*800B3ADC 000B08DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B3AE0 000B08E0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800B3AE4 000B08E4*/ PPC::Runtime::ASM::slwi(context->r3, context->r27, 2);
/*800B3AE8 000B08E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3AEC 000B08EC*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r3);
/*800B3AF0 000B08F0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r31));
/*800B3AF4 000B08F4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B3AF8 000B08F8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*800B3AFC 000B08FC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*800B3B00 000B0900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*800B3B04 000B0904*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*800B3B08 000B0908*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800B3B0C 000B090C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*800B3B10 000B0910*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r31));
/*800B3B14 000B0914*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*800B3B18 000B0918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800B3B1C 000B091C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*800B3B20 000B0920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*800B3B24 000B0924*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r31));
/*800B3B28 000B0928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
/*800B3B2C 000B092C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*800B3B30 000B0930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*800B3B34 000B0934*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800B3B38 000B0938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800B3B3C 000B093C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B3B40 000B0940*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r31));
/*800B3B44 000B0944*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*800B3B48 000B0948*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B3B4C 000B094C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800B3B50 000B0950*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*800B3B54 000B0954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800B3B58 000B0958*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800B3B5C 000B095C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*800B3B60 000B0960*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*800B3B64 000B0964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800B3B68 000B0968*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800B3B6C 000B096C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800B3B70 000B0970*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r31));
/*800B3B74 000B0974*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
/*800B3B78 000B0978*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800B3B7C 000B097C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800B3B80 000B0980*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800B3B84 000B0984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800B3B88 000B0988*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*800B3B8C 000B098C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800B3B90 000B0990*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800B3B94 000B0994*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800B3B98 000B0998*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r31));
/*800B3B9C 000B099C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BA0 000B09A0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 7, 24, 24);
/*800B3BA4 000B09A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BA8 000B09A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BAC 000B09AC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 6, 25, 25);
/*800B3BB0 000B09B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BB4 000B09B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BB8 000B09B8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 5, 26, 26);
/*800B3BBC 000B09BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BC0 000B09C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BC4 000B09C4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 4, 27, 27);
/*800B3BC8 000B09C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BCC 000B09CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BD0 000B09D0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 3, 28, 28);
/*800B3BD4 000B09D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B3BD8 000B09D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*800B3BDC 000B09DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 7, 24, 24);
/*800B3BE0 000B09E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*800B3BE4 000B09E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*800B3BE8 000B09E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*800B3BEC 000B09EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r4));
/*800B3BF0 000B09F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r4));
/*800B3BF4 000B09F4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r4));
/*800B3BF8 000B09F8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800B3BFC 000B09FC*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800B3C00 000B0A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B3C04 000B0A04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B3C08 000B0A08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800B3C0C 000B0A0C*/ PPC::Runtime::ASM::blr();
}