//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80250940(PPC::Runtime::GCContext* context)
{
/*80250940 0024D740*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r3));
/*80250944 0024D744*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80250948 0024D748*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*8025094C 0024D74C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r3));
/*80250950 0024D750*/ PPC::Runtime::ASM::blr();
}