//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80199668(PPC::Runtime::GCContext* context)
{
/*80199668 00196468*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*8019966C 0019646C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80199670 00196470*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*80199674 00196474*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80199678 00196478*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8019967C 0019647C*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80199680 00196480*/ PPC::Runtime::ASM::blr();
}