//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_grGetLocalDeadPosNum(PPC::Runtime::GCContext* context)
{
/*800E5438 000E2238*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E543C 000E223C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E5440 000E2240*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800E5444 000E2244*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800E5448 000E2248*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800E544C 000E224C*/ PPC::Runtime::ASM::beq(.L_800E5458);
/*800E5450 000E2250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E5454 000E2254*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800E5458, 0x800E5458) //this is a jump label
/*800E5458 000E2258*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800E545C 000E225C*/ PPC::Runtime::ASM::blr();
}