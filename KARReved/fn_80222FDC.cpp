//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80222FDC(PPC::Runtime::GCContext* context)
{
/*80222FDC 0021FDDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x810, context->r1));
/*80222FE0 0021FDE0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80222FE4 0021FDE4*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80222FE8 0021FDE8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80222FEC 0021FDEC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r5));
/*80222FF0 0021FDF0*/ PPC::Runtime::ASM::b(.L_80223034);
RUNTIME_PPC_JUMP_LABEL(.L_80222FF4, 0x80222FF4) //this is a jump label
/*80222FF4 0021FDF4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*80222FF8 0021FDF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80222FFC 0021FDFC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80223000 0021FE00*/ PPC::Runtime::ASM::bne(.L_80223030);
/*80223004 0021FE04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80223008 0021FE08*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*8022300C 0021FE0C*/ PPC::Runtime::ASM::bne(.L_80223030);
/*80223010 0021FE10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r8));
/* 80223014 0021FE14  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*80223018 0021FE18*/ PPC::Runtime::ASM::bne(.L_80223030);
/*8022301C 0021FE1C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80223020 0021FE20*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80223024 0021FE24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r8));
/*80223028 0021FE28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8022302C 0021FE2C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80223030, 0x80223030) //this is a jump label
/*80223030 0021FE30*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80223034, 0x80223034) //this is a jump label
/*80223034 0021FE34*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80223038 0021FE38*/ PPC::Runtime::ASM::bne(.L_80222FF4);
/*8022303C 0021FE3C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*80223040 0021FE40*/ PPC::Runtime::ASM::beq(.L_80223094);
/*80223044 0021FE44*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*80223048 0021FE48*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8022304C 0021FE4C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80223050 0021FE50*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80223054 0021FE54*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80223058 0021FE58*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8022305C 0021FE5C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*80223060 0021FE60*/ PPC::Runtime::ASM::ble(.L_80223084);
RUNTIME_PPC_JUMP_LABEL(.L_80223064, 0x80223064) //this is a jump label
/*80223064 0021FE64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80223068 0021FE68*/ PPC::Runtime::ASM::cmplw(context->r0, context->r6);
/*8022306C 0021FE6C*/ PPC::Runtime::ASM::ble(.L_80223078);
/*80223070 0021FE70*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
/*80223074 0021FE74*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80223078, 0x80223078) //this is a jump label
/*80223078 0021FE78*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*8022307C 0021FE7C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80223080 0021FE80*/ PPC::Runtime::ASM::bdnz(.L_80223064);
RUNTIME_PPC_JUMP_LABEL(.L_80223084, 0x80223084) //this is a jump label
/*80223084 0021FE84*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 3);
/*80223088 0021FE88*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*8022308C 0021FE8C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80223090 0021FE90*/ PPC::Runtime::ASM::b(.L_80223098);
RUNTIME_PPC_JUMP_LABEL(.L_80223094, 0x80223094) //this is a jump label
/*80223094 0021FE94*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80223098, 0x80223098) //this is a jump label
/*80223098 0021FE98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x810);
/*8022309C 0021FE9C*/ PPC::Runtime::ASM::blr();
}