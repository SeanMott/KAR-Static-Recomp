//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80250098(PPC::Runtime::GCContext* context)
{
/*80250098 0024CE98*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025009C 0024CE9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802500A0 0024CEA0*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*802500A4 0024CEA4*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*802500A8 0024CEA8*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*802500AC 0024CEAC*/ PPC::Runtime::ASM::blr();
}