//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C2ECC(PPC::Runtime::GCContext* context)
{
/*801C2ECC 001BFCCC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a8, context->r3));
/*801C2ED0 001BFCD0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801C2ED4 001BFCD4*/ PPC::Runtime::ASM::beqlr();
/*801C2ED8 001BFCD8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*801C2EDC 001BFCDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a8, context->r3));
/*801C2EE0 001BFCE0*/ PPC::Runtime::ASM::blr();
}