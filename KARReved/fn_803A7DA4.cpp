//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803A7DA4(PPC::Runtime::GCContext* context)
{
/*803A7DA4 003A4BA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803A7DA8 003A4BA8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*803A7DAC 003A4BAC*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*803A7DB0 003A4BB0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803A7DB4 003A4BB4*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*803A7DB8 003A4BB8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803A7DBC 003A4BBC*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*803A7DC0 003A4BC0*/ PPC::Runtime::ASM::ble(.L_803A7DE8);
RUNTIME_PPC_JUMP_LABEL(.L_803A7DC4, 0x803A7DC4) //this is a jump label
/*803A7DC4 003A4BC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7DC8 003A4BC8*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r4);
/*803A7DCC 003A4BCC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803A7DD0 003A4BD0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*803A7DD4 003A4BD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A7DD8 003A4BD8*/ PPC::Runtime::ASM::blt(.L_803A7DE8);
/*803A7DDC 003A4BDC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*803A7DE0 003A4BE0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*803A7DE4 003A4BE4*/ PPC::Runtime::ASM::bdnz(.L_803A7DC4);
RUNTIME_PPC_JUMP_LABEL(.L_803A7DE8, 0x803A7DE8) //this is a jump label
/*803A7DE8 003A4BE8*/ PPC::Runtime::ASM::cmpw(context->r6, context->r7);
/*803A7DEC 003A4BEC*/ PPC::Runtime::ASM::blt(.L_803A7DF8);
/*803A7DF0 003A4BF0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803A7DF4 003A4BF4*/ PPC::Runtime::ASM::b(.L_803A7F98);
RUNTIME_PPC_JUMP_LABEL(.L_803A7DF8, 0x803A7DF8) //this is a jump label
/*803A7DF8 003A4BF8*/ PPC::Runtime::ASM::mulli(context->r9, context->r6, 0xc);
/*803A7DFC 003A4BFC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7E00 003A4C00*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*803A7E04 003A4C04*/ PPC::Runtime::ASM::add(context->r5, context->r7, context->r9);
/*803A7E08 003A4C08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803A7E0C 003A4C0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803A7E10 003A4C10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A7E14 003A4C14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803A7E18 003A4C18*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A7E1C 003A4C1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A7E20 003A4C20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A7E24 003A4C24*/ PPC::Runtime::ASM::mtctr(context->r6);
/*803A7E28 003A4C28*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*803A7E2C 003A4C2C*/ PPC::Runtime::ASM::ble(.L_803A7E48);
RUNTIME_PPC_JUMP_LABEL(.L_803A7E30, 0x803A7E30) //this is a jump label
/*803A7E30 003A4C30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803A7E34 003A4C34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A7E38 003A4C38*/ PPC::Runtime::ASM::bgt(.L_803A7E48);
/*803A7E3C 003A4C3C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0xc);
/*803A7E40 003A4C40*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*803A7E44 003A4C44*/ PPC::Runtime::ASM::bdnz(.L_803A7E30);
RUNTIME_PPC_JUMP_LABEL(.L_803A7E48, 0x803A7E48) //this is a jump label
/*803A7E48 003A4C48*/ PPC::Runtime::ASM::cmpw(context->r6, context->r10);
/*803A7E4C 003A4C4C*/ PPC::Runtime::ASM::mr(context->r11, context->r6);
/*803A7E50 003A4C50*/ PPC::Runtime::ASM::subf(context->r4, context->r10, context->r6);
/*803A7E54 003A4C54*/ PPC::Runtime::ASM::ble(.L_803A7F70);
/* 803A7E58 003A4C58  54 80 F0 BF */ srwi. context->r0 , context->r4 , 2
/*803A7E5C 003A4C5C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803A7E60 003A4C60*/ PPC::Runtime::ASM::beq(.L_803A7F34);
RUNTIME_PPC_JUMP_LABEL(.L_803A7E64, 0x803A7E64) //this is a jump label
/*803A7E64 003A4C64*/ PPC::Runtime::ASM::subi(context->r5, context->r11, 0x1);
/*803A7E68 003A4C68*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7E6C 003A4C6C*/ PPC::Runtime::ASM::mulli(context->r0, context->r5, 0xc);
/*803A7E70 003A4C70*/ PPC::Runtime::ASM::add(context->r6, context->r8, context->r9);
/*803A7E74 003A4C74*/ PPC::Runtime::ASM::subi(context->r5, context->r11, 0x2);
/*803A7E78 003A4C78*/ PPC::Runtime::ASM::add(context->r7, context->r8, context->r0);
/*803A7E7C 003A4C7C*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0xc);
/*803A7E80 003A4C80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803A7E84 003A4C84*/ PPC::Runtime::ASM::mulli(context->r0, context->r5, 0xc);
/*803A7E88 003A4C88*/ PPC::Runtime::ASM::subi(context->r5, context->r11, 0x3);
/*803A7E8C 003A4C8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803A7E90 003A4C90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803A7E94 003A4C94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803A7E98 003A4C98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803A7E9C 003A4C9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803A7EA0 003A4CA0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7EA4 003A4CA4*/ PPC::Runtime::ASM::add(context->r7, context->r8, context->r0);
/*803A7EA8 003A4CA8*/ PPC::Runtime::ASM::add(context->r6, context->r8, context->r9);
/*803A7EAC 003A4CAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803A7EB0 003A4CB0*/ PPC::Runtime::ASM::mulli(context->r0, context->r5, 0xc);
/*803A7EB4 003A4CB4*/ PPC::Runtime::ASM::subi(context->r5, context->r11, 0x4);
/*803A7EB8 003A4CB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803A7EBC 003A4CBC*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0xc);
/*803A7EC0 003A4CC0*/ PPC::Runtime::ASM::subi(context->r11, context->r11, 0x4);
/*803A7EC4 003A4CC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803A7EC8 003A4CC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803A7ECC 003A4CCC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803A7ED0 003A4CD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803A7ED4 003A4CD4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7ED8 003A4CD8*/ PPC::Runtime::ASM::add(context->r7, context->r8, context->r0);
/*803A7EDC 003A4CDC*/ PPC::Runtime::ASM::add(context->r6, context->r8, context->r9);
/*803A7EE0 003A4CE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803A7EE4 003A4CE4*/ PPC::Runtime::ASM::mulli(context->r0, context->r5, 0xc);
/*803A7EE8 003A4CE8*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0xc);
/*803A7EEC 003A4CEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803A7EF0 003A4CF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803A7EF4 003A4CF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803A7EF8 003A4CF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803A7EFC 003A4CFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803A7F00 003A4D00*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7F04 003A4D04*/ PPC::Runtime::ASM::add(context->r7, context->r8, context->r0);
/*803A7F08 003A4D08*/ PPC::Runtime::ASM::add(context->r6, context->r8, context->r9);
/*803A7F0C 003A4D0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803A7F10 003A4D10*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0xc);
/*803A7F14 003A4D14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803A7F18 003A4D18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803A7F1C 003A4D1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803A7F20 003A4D20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803A7F24 003A4D24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803A7F28 003A4D28*/ PPC::Runtime::ASM::bdnz(.L_803A7E64);
/*803A7F2C 003A4D2C*/ PPC::Runtime::ASM::andi.(context->r4, context->r4, 0x3);
/*803A7F30 003A4D30*/ PPC::Runtime::ASM::beq(.L_803A7F70);
RUNTIME_PPC_JUMP_LABEL(.L_803A7F34, 0x803A7F34) //this is a jump label
/*803A7F34 003A4D34*/ PPC::Runtime::ASM::mtctr(context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_803A7F38, 0x803A7F38) //this is a jump label
/*803A7F38 003A4D38*/ PPC::Runtime::ASM::subi(context->r5, context->r11, 0x1);
/*803A7F3C 003A4D3C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7F40 003A4D40*/ PPC::Runtime::ASM::mulli(context->r0, context->r5, 0xc);
/*803A7F44 003A4D44*/ PPC::Runtime::ASM::subi(context->r11, context->r11, 0x1);
/*803A7F48 003A4D48*/ PPC::Runtime::ASM::add(context->r6, context->r8, context->r9);
/*803A7F4C 003A4D4C*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0xc);
/*803A7F50 003A4D50*/ PPC::Runtime::ASM::add(context->r7, context->r8, context->r0);
/*803A7F54 003A4D54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803A7F58 003A4D58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803A7F5C 003A4D5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803A7F60 003A4D60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803A7F64 003A4D64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803A7F68 003A4D68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803A7F6C 003A4D6C*/ PPC::Runtime::ASM::bdnz(.L_803A7F38);
RUNTIME_PPC_JUMP_LABEL(.L_803A7F70, 0x803A7F70) //this is a jump label
/*803A7F70 003A4D70*/ PPC::Runtime::ASM::mulli(context->r0, context->r10, 0xc);
/*803A7F74 003A4D74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A7F78 003A4D78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A7F7C 003A4D7C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803A7F80 003A4D80*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A7F84 003A4D84*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803A7F88 003A4D88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803A7F8C 003A4D8C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A7F90 003A4D90*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803A7F94 003A4D94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803A7F98, 0x803A7F98) //this is a jump label
/*803A7F98 003A4D98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803A7F9C 003A4D9C*/ PPC::Runtime::ASM::blr();
}