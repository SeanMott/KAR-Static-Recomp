//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DBGEXIImm.hpp"
#include "fn_DBGEXIImm.hpp"



void fn_DBGWrite(PPC::Runtime::GCContext* context)
{
/*803F3ED4 003F0CD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F3ED8 003F0CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803F3EDC 003F0CDC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 8, 7, 21);
/*803F3EE0 003F0CE0*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0xa000);
/*803F3EE4 003F0CE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*803F3EE8 003F0CE8*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803F3EEC 003F0CEC*/ PPC::Runtime::ASM::lis(context->r29, 0xcc00);
/*803F3EF0 003F0CF0*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*803F3EF4 003F0CF4*/ PPC::Runtime::ASM::addi(context->r26, context->r4, 0x0);
/*803F3EF8 003F0CF8*/ PPC::Runtime::ASM::addi(context->r31, context->r29, 0x6800);
/*803F3EFC 003F0CFC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*803F3F00 003F0D00*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*803F3F04 003F0D04*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803F3F08 003F0D08*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6828, context->r29));
/*803F3F0C 003F0D0C*/ PPC::Runtime::ASM::andi.(context->r6, context->r6, 0x405);
/*803F3F10 003F0D10*/ PPC::Runtime::ASM::ori(context->r6, context->r6, 0xc0);
/*803F3F14 003F0D14*/ PPC::Runtime::ASM::stwu(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803F3F18 003F0D18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803F3F1C 003F0D1C*/ PPC::Runtime::ASM::bl(fn_DBGEXIImm);
/*803F3F20 003F0D20*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803F3F24 003F0D24*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803F3F28 003F0D28*/ PPC::Runtime::ASM::mr(context->r27, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803F3F2C, 0x803F3F2C) //this is a jump label
/*803F3F2C 003F0D2C*/ PPC::Runtime::ASM::addi(context->r28, context->r29, 0x6800);
/*803F3F30 003F0D30*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/* 803F3F34 003F0D34  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803F3F38 003F0D38*/ PPC::Runtime::ASM::bne(.L_803F3F2C);
/*803F3F3C 003F0D3C*/ PPC::Runtime::ASM::b(.L_803F3F80);
RUNTIME_PPC_JUMP_LABEL(.L_803F3F40, 0x803F3F40) //this is a jump label
/*803F3F40 003F0D40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803F3F44 003F0D44*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*803F3F48 003F0D48*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*803F3F4C 003F0D4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803F3F50 003F0D50*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803F3F54 003F0D54*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*803F3F58 003F0D58*/ PPC::Runtime::ASM::bl(fn_DBGEXIImm);
/*803F3F5C 003F0D5C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803F3F60 003F0D60*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803F3F64 003F0D64*/ PPC::Runtime::ASM::or(context->r27, context->r27, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803F3F68, 0x803F3F68) //this is a jump label
/*803F3F68 003F0D68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/* 803F3F6C 003F0D6C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803F3F70 003F0D70*/ PPC::Runtime::ASM::bne(.L_803F3F68);
/* 803F3F74 003F0D74  37 DE FF FC */ subic. context->r30 , context->r30 , 0x4
/*803F3F78 003F0D78*/ PPC::Runtime::ASM::bge(.L_803F3F80);
/*803F3F7C 003F0D7C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803F3F80, 0x803F3F80) //this is a jump label
/*803F3F80 003F0D80*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803F3F84 003F0D84*/ PPC::Runtime::ASM::bne(.L_803F3F40);
/*803F3F88 003F0D88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803F3F8C 003F0D8C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r27);
/*803F3F90 003F0D90*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*803F3F94 003F0D94*/ PPC::Runtime::ASM::andi.(context->r0, context->r4, 0x405);
/*803F3F98 003F0D98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803F3F9C 003F0D9C*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803F3FA0 003F0DA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803F3FA4 003F0DA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*803F3FA8 003F0DA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F3FAC 003F0DAC*/ PPC::Runtime::ASM::blr();
}