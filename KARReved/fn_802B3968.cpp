//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B3998.hpp"



void fn_802B3968(PPC::Runtime::GCContext* context)
{
/*802B3968 002B0768*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802B396C 002B076C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B3970 002B0770*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802B3974 002B0774*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B3978 002B0778*/ PPC::Runtime::ASM::beq(.L_802B3988);
/*802B397C 002B077C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802B3980 002B0780*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*802B3984 002B0784*/ PPC::Runtime::ASM::bl(fn_802B3998);
RUNTIME_PPC_JUMP_LABEL(.L_802B3988, 0x802B3988) //this is a jump label
/*802B3988 002B0788*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B398C 002B078C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B3990 002B0790*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802B3994 002B0794*/ PPC::Runtime::ASM::blr();
}