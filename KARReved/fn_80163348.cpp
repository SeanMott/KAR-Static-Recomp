//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80163348(PPC::Runtime::GCContext* context)
{
/*80163348 00160148*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016334C 0016014C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80163350 00160150*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163354 00160154*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80163358 00160158*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016335C 0016015C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80163360 00160160*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*80163364 00160164*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80163368 00160168*/ PPC::Runtime::ASM::beq(.L_80163378);
/*8016336C 0016016C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80163370 00160170*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80163374 00160174*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80163378, 0x80163378) //this is a jump label
/*80163378 00160178*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016337C 0016017C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80163380 00160180*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80163384 00160184*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80163388 00160188*/ PPC::Runtime::ASM::blr();
}