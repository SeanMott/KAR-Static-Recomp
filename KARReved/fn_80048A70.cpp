//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80078720.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_80048A70(PPC::Runtime::GCContext* context)
{
/*80048A70 00045870*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048A74 00045874*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048A78 00045878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048A7C 0004587C*/ PPC::Runtime::ASM::bl(fn_80078720);
/*80048A80 00045880*/ PPC::Runtime::ASM::li(context->r3, 0x18);
/*80048A84 00045884*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
/*80048A88 00045888*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048A8C 0004588C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048A90 00045890*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048A94 00045894*/ PPC::Runtime::ASM::blr();
}