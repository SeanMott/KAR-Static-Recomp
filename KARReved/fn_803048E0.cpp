//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B33C.hpp"
#include "fn_802EFFB8.hpp"



void fn_803048E0(PPC::Runtime::GCContext* context)
{
/*803048E0 003016E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803048E4 003016E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803048E8 003016E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803048EC 003016EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803048F0 003016F0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803048F4 003016F4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 803048F8 003016F8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803048FC 003016FC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80304900 00301700*/ PPC::Runtime::ASM::beq(.L_803049DC);
/*80304904 00301704*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DB088 @ Get_MemoryOffset_HighBit);
/*80304908 00301708*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8030490C 0030170C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DB088 @ Get_MemoryOffset_LowBit);
/*80304910 00301710*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80304914 00301714*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80304918 00301718*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc4, context->r29));
/*8030491C 0030171C*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80304920 00301720*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80304924 00301724*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80304928 00301728*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc8, context->r29));
/*8030492C 0030172C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x10);
/*80304930 00301730*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3BC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80304934 00301734*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbcc, context->r29));
/*80304938 00301738*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd8, context->r29));
/*8030493C 0030173C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd4, context->r29));
/*80304940 00301740*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd0, context->r29));
/*80304944 00301744*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbdc, context->r29));
/*80304948 00301748*/ PPC::Runtime::ASM::beq(.L_8030498C);
/*8030494C 0030174C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80304950 00301750*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*80304954 00301754*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80304958 00301758*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030495C 0030175C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80304960 00301760*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80304964 00301764*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x10);
/*80304968 00301768*/ PPC::Runtime::ASM::beq(.L_8030498C);
/*8030496C 0030176C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80304970 00301770*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*80304974 00301774*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*80304978 00301778*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8030497C 0030177C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80304980 00301780*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80304984 00301784*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80304988 00301788*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8030498C, 0x8030498C) //this is a jump label
/*8030498C 0030178C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80304990 00301790*/ PPC::Runtime::ASM::beq(.L_803049CC);
/*80304994 00301794*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*80304998 00301798*/ PPC::Runtime::ASM::lis(context->r3, String_ "AC_RUN_LOO" 4 @ Get_MemoryOffset_HighBit);
/*8030499C 0030179C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*803049A0 003017A0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803049A4 003017A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803049A8 003017A8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, String_ "AC_RUN_LOO" 4 @ Get_MemoryOffset_LowBit);
/*803049AC 003017AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803049B0 003017B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*803049B4 003017B4*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*803049B8 003017B8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803049BC 003017BC*/ PPC::Runtime::ASM::beq(.L_803049CC);
/*803049C0 003017C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*803049C4 003017C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*803049C8 003017C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803049CC, 0x803049CC) //this is a jump label
/*803049CC 003017CC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*803049D0 003017D0*/ PPC::Runtime::ASM::ble(.L_803049DC);
/*803049D4 003017D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803049D8 003017D8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803049DC, 0x803049DC) //this is a jump label
/*803049DC 003017DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803049E0 003017E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803049E4 003017E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803049E8 003017E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803049EC 003017EC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803049F0 003017F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803049F4 003017F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803049F8 003017F8*/ PPC::Runtime::ASM::blr();
}