//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80252D28(PPC::Runtime::GCContext* context)
{
/*80252D28 0024FB28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80252D2C 0024FB2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35b, context->r3));
/*80252D30 0024FB30*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 26);
/*80252D34 0024FB34*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*80252D38 0024FB38*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*80252D3C 0024FB3C*/ PPC::Runtime::ASM::blr();
}