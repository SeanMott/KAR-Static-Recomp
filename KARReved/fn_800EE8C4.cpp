//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800EE8C4(PPC::Runtime::GCContext* context)
{
/*800EE8C4 000EB6C4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EE8C8 000EB6C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800EE8CC 000EB6CC*/ PPC::Runtime::ASM::beq(.L_800EE8E8);
/*800EE8D0 000EB6D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800EE8D4 000EB6D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EE8D8 000EB6D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800EE8DC 000EB6DC*/ PPC::Runtime::ASM::bne(.L_800EE8E8);
/*800EE8E0 000EB6E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800EE8E4 000EB6E4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EE8E8, 0x800EE8E8) //this is a jump label
/*800EE8E8 000EB6E8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800EE8EC 000EB6EC*/ PPC::Runtime::ASM::blr();
}