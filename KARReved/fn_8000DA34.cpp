//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000CD40.hpp"
#include "fn_8000CD10.hpp"
#include "fn_800088C8.hpp"
#include "fn_8000CD10.hpp"
#include "fn_800088C8.hpp"



void fn_8000DA34(PPC::Runtime::GCContext* context)
{
/*8000DA34 0000A834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000DA38 0000A838*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000DA3C 0000A83C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000DA40 0000A840*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000DA44 0000A844*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000DA48 0000A848*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000DA4C 0000A84C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8000DA50 0000A850*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r3));
/*8000DA54 0000A854*/ PPC::Runtime::ASM::bl(fn_8000CD40);
/*8000DA58 0000A858*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8000DA5C 0000A85C*/ PPC::Runtime::ASM::bne(.L_8000DA7C);
/*8000DA60 0000A860*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8000DA64 0000A864*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000DA68 0000A868*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r31));
/*8000DA6C 0000A86C*/ PPC::Runtime::ASM::bl(fn_8000CD10);
/*8000DA70 0000A870*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000DA74 0000A874*/ PPC::Runtime::ASM::bl(fn_800088C8);
/*8000DA78 0000A878*/ PPC::Runtime::ASM::b(.L_8000DA8C);
RUNTIME_PPC_JUMP_LABEL(.L_8000DA7C, 0x8000DA7C) //this is a jump label
/*8000DA7C 0000A87C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8000DA80 0000A880*/ PPC::Runtime::ASM::bl(fn_8000CD10);
/*8000DA84 0000A884*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000DA88 0000A888*/ PPC::Runtime::ASM::bl(fn_800088C8);
RUNTIME_PPC_JUMP_LABEL(.L_8000DA8C, 0x8000DA8C) //this is a jump label
/*8000DA8C 0000A88C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000DA90 0000A890*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000DA94 0000A894*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000DA98 0000A898*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000DA9C 0000A89C*/ PPC::Runtime::ASM::blr();
}