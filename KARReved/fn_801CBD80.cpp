//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801CBD80(PPC::Runtime::GCContext* context)
{
/*801CBD80 001C8B80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CBD84 001C8B84*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CBD88 001C8B88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CBD8C 001C8B8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CBD90 001C8B90*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CBD94 001C8B94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r3));
/* 801CBD98 001C8B98  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801CBD9C 001C8B9C*/ PPC::Runtime::ASM::beq(.L_801CBDB4);
/*801CBDA0 001C8BA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/*801CBDA4 001C8BA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801CBDA8 001C8BA8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801CBDAC 001C8BAC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/*801CBDB0 001C8BB0*/ PPC::Runtime::ASM::b(.L_801CBE20);
RUNTIME_PPC_JUMP_LABEL(.L_801CBDB4, 0x801CBDB4) //this is a jump label
/*801CBDB4 001C8BB4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x354);
/*801CBDB8 001C8BB8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801CBDBC 001C8BBC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CBDC0 001C8BC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r3));
/*801CBDC4 001C8BC4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CBDC8 001C8BC8*/ PPC::Runtime::ASM::blt(.L_801CBDD8);
/*801CBDCC 001C8BCC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/* 801CBDD0 001C8BD0  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*801CBDD4 001C8BD4*/ PPC::Runtime::ASM::beq(.L_801CBE10);
RUNTIME_PPC_JUMP_LABEL(.L_801CBDD8, 0x801CBDD8) //this is a jump label
/*801CBDD8 001C8BD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/* 801CBDDC 001C8BDC  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801CBDE0 001C8BE0*/ PPC::Runtime::ASM::bne(.L_801CBE20);
/*801CBDE4 001C8BE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801CBDE8 001C8BE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801CBDEC 001C8BEC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801CBDF0 001C8BF0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801CBDF4 001C8BF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*801CBDF8 001C8BF8*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801CBDFC 001C8BFC*/ PPC::Runtime::ASM::beq(.L_801CBE20);
/*801CBE00 001C8C00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CBE04 001C8C04*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801CBE08 001C8C08*/ PPC::Runtime::ASM::bctrl();
/*801CBE0C 001C8C0C*/ PPC::Runtime::ASM::b(.L_801CBE20);
RUNTIME_PPC_JUMP_LABEL(.L_801CBE10, 0x801CBE10) //this is a jump label
/*801CBE10 001C8C10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/*801CBE14 001C8C14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801CBE18 001C8C18*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801CBE1C 001C8C1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CBE20, 0x801CBE20) //this is a jump label
/*801CBE20 001C8C20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CBE24 001C8C24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CBE28 001C8C28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CBE2C 001C8C2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CBE30 001C8C30*/ PPC::Runtime::ASM::blr();
}