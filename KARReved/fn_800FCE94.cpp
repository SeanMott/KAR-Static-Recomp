//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800FCE94(PPC::Runtime::GCContext* context)
{
/*800FCE94 000F9C94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FCE98 000F9C98*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FCE9C 000F9C9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FCEA0 000F9CA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FCEA4 000F9CA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r3));
/*800FCEA8 000F9CA8*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*800FCEAC 000F9CAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FCEB0 000F9CB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FCEB4 000F9CB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FCEB8 000F9CB8*/ PPC::Runtime::ASM::blr();
}