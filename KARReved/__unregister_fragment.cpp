//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __unregister_fragment(PPC::Runtime::GCContext* context)
{
/*803AF810 003AC610*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803AF814 003AC614*/ PPC::Runtime::ASM::bltlr();
/*803AF818 003AC618*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*803AF81C 003AC61C*/ PPC::Runtime::ASM::bgelr();
/*803AF820 003AC620*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0xc);
/*803AF824 003AC624*/ PPC::Runtime::ASM::lis(context->r3, fragmentinfo_80569A00 @ Get_MemoryOffset_HighBit);
/*803AF828 003AC628*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803AF82C 003AC62C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fragmentinfo_80569A00 @ Get_MemoryOffset_LowBit);
/*803AF830 003AC630*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*803AF834 003AC634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AF838 003AC638*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803AF83C 003AC63C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803AF840 003AC640*/ PPC::Runtime::ASM::blr();
}