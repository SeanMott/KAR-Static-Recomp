//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8015C304(PPC::Runtime::GCContext* context)
{
/*8015C304 00159104*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8015C308 00159108*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015C30C 0015910C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015C310 00159110*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015C314 00159114*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8015C318 00159118*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015C31C 0015911C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015C320 00159120*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C324, 0x8015C324) //this is a jump label
/*8015C324 00159124*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015C328 00159128*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8015C32C 0015912C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015C330 00159130*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8015C334 00159134*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80c, context->r30));
/*8015C338 00159138*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015C33C 0015913C*/ PPC::Runtime::ASM::beq(.L_8015C348);
/*8015C340 00159140*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8015C344 00159144*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8015C348, 0x8015C348) //this is a jump label
/*8015C348 00159148*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8015C34C 0015914C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x14);
/*8015C350 00159150*/ PPC::Runtime::ASM::blt(.L_8015C324);
/*8015C354 00159154*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015C358 00159158*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015C35C 0015915C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015C360 00159160*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015C364 00159164*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015C368 00159168*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8015C36C 0015916C*/ PPC::Runtime::ASM::blr();
}