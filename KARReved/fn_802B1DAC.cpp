//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80319BDC.hpp"
#include "fn_8031A74C.hpp"
#include "fn_8034BF50.hpp"



void fn_802B1DAC(PPC::Runtime::GCContext* context)
{
/*802B1DAC 002AEBAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*802B1DB0 002AEBB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B1DB4 002AEBB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B1DB8 002AEBB8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B1DBC 002AEBBC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802B1DC0 002AEBC0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802B1DC4 002AEBC4*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*802B1DC8 002AEBC8*/ PPC::Runtime::ASM::bl(fn_8039E4B4);
/*802B1DCC 002AEBCC*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd70, context->r31));
/*802B1DD0 002AEBD0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B1DD4 002AEBD4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd20, context->r31));
/*802B1DD8 002AEBD8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B1DDC 002AEBDC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1DE0 002AEBE0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B1DE4 002AEBE4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1DE8 002AEBE8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B1DEC 002AEBEC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x16);
/*802B1DF0 002AEBF0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802B1DF4 002AEBF4*/ PPC::Runtime::ASM::blt(.L_802B1E18);
/*802B1DF8 002AEBF8*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802B1DFC 002AEBFC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4AD0 @ Get_MemoryOffset_HighBit);
/*802B1E00 002AEC00*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802B1E04 002AEC04*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C4AD0 @ Get_MemoryOffset_LowBit);
/*802B1E08 002AEC08*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802B1E0C 002AEC0C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802B1E10 002AEC10*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802B1E14 002AEC14*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802B1E18, 0x802B1E18) //this is a jump label
/* 802B1E18 002AEC18  57 A0 06 3F */ clrlwi. context->r0 , context->r29 , 24
/*802B1E1C 002AEC1C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802B1E20 002AEC20*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r28);
/*802B1E24 002AEC24*/ PPC::Runtime::ASM::beq(.L_802B1E38);
/*802B1E28 002AEC28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B1E2C 002AEC2C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*802B1E30 002AEC30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B1E34 002AEC34*/ PPC::Runtime::ASM::b(.L_802B1E44);
RUNTIME_PPC_JUMP_LABEL(.L_802B1E38, 0x802B1E38) //this is a jump label
/*802B1E38 002AEC38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B1E3C 002AEC3C*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r3);
/*802B1E40 002AEC40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802B1E44, 0x802B1E44) //this is a jump label
/*802B1E44 002AEC44*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802B1E48 002AEC48*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B1E4C 002AEC4C*/ PPC::Runtime::ASM::beq(.L_802B1F84);
/*802B1E50 002AEC50*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802B1E54 002AEC54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B1E58 002AEC58*/ PPC::Runtime::ASM::li(context->r5, lbl_805D800C @ Get_MemoryOffset_SDA21);
/*802B1E5C 002AEC5C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7F20 @ Get_MemoryOffset_SDA21);
/*802B1E60 002AEC60*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1E64 002AEC64*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B1E68 002AEC68*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802B1E6C 002AEC6C*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 802B1E70 002AEC70  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802B1E74 002AEC74*/ PPC::Runtime::ASM::beq(.L_802B1F74);
/*802B1E78 002AEC78*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1E7C 002AEC7C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B1E80 002AEC80*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FA8 @ Get_MemoryOffset_SDA21);
/*802B1E84 002AEC84*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FA0 @ Get_MemoryOffset_SDA21);
/*802B1E88 002AEC88*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1E8C 002AEC8C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B1E90 002AEC90*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B1E94 002AEC94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*802B1E98 002AEC98*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802B1E9C 002AEC9C*/ PPC::Runtime::ASM::bctrl();
/*802B1EA0 002AECA0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802B1EA4 002AECA4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*802B1EA8 002AECA8*/ PPC::Runtime::ASM::bl(fn_80319BDC);
/*802B1EAC 002AECAC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3458 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1EB0 002AECB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802B1EB4 002AECB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802B1EB8 002AECB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802B1EBC 002AECBC*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*802B1EC0 002AECC0*/ PPC::Runtime::ASM::bl(fn_8031A74C);
/*802B1EC4 002AECC4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E33C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1EC8 002AECC8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802B1ECC 002AECCC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3450 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1ED0 002AECD0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802B1ED4 002AECD4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802B1ED8 002AECD8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802B1EDC 002AECDC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802B1EE0 002AECE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802B1EE4 002AECE4*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802B1EE8 002AECE8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802B1EEC 002AECEC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B1EF0 002AECF0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B1EF4 002AECF4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B1EF8 002AECF8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B1EFC 002AECFC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B1F00 002AED00*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B1F04 002AED04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B1F08 002AED08*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802B1F0C 002AED0C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B1F10 002AED10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B1F14 002AED14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B1F18 002AED18*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B1F1C 002AED1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B1F20 002AED20*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B1F24 002AED24*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802B1F28 002AED28*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1F2C 002AED2C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1F30 002AED30*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802B1F34 002AED34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B1F38 002AED38*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B1F3C 002AED3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd20, context->r31));
/*802B1F40 002AED40*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*802B1F44 002AED44*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*802B1F48 002AED48*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1F4C 002AED4C*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*802B1F50 002AED50*/ PPC::Runtime::ASM::bl(fn_8034BF50);
/*802B1F54 002AED54*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x38);
/*802B1F58 002AED58*/ PPC::Runtime::ASM::beq(.L_802B1F68);
/*802B1F5C 002AED5C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B1F60 002AED60*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B1F64 002AED64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B1F68, 0x802B1F68) //this is a jump label
/*802B1F68 002AED68*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B1F6C 002AED6C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B1F70 002AED70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B1F74, 0x802B1F74) //this is a jump label
/*802B1F74 002AED74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802B1F78 002AED78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B1F7C 002AED7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B1F80 002AED80*/ PPC::Runtime::ASM::b(.L_802B1F90);
RUNTIME_PPC_JUMP_LABEL(.L_802B1F84, 0x802B1F84) //this is a jump label
/*802B1F84 002AED84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B1F88 002AED88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B1F8C 002AED8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802B1F90, 0x802B1F90) //this is a jump label
/*802B1F90 002AED90*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B1F94 002AED94*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802B1F98 002AED98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B1F9C 002AED9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B1FA0 002AEDA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*802B1FA4 002AEDA4*/ PPC::Runtime::ASM::blr();
}