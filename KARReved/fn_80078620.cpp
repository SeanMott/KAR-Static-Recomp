//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80078620(PPC::Runtime::GCContext* context)
{
/*80078620 00075420*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80078624 00075424*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DD610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80078628 00075428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8007862C 0007542C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80078630 00075430*/ PPC::Runtime::ASM::bnelr();
/*80078634 00075434*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DD60C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80078638 00075438*/ PPC::Runtime::ASM::blr();
}