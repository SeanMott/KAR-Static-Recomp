//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8037CF54(PPC::Runtime::GCContext* context)
{
/*8037CF54 00379D54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x7);
/*8037CF58 00379D58*/ PPC::Runtime::ASM::bge(.L_8037CF74);
/*8037CF5C 00379D5C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F3424 @ Get_MemoryOffset_HighBit);
/*8037CF60 00379D60*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 3);
/*8037CF64 00379D64*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_804F3424 @ Get_MemoryOffset_LowBit);
/*8037CF68 00379D68*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8037CF6C 00379D6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8037CF70 00379D70*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8037CF74, 0x8037CF74) //this is a jump label
/*8037CF74 00379D74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037CF78 00379D78*/ PPC::Runtime::ASM::blr();
}