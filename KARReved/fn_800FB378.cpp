//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_800FB3B0.hpp"



void fn_800FB378(PPC::Runtime::GCContext* context)
{
/*800FB378 000F8178*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FB37C 000F817C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FB380 000F8180*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FB384 000F8184*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FB388 000F8188*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800FB38C 000F818C*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*800FB390 000F8190*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*800FB394 000F8194*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800FB398 000F8198*/ PPC::Runtime::ASM::bl(fn_800FB3B0);
/*800FB39C 000F819C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FB3A0 000F81A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FB3A4 000F81A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FB3A8 000F81A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FB3AC 000F81AC*/ PPC::Runtime::ASM::blr();
}