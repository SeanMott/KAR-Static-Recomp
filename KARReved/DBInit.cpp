//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__DBExceptionDestination.hpp"
#include "__DBExceptionDestination.hpp"



void DBInit(PPC::Runtime::GCContext* context)
{
/*803C3430 003C0230*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803C3434 003C0234*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x40);
/*803C3438 003C0238*/ PPC::Runtime::ASM::lis(context->r3, __DBExceptionDestination @ Get_MemoryOffset_HighBit);
/*803C343C 003C023C*/ PPC::Runtime::ASM::stw(context->r0, __DBInterface @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C3440 003C0240*/ PPC::Runtime::ASM::addi(context->r3, context->r3, __DBExceptionDestination @ Get_MemoryOffset_LowBit);
/*803C3444 003C0244*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x8000);
/*803C3448 003C0248*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r4));
/*803C344C 003C024C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C3450 003C0250*/ PPC::Runtime::ASM::stw(context->r0, DBVerbose @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C3454 003C0254*/ PPC::Runtime::ASM::blr();
}