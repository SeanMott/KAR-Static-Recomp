//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80483DD4.hpp"
#include "fn_80483C3C.hpp"
#include "strlen.hpp"
#include "fn_80483C3C.hpp"
#include "fn_803B7DF8.hpp"
#include "fn_80486E84.hpp"
#include "fn_80486E84.hpp"
#include "fn_803B3680.hpp"
#include "fn_803B4BA0.hpp"
#include "fn_80483C3C.hpp"
#include "fn_sprintf.hpp"
#include "fn_80483C3C.hpp"
#include "fn_8047D044.hpp"



void fn_80486EA8(PPC::Runtime::GCContext* context)
{
/*80486EA8 00483CA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80486EAC 00483CAC*/ PPC::Runtime::ASM::lis(context->r7, lbl_80534D40 @ Get_MemoryOffset_HighBit);
/*80486EB0 00483CB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80486EB4 00483CB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x188, context->r1));
/*80486EB8 00483CB8*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r1));
/*80486EBC 00483CBC*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x0);
/*80486EC0 00483CC0*/ PPC::Runtime::ASM::addi(context->r26, context->r4, 0x0);
/*80486EC4 00483CC4*/ PPC::Runtime::ASM::addi(context->r27, context->r5, 0x0);
/*80486EC8 00483CC8*/ PPC::Runtime::ASM::addi(context->r31, context->r7, lbl_80534D40 @ Get_MemoryOffset_LowBit);
/*80486ECC 00483CCC*/ PPC::Runtime::ASM::addi(context->r30, context->r6, 0x0);
/*80486ED0 00483CD0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80486ED4 00483CD4*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x478);
/*80486ED8 00483CD8*/ PPC::Runtime::ASM::li(context->r4, 0xc8);
/*80486EDC 00483CDC*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_310 @ Get_MemoryOffset_SDA21);
/*80486EE0 00483CE0*/ PPC::Runtime::ASM::bl(fn_80483DD4);
/*80486EE4 00483CE4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80486EE8 00483CE8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x484);
/*80486EEC 00483CEC*/ PPC::Runtime::ASM::li(context->r5, lbl_struct_close @ Get_MemoryOffset_SDA21);
/*80486EF0 00483CF0*/ PPC::Runtime::ASM::bl(fn_80483C3C);
/*80486EF4 00483CF4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80486EF8 00483CF8*/ PPC::Runtime::ASM::bl(strlen);
/*80486EFC 00483CFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80486F00 00483D00*/ PPC::Runtime::ASM::beq(.L_80486F14);
/*80486F04 00483D04*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80486F08 00483D08*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x490);
/*80486F0C 00483D0C*/ PPC::Runtime::ASM::li(context->r5, lbl_struct_ja @ Get_MemoryOffset_SDA21);
/*80486F10 00483D10*/ PPC::Runtime::ASM::bl(fn_80483C3C);
RUNTIME_PPC_JUMP_LABEL(.L_80486F14, 0x80486F14) //this is a jump label
/*80486F14 00483D14*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x0);
/*80486F18 00483D18*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80486F1C 00483D1C*/ PPC::Runtime::ASM::li(context->r4, 0x2e);
/*80486F20 00483D20*/ PPC::Runtime::ASM::bl(fn_803B7DF8);
/*80486F24 00483D24*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80486F28 00483D28*/ PPC::Runtime::ASM::beq(.L_80486F74);
/*80486F2C 00483D2C*/ PPC::Runtime::ASM::lis(context->r4, BIG_FUCK_STRUCT_OF_FILE_EXTENSION_STRINGS @ Get_MemoryOffset_HighBit);
/*80486F30 00483D30*/ PPC::Runtime::ASM::lis(context->r5, fn_80486E84 @ Get_MemoryOffset_HighBit);
/*80486F34 00483D34*/ PPC::Runtime::ASM::addi(context->r7, context->r5, fn_80486E84 @ Get_MemoryOffset_LowBit);
/*80486F38 00483D38*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80486F3C 00483D3C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, BIG_FUCK_STRUCT_OF_FILE_EXTENSION_STRINGS @ Get_MemoryOffset_LowBit);
/*80486F40 00483D40*/ PPC::Runtime::ASM::li(context->r5, 0x45);
/*80486F44 00483D44*/ PPC::Runtime::ASM::li(context->r6, 0xc);
/*80486F48 00483D48*/ PPC::Runtime::ASM::bl(fn_803B3680);
/*80486F4C 00483D4C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80486F50 00483D50*/ PPC::Runtime::ASM::beq(.L_80486F64);
/*80486F54 00483D54*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80486F58 00483D58*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80486F5C 00483D5C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80486F60 00483D60*/ PPC::Runtime::ASM::b(.L_80486F68);
RUNTIME_PPC_JUMP_LABEL(.L_80486F64, 0x80486F64) //this is a jump label
/*80486F64 00483D64*/ PPC::Runtime::ASM::mr(context->r0, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_80486F68, 0x80486F68) //this is a jump label
/*80486F68 00483D68*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80486F6C 00483D6C*/ PPC::Runtime::ASM::beq(.L_80486F74);
/*80486F70 00483D70*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80486F74, 0x80486F74) //this is a jump label
/*80486F74 00483D74*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80486F78 00483D78*/ PPC::Runtime::ASM::bne(.L_80486F84);
/*80486F7C 00483D7C*/ PPC::Runtime::ASM::addi(context->r28, context->r31, 0x344);
/*80486F80 00483D80*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0x468);
RUNTIME_PPC_JUMP_LABEL(.L_80486F84, 0x80486F84) //this is a jump label
/*80486F84 00483D84*/ PPC::Runtime::ASM::addi(context->r6, context->r28, 0x0);
/*80486F88 00483D88*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80486F8C 00483D8C*/ PPC::Runtime::ASM::addi(context->r7, context->r29, 0x0);
/*80486F90 00483D90*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80486F94 00483D94*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*80486F98 00483D98*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_306 @ Get_MemoryOffset_SDA21);
/*80486F9C 00483D9C*/ PPC::Runtime::ASM::bl(fn_803B4BA0);
/*80486FA0 00483DA0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80486FA4 00483DA4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4a4);
/*80486FA8 00483DA8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x28);
/*80486FAC 00483DAC*/ PPC::Runtime::ASM::bl(fn_80483C3C);
/*80486FB0 00483DB0*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x0);
/*80486FB4 00483DB4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80486FB8 00483DB8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*80486FBC 00483DBC*/ PPC::Runtime::ASM::li(context->r4, lbl_ "%" Get_MemoryOffset_SDA21);
/*80486FC0 00483DC0*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80486FC4 00483DC4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80486FC8 00483DC8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4b4);
/*80486FCC 00483DCC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x18);
/*80486FD0 00483DD0*/ PPC::Runtime::ASM::bl(fn_80483C3C);
/*80486FD4 00483DD4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x0);
/*80486FD8 00483DD8*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x0);
/*80486FDC 00483DDC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x68);
/*80486FE0 00483DE0*/ PPC::Runtime::ASM::bl(fn_8047D044);
/*80486FE4 00483DE4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80486FE8 00483DE8*/ PPC::Runtime::ASM::bge(.L_80486FF4);
/*80486FEC 00483DEC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80486FF0 00483DF0*/ PPC::Runtime::ASM::b(.L_80486FF8);
RUNTIME_PPC_JUMP_LABEL(.L_80486FF4, 0x80486FF4) //this is a jump label
/*80486FF4 00483DF4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80486FF8, 0x80486FF8) //this is a jump label
/*80486FF8 00483DF8*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r1));
/*80486FFC 00483DFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r1));
/*80487000 00483E00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x188);
/*80487004 00483E04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80487008 00483E08*/ PPC::Runtime::ASM::blr();
}