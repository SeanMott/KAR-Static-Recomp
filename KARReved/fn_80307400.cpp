//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802EFFB8.hpp"



void fn_80307400(PPC::Runtime::GCContext* context)
{
/*80307400 00304200*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80307404 00304204*/ PPC::Runtime::ASM::mflr(context->r0);
/*80307408 00304208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8030740C 0030420C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80307410 00304210*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80307414 00304214*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 80307418 00304218  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8030741C 0030421C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80307420 00304220*/ PPC::Runtime::ASM::beq(.L_80307508);
/*80307424 00304224*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DC150 @ Get_MemoryOffset_HighBit);
/*80307428 00304228*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DC150 @ Get_MemoryOffset_LowBit);
/*8030742C 0030422C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80307430 00304230*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80307434 00304234*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x500, context->r3));
/*80307438 00304238*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8030743C 0030423C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80307440 00304240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r4));
/*80307444 00304244*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80307448 00304248*/ PPC::Runtime::ASM::bgt(.L_80307484);
/*8030744C 0030424C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80307450 00304250*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r3));
/*80307454 00304254*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*80307458 00304258*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8030745C 0030425C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r4));
/*80307460 00304260*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*80307464 00304264*/ PPC::Runtime::ASM::bge(.L_80307484);
/*80307468 00304268*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8030746C 0030426C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3CB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80307470 00304270*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa98, context->r4));
/*80307474 00304274*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xab4, context->r4));
/*80307478 00304278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xabc, context->r4));
/*8030747C 0030427C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac0, context->r4));
/*80307480 00304280*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80307484, 0x80307484) //this is a jump label
/*80307484 00304284*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80307488 00304288*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8030748C 0030428C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc4, context->r29));
/*80307490 00304290*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80307494 00304294*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80307498 00304298*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8030749C 0030429C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc8, context->r29));
/*803074A0 003042A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803074A4 003042A4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3C98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803074A8 003042A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbcc, context->r29));
/*803074AC 003042AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd8, context->r29));
/*803074B0 003042B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd4, context->r29));
/*803074B4 003042B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd0, context->r29));
/*803074B8 003042B8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbdc, context->r29));
/*803074BC 003042BC*/ PPC::Runtime::ASM::beq(.L_803074F8);
/*803074C0 003042C0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*803074C4 003042C4*/ PPC::Runtime::ASM::lis(context->r3, String_ "AC_RUN_LOO" 6 @ Get_MemoryOffset_HighBit);
/*803074C8 003042C8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*803074CC 003042CC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803074D0 003042D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803074D4 003042D4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, String_ "AC_RUN_LOO" 6 @ Get_MemoryOffset_LowBit);
/*803074D8 003042D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803074DC 003042DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*803074E0 003042E0*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*803074E4 003042E4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803074E8 003042E8*/ PPC::Runtime::ASM::beq(.L_803074F8);
/*803074EC 003042EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*803074F0 003042F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*803074F4 003042F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803074F8, 0x803074F8) //this is a jump label
/*803074F8 003042F8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*803074FC 003042FC*/ PPC::Runtime::ASM::ble(.L_80307508);
/*80307500 00304300*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80307504 00304304*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80307508, 0x80307508) //this is a jump label
/*80307508 00304308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8030750C 0030430C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80307510 00304310*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80307514 00304314*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80307518 00304318*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030751C 0030431C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80307520 00304320*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80307524 00304324*/ PPC::Runtime::ASM::blr();
}