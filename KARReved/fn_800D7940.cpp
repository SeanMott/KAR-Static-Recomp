//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D7940(PPC::Runtime::GCContext* context)
{
/*800D7940 000D4740*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x140);
/*800D7944 000D4744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800D7948 000D4748*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x110);
/*800D794C 000D474C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*800D7950 000D4750*/ PPC::Runtime::ASM::blr();
}