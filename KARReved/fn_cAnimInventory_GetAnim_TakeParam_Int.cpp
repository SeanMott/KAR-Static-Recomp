//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_cAnimInventory_GetAnim_TakeParam_Int(PPC::Runtime::GCContext* context)
{
/*800DF4B0 000DC2B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800DF4B4 000DC2B4*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*800DF4B8 000DC2B8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800DF4BC 000DC2BC*/ PPC::Runtime::ASM::blr();
}