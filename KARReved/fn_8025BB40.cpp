//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_8025BB40(PPC::Runtime::GCContext* context)
{
/*8025BB40 00258940*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025BB44 00258944*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025BB48 00258948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BB4C 0025894C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BB50 00258950*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025BB54 00258954*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025BB58 00258958*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8025BB5C 0025895C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025BB60 00258960*/ PPC::Runtime::ASM::bl(fn_80250400);
/*8025BB64 00258964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BB68 00258968*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BB6C 0025896C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025BB70 00258970*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025BB74 00258974*/ PPC::Runtime::ASM::blr();
}