//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007A598.hpp"



void fn_800EF864(PPC::Runtime::GCContext* context)
{
/*800EF864 000EC664*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800EF868 000EC668*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EF86C 000EC66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EF870 000EC670*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
/*800EF874 000EC674*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x718, context->r3));
/*800EF878 000EC678*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800EF87C 000EC67C*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*800EF880 000EC680*/ PPC::Runtime::ASM::bl(fn_8007A598);
/*800EF884 000EC684*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EF888 000EC688*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EF88C 000EC68C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800EF890 000EC690*/ PPC::Runtime::ASM::blr();
}