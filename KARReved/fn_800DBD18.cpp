//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800DBD18(PPC::Runtime::GCContext* context)
{
/*800DBD18 000D8B18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800DBD1C 000D8B1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DBD20 000D8B20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DBD24 000D8B24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800DBD28 000D8B28*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*800DBD2C 000D8B2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DBD30 000D8B30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DBD34 000D8B34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800DBD38 000D8B38*/ PPC::Runtime::ASM::blr();
}