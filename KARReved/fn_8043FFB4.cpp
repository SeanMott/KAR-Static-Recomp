//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8043FFB4(PPC::Runtime::GCContext* context)
{
/*8043FFB4 0043CDB4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0xf);
/*8043FFB8 0043CDB8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 4);
/*8043FFBC 0043CDBC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE430 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043FFC0 0043CDC0*/ PPC::Runtime::ASM::blr();
}