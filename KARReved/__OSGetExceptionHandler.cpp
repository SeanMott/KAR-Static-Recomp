//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __OSGetExceptionHandler(PPC::Runtime::GCContext* context)
{
/*803D2C98 003CFA98*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*803D2C9C 003CFA9C*/ PPC::Runtime::ASM::lwz(context->r3, OSExceptionTable_805DDE8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D2CA0 003CFAA0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803D2CA4 003CFAA4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*803D2CA8 003CFAA8*/ PPC::Runtime::ASM::blr();
}