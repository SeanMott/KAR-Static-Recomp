//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"
#include "fn_80138AB0.hpp"



void fn_801571C4(PPC::Runtime::GCContext* context)
{
/*801571C4 00153FC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801571C8 00153FC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801571CC 00153FCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801571D0 00153FD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801571D4 00153FD4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801571D8 00153FD8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801571DC 00153FDC*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801571E0 00153FE0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801571E4 00153FE4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801571E8 00153FE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e8, context->r3));
/*801571EC 00153FEC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801571F0 00153FF0*/ PPC::Runtime::ASM::beq(.L_80157214);
/*801571F4 00153FF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801571F8 00153FF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*801571FC 00153FFC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80157200 00154000*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80157204 00154004*/ PPC::Runtime::ASM::bne(.L_80157210);
/*80157208 00154008*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*8015720C 0015400C*/ PPC::Runtime::ASM::b(.L_80157214);
RUNTIME_PPC_JUMP_LABEL(.L_80157210, 0x80157210) //this is a jump label
/*80157210 00154010*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80157214, 0x80157214) //this is a jump label
/*80157214 00154014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80157218 00154018*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015721C 0015401C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80157220 00154020*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80157224 00154024*/ PPC::Runtime::ASM::blr();
}