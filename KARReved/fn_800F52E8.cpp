//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F73FC.hpp"
#include "fn_800F62C4.hpp"



void fn_800F52E8(PPC::Runtime::GCContext* context)
{
/*800F52E8 000F20E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F52EC 000F20EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F52F0 000F20F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F52F4 000F20F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F52F8 000F20F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F52FC 000F20FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*800F5300 000F2100*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*800F5304 000F2104*/ PPC::Runtime::ASM::beq(.L_800F5310);
/*800F5308 000F2108*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800F530C 000F210C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_800F5310, 0x800F5310) //this is a jump label
/*800F5310 000F2110*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
/* 800F5314 000F2114  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800F5318 000F2118*/ PPC::Runtime::ASM::beq(.L_800F5324);
/*800F531C 000F211C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F5320 000F2120*/ PPC::Runtime::ASM::bl(fn_800F73FC);
RUNTIME_PPC_JUMP_LABEL(.L_800F5324, 0x800F5324) //this is a jump label
/*800F5324 000F2124*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F5328 000F2128*/ PPC::Runtime::ASM::bl(fn_800F62C4);
/*800F532C 000F212C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5330 000F2130*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F5334 000F2134*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F5338 000F2138*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F533C 000F213C*/ PPC::Runtime::ASM::blr();
}