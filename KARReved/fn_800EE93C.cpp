//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800EE93C(PPC::Runtime::GCContext* context)
{
/*800EE93C 000EB73C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EE940 000EB740*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800EE944 000EB744*/ PPC::Runtime::ASM::beq(.L_800EE95C);
/*800EE948 000EB748*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*800EE94C 000EB74C*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800EE950 000EB750*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800EE954 000EB754*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*800EE958 000EB758*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EE95C, 0x800EE95C) //this is a jump label
/*800EE95C 000EB75C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800EE960 000EB760*/ PPC::Runtime::ASM::blr();
}