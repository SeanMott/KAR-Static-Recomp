//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_MObjClearFlags(PPC::Runtime::GCContext* context)
{
/*803F98DC 003F66DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803F98E0 003F66E0*/ PPC::Runtime::ASM::beqlr();
/*803F98E4 003F66E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803F98E8 003F66E8*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r4);
/*803F98EC 003F66EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803F98F0 003F66F0*/ PPC::Runtime::ASM::blr();
}