//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80189E3C(PPC::Runtime::GCContext* context)
{
/*80189E3C 00186C3C*/ PPC::Runtime::ASM::li(context->r0, 0xc);
/*80189E40 00186C40*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80189E44 00186C44*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80189E48 00186C48*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80189E4C, 0x80189E4C) //this is a jump label
/*80189E4C 00186C4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r4));
/*80189E50 00186C50*/ PPC::Runtime::ASM::cmplw(context->r0, context->r5);
/*80189E54 00186C54*/ PPC::Runtime::ASM::bne(.L_80189E74);
/*80189E58 00186C58*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32, context->r3));
/*80189E5C 00186C5C*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 3);
/*80189E60 00186C60*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80189E64 00186C64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80189E68 00186C68*/ PPC::Runtime::ASM::extrwi(context->r0, context->r5, 8, 22);
/*80189E6C 00186C6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r4));
/*80189E70 00186C70*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80189E74, 0x80189E74) //this is a jump label
/*80189E74 00186C74*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*80189E78 00186C78*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80189E7C 00186C7C*/ PPC::Runtime::ASM::bdnz(.L_80189E4C);
/*80189E80 00186C80*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80189E84 00186C84*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80189E88 00186C88*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80189E8C 00186C8C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80189E90, 0x80189E90) //this is a jump label
/*80189E90 00186C90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r4));
/*80189E94 00186C94*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80189E98 00186C98*/ PPC::Runtime::ASM::beq(.L_80189EF8);
/*80189E9C 00186C9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r4));
/*80189EA0 00186CA0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80189EA4 00186CA4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80189EA8 00186CA8*/ PPC::Runtime::ASM::beq(.L_80189EF8);
/*80189EAC 00186CAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r4));
/*80189EB0 00186CB0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80189EB4 00186CB4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80189EB8 00186CB8*/ PPC::Runtime::ASM::beq(.L_80189EF8);
/*80189EBC 00186CBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r4));
/*80189EC0 00186CC0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80189EC4 00186CC4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80189EC8 00186CC8*/ PPC::Runtime::ASM::beq(.L_80189EF8);
/*80189ECC 00186CCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r4));
/*80189ED0 00186CD0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80189ED4 00186CD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80189ED8 00186CD8*/ PPC::Runtime::ASM::beq(.L_80189EF8);
/*80189EDC 00186CDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r4));
/*80189EE0 00186CE0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80189EE4 00186CE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80189EE8 00186CE8*/ PPC::Runtime::ASM::beq(.L_80189EF8);
/*80189EEC 00186CEC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x30);
/*80189EF0 00186CF0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80189EF4 00186CF4*/ PPC::Runtime::ASM::bdnz(.L_80189E90);
RUNTIME_PPC_JUMP_LABEL(.L_80189EF8, 0x80189EF8) //this is a jump label
/*80189EF8 00186CF8*/ PPC::Runtime::ASM::cmplwi(context->r6, 0xc);
/*80189EFC 00186CFC*/ PPC::Runtime::ASM::bne(.L_80189F08);
/*80189F00 00186D00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80189F04 00186D04*/ PPC::Runtime::ASM::b(.L_80189F0C);
RUNTIME_PPC_JUMP_LABEL(.L_80189F08, 0x80189F08) //this is a jump label
/*80189F08 00186D08*/ PPC::Runtime::ASM::mr(context->r0, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_80189F0C, 0x80189F0C) //this is a jump label
/*80189F0C 00186D0C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80189F10 00186D10*/ PPC::Runtime::ASM::cmplwi(context->r6, 0xc);
/*80189F14 00186D14*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80189F18 00186D18*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r4));
/*80189F1C 00186D1C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32, context->r3));
/*80189F20 00186D20*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 8, 22);
/*80189F24 00186D24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r4));
/*80189F28 00186D28*/ PPC::Runtime::ASM::bne(.L_80189F4C);
/*80189F2C 00186D2C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80189F30 00186D30*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80189F34 00186D34*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80189F38 00186D38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80189F3C 00186D3C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xc);
/*80189F40 00186D40*/ PPC::Runtime::ASM::blt(.L_80189F4C);
/*80189F44 00186D44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80189F48 00186D48*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80189F4C, 0x80189F4C) //this is a jump label
/*80189F4C 00186D4C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80189F50 00186D50*/ PPC::Runtime::ASM::blr();
}